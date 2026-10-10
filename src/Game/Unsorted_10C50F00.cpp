// Game/Unsorted_10C50F00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E9BE7C
{
public:
    Class_10E9BE7C();

    char Unknown00[0x44];
};

extern Class_10E9BE7C* DAT_10ff70c4;

// FUNCTION: 0x10C51550 ?FUN_10c51550@@YAPAVClass_10E9BE7C@@XZ
Class_10E9BE7C* FUN_10c51550()
{
    if (!DAT_10ff70c4)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        DAT_10ff70c4 = new(0, 0, 0, 0, 0) Class_10E9BE7C;
        FUN_10905aa0()->Virtual9();
    }
    return DAT_10ff70c4;
}
