// Game/Unsorted_10A2C650_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern cBoneAimController* DAT_10f39f2c;

// FUNCTION: 0x10A2C6B0 ?GetBoneAimController@@YAPAVcBoneAimController@@XZ
cBoneAimController* GetBoneAimController()
{
    if (!DAT_10f39f2c)
        DAT_10f39f2c = new((int)DAT_10f39f2c, 0, 0, 0, 0) cBoneAimController;
    return DAT_10f39f2c;
}
