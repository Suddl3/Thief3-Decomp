// Game/Unsorted_10A36D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10D9FEE0.h"

class FVector
{
public:
    float X, Y, Z;
};

class Class_10A370C0
{
public:
    char Unknown00[0xB0];
    Class_10D9FEE0* Unknown0B0;
};

// FUNCTION: 0x10A370C0 ?FUN_10a370c0@@YA_NPAVClass_10A370C0@@ABVFVector@@@Z
bool FUN_10a370c0(Class_10A370C0* Obj, const FVector& A)
{
    if (!Obj->Unknown0B0)
        return false;
    Obj->Unknown0B0->FUN_10d9fee0(1, 1);
    Obj->Unknown0B0->FUN_10da01b0(A);
    return true;
}

// FUNCTION: 0x10A37530 ?WrapInt16@@YAHH@Z
int WrapInt16(int A)
{
    int Positive = A >= 0;
    if (!Positive)
        A = -A;
    A &= 0xFFFF;
    if (A & 0x8000)
        A -= 0x10000;
    if (!Positive)
        A = -A;
    return A;
}
