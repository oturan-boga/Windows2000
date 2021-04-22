//+------------------------------------------------------------------------
//
//  File:       strtype3.c
//
//  Contents:   widechar character type function (CT_CTYPE3)
//
//-------------------------------------------------------------------------

#include <headers.hxx>

#ifndef X_STRTYPE_HXX_
#define X_STRTYPE_HXX_
#include "strtype.hxx"
#endif

static const BYTE abType3PageSub[256] = 
{
    0x00, 0x80, 0x81, 0x82, 0x00, 0x83, 0x84, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 
    0x00, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x8e, 0x8f, 0x90, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x91, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x20, 0x92, 0x00, 0x00, 0x93, 0x94, 0x00
};

static const BYTE abType3Page0[256] = 
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 
    0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x09, 0x09, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x09, 0x09, 0x01, 0x09, 0x09, 0x01, 
    0x01, 0x01, 0x00, 0x01, 0x09, 0x01, 0x01, 0x09, 
    0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const BYTE abType3Page32[256] = 
{
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
    0x11, 0x11, 0x01, 0x01, 0x11, 0x11, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x09, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const BYTE abType3Page48[256] = 
{
    0x11, 0x11, 0x11, 0x00, 0x00, 0x20, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x11, 0x11, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x01, 0x01, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 
    0x00, 0x06, 0x06, 0x16, 0x16, 0x04, 0x04, 0x00, 
    0x00, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
    0x12, 0x12, 0x12, 0x12, 0x02, 0x12, 0x02, 0x12, 
    0x02, 0x12, 0x02, 0x12, 0x02, 0x12, 0x02, 0x12, 
    0x02, 0x12, 0x02, 0x12, 0x02, 0x12, 0x02, 0x12, 
    0x02, 0x12, 0x02, 0x12, 0x12, 0x02, 0x12, 0x02, 
    0x12, 0x02, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
    0x02, 0x02, 0x12, 0x02, 0x02, 0x12, 0x02, 0x02, 
    0x12, 0x02, 0x02, 0x12, 0x02, 0x02, 0x12, 0x12, 
    0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 
    0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x02, 0x12, 
    0x02, 0x02, 0x12, 0x12, 0x02, 0x02, 0x02, 0x02, 
    0x02, 0x02, 0x02, 0x13, 0x06, 0x02, 0x02, 0x00
};

static const BYTE abType3Page255[256] = 
{
    0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 
    0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x11, 0x11, 
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
    0x11, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 
    0x11, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x10, 0x10, 0x10, 0x11, 0x11, 0x11, 0x11, 0x00, 
    0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0e, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 
    0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
    0x00, 0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

struct tagType3DualValue
{
    DWORD   adwBitfield[8];
    DWORD   adwValue[2];
}
aType3DualValue[21] =
{
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,   // Page1
      0x00000000, 0x0000000f, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,   // Page2
      0x00000000, 0x3f000000, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0x00000000, 0x04000000, 0x000000b0,   // Page3
      0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0xf8000000, 0x00000000, 0x00000200,   // Page5
      0x40000000, 0x00000009, 0x00180000, 0x00000000, 0x00000001 },
    { 0x88001000, 0x00000000, 0x00000000, 0x00003c00, 0x00000000,   // Page6
      0x00000000, 0x00100000, 0x00000200, 0x00000000, 0x00000001 },
    { 0x00000000, 0x80008000, 0x0c008040, 0x00000000, 0x00000000,   // Page14
      0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,   // Page31
      0xe0000000, 0xe000e003, 0x6000e000, 0x00000000, 0x00000001 },
    { 0x00800000, 0x00000000, 0x00000000, 0x00000000, 0xffff0000,   // Page33
      0xffffffff, 0xffffffff, 0x000007ff, 0x00000000, 0x00000001 },
    { 0x40000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,   // Page34
      0x00000000, 0x00000000, 0xfffc0000, 0x00000001, 0x00000000 },
    { 0x00000002, 0x00000000, 0x00000000, 0xf8000000, 0xffffffff,   // Page35
      0xffffffff, 0xffffffff, 0xffffffff, 0x00000001, 0x00000000 },
    { 0x00000000, 0xffffffe0, 0xfffff800, 0xffffffff, 0xffffffff,   // Page36
      0xffffffff, 0xffffffff, 0xffffffff, 0x00000001, 0x00000000 },
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xffc00000,   // Page37
      0x00002000, 0x00000000, 0xffff8000, 0x00000001, 0x00000000 },
    { 0x03f00000, 0x00000000, 0x00000000, 0xffff0000, 0xffffffff,   // Page38
      0xffffffff, 0xffffffff, 0xffffffff, 0x00000001, 0x00000000 },
    { 0xfffff3de, 0xfffffeff, 0x7f47afff, 0x000000fe, 0xff100000,   // Page39
      0x7ffeffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0xfffe0000, 0xffffffff, 0x0000001f, 0x00000000,   // Page49
      0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000010 },
    { 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x00000000,   // Page50
      0x00000000, 0x00000fff, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0xff000000, 0x0001ffff, 0x00000000,   // Page51
      0x00000000, 0x00000000, 0x7fffffff, 0x00000000, 0x00000001 },
    { 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,   // Page159
      0xffffffc0, 0xffffffff, 0xffffffff, 0x00000020, 0x00000000 },
    { 0x00000000, 0xffffc000, 0xffffffff, 0xffffffff, 0xffffffff,   // Page250
      0xffffffff, 0xffffffff, 0xffffffff, 0x00000020, 0x00000000 },
    { 0x00000000, 0xc0000000, 0x00000000, 0x00000000, 0x00000000,   // Page253
      0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 },
    { 0x00000000, 0xfff90000, 0xfef7fe1f, 0x00000f77, 0x00000000,   // Page254
      0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001 }
};

BOOL _stdcall
GetStringType3Ex(
    LPCWSTR lpSrcStr,    // string arg
    int     cchSrc,      // length (or -1)
    LPBYTE  lpCharType ) // output buffer
{
    LPCWSTR  lpStop = lpSrcStr + ((cchSrc == -1) ? MAXLONG : cchSrc);

    while (lpSrcStr < lpStop)
    {
        WCHAR wch = *lpSrcStr++;
        BYTE bCharType;
        BYTE bPageSub;

        if (!wch && cchSrc == -1)
            break;

        switch (wch & (unsigned int)0xff00)
        {
            case 0x0000:
                bCharType = abType3Page0[wch];         // Page0: 4 values
                break;
            case 0x2000:
                bCharType = abType3Page32[wch & 0xff]; // Page32: 4 values
                break;
            case 0x3000:
                bCharType = abType3Page48[wch & 0xff];  // Page48: 10 values
                break;
            case 0xff00:
                bCharType = abType3Page255[wch & 0xff]; // Page255: 7 values
                break;
            default:
                bPageSub = abType3PageSub[wch>>8];

                if (bPageSub & 0x80)                  // 21 pages have 2 values
                {
                    struct tagType3DualValue *p = aType3DualValue +
                        (bPageSub & 0x7f);

                    bCharType = (BYTE) p->adwValue[(p->adwBitfield[(wch>>5)&7]
                        >> (wch & 0x1f)) & 1];
                }
                else                                  // 231 pages have 1 value
                {
                    bCharType = bPageSub;
                }
                break;
        }

        *lpCharType++ = bCharType;
    }
    
    return TRUE;
}
