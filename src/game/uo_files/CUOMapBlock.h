#ifndef _INC_UOFILES_CUOMAPBLOCK_H
#define _INC_UOFILES_CUOMAPBLOCK_H

#include "../../common/common.h"
#include "CUOMapMeter.h"
#include "macros.h"

// All these structures must be byte packed.
#if defined _WIN32 && (!__MINGW32__)
// Microsoft dependant pragma
#pragma pack(1)
#define PACK_NEEDED
#else
// GCC based compiler you can add:
#define PACK_NEEDED __attribute__ ((packed))
#endif

/**
* 196 byte block = 8x8 meters, (map0.mul)
*/
struct CUOMapBlock
{
    word m_wID1;  ///< ?
    word m_wID2;
    CUOMapMeter m_Meter[UO_BLOCK_SIZE * UO_BLOCK_SIZE];
} PACK_NEEDED;

// Turn off structure packing.
#if defined _WIN32 && (!__MINGW32__)
#pragma pack()
#else
#undef PACK_NEEDED
#endif

#endif //_INC_UOFILES_CUOMAPBLOCK_H