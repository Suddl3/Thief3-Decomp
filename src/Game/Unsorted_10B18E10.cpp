// Game/Unsorted_10B18E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include <stdlib.h>
#include "Game/Class_10B18E70.h"

struct Struct_10B18E10
{
    char Unknown00[0x3C];
    int Unknown3C;
    char Unknown40[0x3C4];
    int Unknown404;
};

int __cdecl WrapAngle(int A);

// FUNCTION: 0x10B18E10 ?GetAngleDelta@@YGHPAUStruct_10B18E10@@PA_N@Z
int __stdcall GetAngleDelta(Struct_10B18E10* Obj, bool* Overflow)
{
    int Delta = abs(Obj->Unknown3C - Obj->Unknown404);
    *Overflow = false;
    if (abs(Delta) > 0x7fff)
    {
        *Overflow = true;
        Delta = WrapAngle(Delta);
        if (abs(Delta) > 0x7fff)
            return 0;
    }
    return Delta;
}

// FUNCTION: 0x10B18E70 ?FUN_10b18e70@Class_10B18E70@@QAEX_N@Z
void Class_10B18E70::FUN_10b18e70(bool Flag)
{
    Unknown18 = Flag;
    if (Flag)
    {
        Unknown2C = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown28 = 0;
    }
}
