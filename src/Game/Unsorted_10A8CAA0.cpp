// Game/Unsorted_10A8CAA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A8CAA0
{
public:
    Class_10A8CAA0(int A);

    char Unknown00[0xC];
};

// FUNCTION: 0x10A8CC30 ?FUN_10a8cc30@@YGPAVClass_10A8CAA0@@HH@Z
Class_10A8CAA0* __stdcall FUN_10a8cc30(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10A8CAA0* Result = new(0, 0, 0, 0, 0) Class_10A8CAA0(B);
    GetAllocator()->Virtual9();
    return Result;
}
