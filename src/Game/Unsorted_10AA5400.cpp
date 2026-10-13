// Game/Unsorted_10AA5400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10AA52E0
{
public:
    Class_10AA52E0(int A);

    char Unknown00[0x18];
};

// FUNCTION: 0x10AA54A0 ?FUN_10aa54a0@@YAHH@Z
int FUN_10aa54a0(int A)
{
    GetAllocator()->Virtual8(0, 0);
    Class_10AA52E0* Result = new(0, 0, 0, 0, 0) Class_10AA52E0(A);
    GetAllocator()->Virtual9();
    return (int)Result;
}
