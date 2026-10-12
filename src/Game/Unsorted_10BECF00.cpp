// Game/Unsorted_10BECF00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BC4160.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BECF00.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* GetAllocator();

class Class_10BECF00;

class Class_10C2EA30
{
public:
    Class_10C2EA30(int A, int B, Class_10BECF00* C, int D, int E, int F, int G, int H);

    char Unknown00[0x58];
};

class Class_10bf7f90
{
public:
    void FUN_10bf7f90(int A, int B);
};

// FUNCTION: 0x10BECF00 ?FUN_10becf00@Class_10BECF00@@QAEXH@Z
void Class_10BECF00::FUN_10becf00(int A)
{
    if (Unknown44 != 0)
    {
        GetAllocator()->Virtual8(0, 0);
        Class_10C2EA30* Obj = new(0, 0, 0, 0, 0) Class_10C2EA30(GetTargetLinkType(), A, this, Unknown44, 0, 0, 0x11, 1);
        GetAllocator()->Virtual9();
        ((Class_10bf7f90*)FUN_10bc4160())->FUN_10bf7f90((int)Obj, 1);
    }
}
