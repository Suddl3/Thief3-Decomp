// Game/Unsorted_10C64E80_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// 0x184 bytes; its constructor (0x10C64F60) has no symbol.
class Class_10C662F0
{
public:
    Class_10C662F0();

    char Unknown00[0x184];
};

extern Class_10C662F0* DAT_10ff7120;

// FUNCTION: 0x10C65090 ?FUN_10c65090@@YGPAVClass_10C662F0@@HPAH@Z
Class_10C662F0* FUN_10c65090()
{
    if (!DAT_10ff7120)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10ff7120 = new(0, 0, 0, 0, 0) Class_10C662F0;
        FUN_10905aa0()->Virtual9();
    }
    return DAT_10ff7120;
}
