// Game/Unsorted_10BA1690.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA1270.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern Class_10BA1270* DAT_10ff6680;

// FUNCTION: 0x10BA1710 ?FUN_10ba1710@@YAPAVClass_10BA1270@@XZ
Class_10BA1270* FUN_10ba1710()
{
    if (!DAT_10ff6680)
        DAT_10ff6680 = new((int)DAT_10ff6680, 0, 0, 0, 0) Class_10BA1270;
    return DAT_10ff6680;
}
