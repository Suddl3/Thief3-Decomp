// Game/Unsorted_10A35570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

void* operator new(unsigned int Size);

void operator delete(void* Ptr);

void FUN_10a35550(int A, int B, int C);

class Class_10DA8CD0;

class Class_10D9B090
{
public:
    void FUN_10d9a400(Class_10DA8CD0* A);
};

Class_10D9B090* FUN_10d9dcb0();

class Class_10DA8CD0
{
public:
    Class_10DA8CD0();

    char Unknown00[4];
    void (*Unknown04)(int A, int B, int C);
};

class Class_10A35590
{
public:
    void FUN_10a35590(int A);

    char Unknown00[0x40];
    Class_10DA8CD0* Unknown40;
};

// FUNCTION: 0x10A35590 ?FUN_10a35590@Class_10A35590@@QAEXH@Z
void Class_10A35590::FUN_10a35590(int A)
{
    GetAllocator()->Virtual8(0, 0);
    Unknown40 = new Class_10DA8CD0;
    GetAllocator()->Virtual9();
    Unknown40->Unknown04 = FUN_10a35550;
    FUN_10d9dcb0()->FUN_10d9a400(Unknown40);
}
