// Game/Unsorted_10BCA5B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C7D570.h"

float appFrand();

double GetTimeSeconds();

extern float DAT_10eafbdc;

struct Struct_10BCB6E0_Unknown04
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

struct Struct_10BCB6E0
{
    char Unknown00[4];
    Struct_10BCB6E0_Unknown04* Unknown04;
};

// FUNCTION: 0x10BCB6E0 ?FUN_10bcb6e0@@YAMPAXHH@Z
float FUN_10bcb6e0(void* A, int B, int C)
{
    Struct_10BCB6E0* Self = (Struct_10BCB6E0*)A;
    Class_10BBDB40* Obj = Self->Unknown04->Unknown08->FUN_10dbd510();
    float Min = Obj->GetFloat(B);
    float Max = Obj->GetFloat(C);
    if (Min == DAT_10eafbdc && Max == DAT_10eafbdc)
        return DAT_10eafbdc;
    double Delta = (Max - Min) * appFrand();
    double Total = GetTimeSeconds() + Delta;
    return Total + Min;
}
