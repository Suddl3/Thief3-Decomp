// Game/Unsorted_10A22E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBuildFleshBSP.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern cBuildFleshBSP* DAT_10f39f08;

// FUNCTION: 0x10A22E90 ?FUN_10a22e90@@YAPAVcBuildFleshBSP@@XZ
cBuildFleshBSP* FUN_10a22e90()
{
    if (!DAT_10f39f08)
        DAT_10f39f08 = new(0, 0, 0, 0, 0) cBuildFleshBSP;
    return DAT_10f39f08;
}
