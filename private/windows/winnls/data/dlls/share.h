/*++

Copyright (c) 1991-1999,  Microsoft Corporation  All rights reserved.

Module Name:

    share.h

Abstract:

    This file contains the header information shared by all of code page
    DLL modules.

Revision History:

    10-30-96    JulieB    Created.

--*/



#ifndef _NLS_DLLS_
#define _NLS_DLLS_




////////////////////////////////////////////////////////////////////////////
//
//  RTL Includes Files.
//
////////////////////////////////////////////////////////////////////////////

#ifndef RC_INVOKED
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#endif




////////////////////////////////////////////////////////////////////////////
//
//  Include Files.
//
////////////////////////////////////////////////////////////////////////////

#include <windows.h>
#include <winnlsp.h>




////////////////////////////////////////////////////////////////////////////
//
//  Constant Declarations.
//
////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////
//
//  Typedef Declarations.
//
////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////
//
//  Macro Definitions.
//
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//
//  NLS_ALLOC_MEM
//
//  Allocates the given number of bytes of memory from the process heap,
//  zeros the memory buffer, and returns the handle.
//
//  DEFINED AS A MACRO.
//
//  05-31-91    JulieB    Created.
////////////////////////////////////////////////////////////////////////////

#define NLS_ALLOC_MEM(dwBytes)                                             \
    ( RtlAllocateHeap( RtlProcessHeap(),                                   \
                       HEAP_ZERO_MEMORY,                                   \
                       dwBytes ) )


////////////////////////////////////////////////////////////////////////////
//
//  NLS_FREE_MEM
//
//  Frees the memory of the given handle from the process heap.
//
//  DEFINED AS A MACRO.
//
//  05-31-91    JulieB    Created.
////////////////////////////////////////////////////////////////////////////

#define NLS_FREE_MEM(hMem)                                                 \
    ( (hMem) ? (RtlFreeHeap( RtlProcessHeap(),                             \
                             0,                                            \
                             (PVOID)hMem ))                                \
             : 0 )




////////////////////////////////////////////////////////////////////////////
//
//  Function Prototypes
//
////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////
//
//  Global Variables
//
//  Globals are included last because they may require some of the types
//  being defined above.
//
////////////////////////////////////////////////////////////////////////////



#endif   // _NLS_DLLS_
