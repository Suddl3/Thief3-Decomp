// Game/Unsorted_10C62290.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class Class_10C62290
{
public:
    Class_10C62290(int A);

    char Unknown00[0x13c];
};

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C624C0 ?FUN_10c624c0@@YGPAVClass_10C62290@@H@Z
Class_10C62290* __stdcall FUN_10c624c0(int A)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10C62290* Result = new(0, 0, 0, 0, 0) Class_10C62290(A);
    GetAllocator()->Virtual9();
    return Result;
}
