/*
**  CUTILS.C
**
**  Common utilities for common controls
**
*/

#include "ctlspriv.h"

int iDitherCount = 0;
HBRUSH hbrDither = NULL;

int nSysColorChanges = 0;
DWORD rgbFace;			// globals used a lot
DWORD rgbShadow;
DWORD rgbHilight;
DWORD rgbFrame;

int iThumbCount = 0;
HBITMAP hbmThumb = NULL;     // the thumb bitmap

#define CCS_ALIGN (CCS_TOP|CCS_NOMOVEY|CCS_BOTTOM)


static HBITMAP NEAR PASCAL CreateDitherBitmap()
{
    PBITMAPINFO pbmi;
    HBITMAP hbm;
    HDC hdc;
    int i;
    long patGray[8];
    DWORD rgb;

    pbmi = (PBITMAPINFO)LocalAlloc(LPTR, sizeof(BITMAPINFOHEADER) + (sizeof(RGBQUAD) * 16));
    if (!pbmi)
        return NULL;

    pbmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    pbmi->bmiHeader.biWidth = 8;
    pbmi->bmiHeader.biHeight = 8;
    pbmi->bmiHeader.biPlanes = 1;
    pbmi->bmiHeader.biBitCount = 1;
    pbmi->bmiHeader.biCompression = BI_RGB;

    rgb = GetSysColor(COLOR_BTNFACE);
    pbmi->bmiColors[0].rgbBlue  = GetBValue(rgb);
    pbmi->bmiColors[0].rgbGreen = GetGValue(rgb);
    pbmi->bmiColors[0].rgbRed   = GetRValue(rgb);
    pbmi->bmiColors[0].rgbReserved = 0;

    rgb = GetSysColor(COLOR_BTNHIGHLIGHT);
    pbmi->bmiColors[1].rgbBlue  = GetBValue(rgb);
    pbmi->bmiColors[1].rgbGreen = GetGValue(rgb);
    pbmi->bmiColors[1].rgbRed   = GetRValue(rgb);
    pbmi->bmiColors[1].rgbReserved = 0;


    /* initialize the brushes */

    for (i = 0; i < 8; i++)
       if (i & 1)
           patGray[i] = 0xAAAA5555L;   //  0x11114444L; // lighter gray
       else
           patGray[i] = 0x5555AAAAL;   //  0x11114444L; // lighter gray

    hdc = GetDC(NULL);

    hbm = CreateDIBitmap(hdc, &pbmi->bmiHeader, CBM_INIT, patGray, pbmi, DIB_RGB_COLORS);

    ReleaseDC(NULL, hdc);

    LocalFree(pbmi);

    return hbm;
}

/*---------------------------------------------------------------------------
   MySetObjectOwner
   Purpose:  Call SetObjectOwner in GDI, eliminating "<Object> not released"
             error messages when an app terminates.
   Returns:  Yep
  ---------------------------------------------------------------------------*/
static void MySetObjectOwner(HANDLE hObject)
{
#ifndef _WIN32
	VOID (FAR PASCAL *lpSetObjOwner)(HANDLE, HANDLE);
	HMODULE hMod;

	hMod = GetModuleHandle("GDI");
	if (hMod)
	{
		(FARPROC)lpSetObjOwner = GetProcAddress(hMod, MAKEINTRESOURCE(461));
		if (lpSetObjOwner)
		{
			(lpSetObjOwner)(hObject, hInst);
		}
	}
#endif
}

// initialize the hbrDither global brush
// Call this with bIgnoreCount == TRUE if you just want to update the
// current dither brush.

BOOL FAR PASCAL CreateDitherBrush(BOOL bIgnoreCount)
{
	HBITMAP hbmGray;
	HBRUSH hbrSave;

	if (bIgnoreCount && !iDitherCount)
	{
		return TRUE;
	}

	if (iDitherCount>0 && !bIgnoreCount)
	{
		iDitherCount++;
		return TRUE;
	}

	hbmGray = CreateDitherBitmap();
	if (hbmGray)
	{
		hbrSave = hbrDither;
		hbrDither = CreatePatternBrush(hbmGray);
		DeleteObject(hbmGray);
		if (hbrDither)
		{
                        MySetObjectOwner(hbrDither);
			if (hbrSave)
			{
				DeleteObject(hbrSave);
			}
			if (!bIgnoreCount)
			{
				iDitherCount = 1;
			}
			return TRUE;
		}
		else
		{
			hbrDither = hbrSave;
		}
	}

	return FALSE;
}

BOOL FAR PASCAL FreeDitherBrush(void)
{
    iDitherCount--;

    if (iDitherCount > 0)
        return FALSE;

    if (hbrDither)
        DeleteObject(hbrDither);
    hbrDither = NULL;

    return TRUE;
}


// initialize the hbmThumb global bitmap
// Call this with bIgnoreCount == TRUE if you just want to update the
// current bitmap.

void FAR PASCAL CreateThumb(BOOL bIgnoreCount)
{
	HBITMAP hbmSave;

	if (bIgnoreCount && !iThumbCount)
	{
		return;
	}

	if (iThumbCount && !bIgnoreCount)
	{
		++iThumbCount;
		return;
	}

	hbmSave = hbmThumb;

	hbmThumb = CreateMappedBitmap(hInst, IDB_THUMB, CMB_MASKED, NULL, 0);

	if (hbmThumb)
	{
		if (hbmSave)
		{
			DeleteObject(hbmSave);
		}
		if (!bIgnoreCount)
		{
			iThumbCount = 1;
		}
	}
	else
	{
		hbmThumb = hbmSave;
	}
}

void FAR PASCAL DestroyThumb(void)
{
	iThumbCount--;

	if (iThumbCount <= 0)
	{
		if (hbmThumb)
		{
			DeleteObject(hbmThumb);
		}
		hbmThumb = NULL;
		iThumbCount = 0;
	}
}

// Note that the trackbar will pass in NULL for pTBState, because it
// just wants the dither brush to be updated.

void FAR PASCAL CheckSysColors(void)
{
	static COLORREF rgbSaveFace    = 0xffffffffL,
	                rgbSaveShadow  = 0xffffffffL,
	                rgbSaveHilight = 0xffffffffL,
	                rgbSaveFrame   = 0xffffffffL;

	rgbFace    = GetSysColor(COLOR_BTNFACE);
	rgbShadow  = GetSysColor(COLOR_BTNSHADOW);
	rgbHilight = GetSysColor(COLOR_BTNHIGHLIGHT);
	rgbFrame   = GetSysColor(COLOR_WINDOWFRAME);

	if (rgbSaveFace!=rgbFace || rgbSaveShadow!=rgbShadow
		|| rgbSaveHilight!=rgbHilight || rgbSaveFrame!=rgbFrame)
	{
		++nSysColorChanges;
		// Update the brush for pushed-in buttons
		CreateDitherBrush(TRUE);
		CreateThumb(TRUE);

		rgbSaveFace    = rgbFace;
		rgbSaveShadow  = rgbShadow;
		rgbSaveHilight = rgbHilight;
		rgbSaveFrame   = rgbFrame;
	}
}
