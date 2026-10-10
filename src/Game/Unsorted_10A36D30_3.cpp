// Game/Unsorted_10A36D30_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUNCTION: 0x10A37080 ?FUN_10a37080@@YA_NPAVClass_10A370C0@@AAVFVector@@@Z
bool FUN_10a37080(Class_10A370C0* Obj, FVector& Out)
{
    if (!Obj->Unknown0B0)
        return false;
    Out = Obj->Unknown0B0->FUN_10da00f0();
    return true;
}
