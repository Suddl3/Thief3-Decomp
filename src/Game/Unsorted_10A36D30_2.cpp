// Game/Unsorted_10A36D30_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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
    char Unknown00[0x44];
    FVector Unknown44;
    char Unknown50[0x60];
    Class_10D9FEE0* Unknown0B0;
};

// FUNCTION: 0x10A37030 ?FUN_10a37030@@YA_NPAVClass_10A370C0@@ABVFVector@@@Z
bool FUN_10a37030(Class_10A370C0* Obj, const FVector& A)
{
    Obj->Unknown44 = A;
    if (!Obj->Unknown0B0)
        return false;
    Obj->Unknown0B0->FUN_10d9fee0(1, 1);
    Obj->Unknown0B0->FUN_10da0710(A);
    return true;
}
