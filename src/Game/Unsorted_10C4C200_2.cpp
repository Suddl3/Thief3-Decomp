// Game/Unsorted_10C4C200_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C4D140.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10C47F80;

extern Class_10C47F80* DAT_10ff70b8;

class Class_10C4B2A0
{
public:
    Class_10C4B2A0();

    char Unknown00[0x80];
    Class_10C4D140 Unknown80;
    char Unknown81[0x23];
};

// FUNCTION: 0x10C4C2D0 ?FUN_10c4c2d0@@YAPAVClass_10C4B2A0@@XZ
Class_10C4B2A0* FUN_10c4c2d0()
{
    if (!DAT_10ff70b8)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10ff70b8 = (Class_10C47F80*)(new(0, 0, 0, 0, 0) Class_10C4B2A0);
        FUN_10905aa0()->Virtual9();
    }
    return (Class_10C4B2A0*)DAT_10ff70b8;
}
