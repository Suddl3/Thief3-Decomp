// Game/Unsorted_10AC1860_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10AC1C40
{
public:
    void FUN_10ac1c40(float Dt);

    char Unknown00[4];
    float Unknown04;
    FVector Unknown08;
    FVector Unknown14;
    FVector Unknown20;
    FVector Unknown2C;
};

// FUNCTION: 0x10AC1C40 ?FUN_10ac1c40@Class_10AC1C40@@QAEXM@Z
void Class_10AC1C40::FUN_10ac1c40(float Dt)
{
    Unknown20 = Unknown2C * Unknown04;
    Unknown14 = Unknown20 * Dt;
    Unknown08 += Unknown14 * Dt;
}
