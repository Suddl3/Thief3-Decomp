// Game/Unsorted_10A67170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e6b4c8[];

class Class_10E6B4C8
{
public:
    Class_10E6B4C8() : VTable(DAT_10e6b4c8) {}

    void** VTable;
};

extern Class_10E6B4C8* DAT_10f3a0f8;

// FUNCTION: 0x10A67170 ?FUN_10a67170@@YAPAVClass_10E6B4C8@@XZ
Class_10E6B4C8* FUN_10a67170()
{
    if (!DAT_10f3a0f8)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10E6B4C8* Result = new(0, 0, 0, 0, 0) Class_10E6B4C8;
        DAT_10f3a0f8 = Result;
        GetAllocator()->Virtual9();
    }
    return DAT_10f3a0f8;
}
