// Game/Unsorted_10A151E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10A151E0
{
public:
    Class_10A151E0();

    char Unknown00[0x48];
};

// FUNCTION: 0x10A15750 ?FUN_10a15750@@YAPAVClass_10A151E0@@XZ
Class_10A151E0* FUN_10a15750()
{
    GetAllocator()->Virtual8(0, 0);
    Class_10A151E0* Result = new(0, 0, 0, 0, 0) Class_10A151E0;
    GetAllocator()->Virtual9();
    return Result;
}
