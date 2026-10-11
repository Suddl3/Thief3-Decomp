// Game/Unsorted_10B49250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B3AF40_UnknownB0.h"
#include "Game/Class_10B48890.h"

class Class_10B21560
{
public:
    unsigned char FUN_10b21560();

    char Unknown00[0x44];
    FVector Unknown44;
    char Unknown50[0x60];
    Class_10B3AF40_UnknownB0* UnknownB0;
};

class Class_10B49250 : public Class_10AA82D0
{
public:
    void FUN_10b49250(Class_10B21560* A);
};

// FUNCTION: 0x10B49250 ?FUN_10b49250@Class_10B49250@@QAEXPAVClass_10B21560@@@Z
void Class_10B49250::FUN_10b49250(Class_10B21560* A)
{
    A->Unknown44 = FVector(0, 0, 0);
    Class_10B48890* Body = A->UnknownB0->Virtual6();
    Body->Unknown20 = A->Unknown44;
    if (!A->FUN_10b21560())
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x3c, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x44, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
}
