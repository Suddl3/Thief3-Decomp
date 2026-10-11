// Game/Unsorted_10BD0BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9313C.h"

Class_10905A90_Member* FUN_10905aa0();

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10BD0CB0
{
public:
    void FUN_10bd0cb0(const Class_10E9313C& A);

    char Unknown00[0x44];
    Class_10E9313C* Unknown44[4];
};

// FUNCTION: 0x10BD0CB0 ?FUN_10bd0cb0@Class_10BD0CB0@@QAEXABVClass_10E9313C@@@Z
void Class_10BD0CB0::FUN_10bd0cb0(const Class_10E9313C& A)
{
    FUN_10905aa0()->Virtual8(0, 0);
    Class_10E9313C* Copy = new(0, 0, 0, 0, 0) Class_10E9313C(A);
    FUN_10905aa0()->Virtual9();
    for (int i = 0; i < 4; i++)
    {
        if (Unknown44[i] == 0)
        {
            Unknown44[i] = Copy;
            return;
        }
    }
}
