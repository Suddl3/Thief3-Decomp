// Game/Unsorted_10A3AD90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A3B230
{
public:
    Class_10A3B230(int A, int B);

    char Unknown00[0x168];
};

// FUNCTION: 0x10A3B3D0 ?FUN_10a3b3d0@@YAPAVClass_10A3B230@@HH@Z
Class_10A3B230* FUN_10a3b3d0(int A, int B)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10A3B230* Result = new(0, 0, 0, 0, 0) Class_10A3B230(A, B);
    GetAllocator()->Virtual9();
    return Result;
}
