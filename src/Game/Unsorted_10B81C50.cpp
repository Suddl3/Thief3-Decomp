// Game/Unsorted_10B81C50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B81CC0.h"
#include "Game/Class_10D9FEE0.h"

extern float DAT_10eafbdc;

extern float DAT_10ff65f0;

extern float DAT_10ff65f4;

extern float DAT_10ff65f8;

extern float DAT_10ff65fc;

// FUNCTION: 0x10B81C50 ?FUN_10b81c50@@YGMMH@Z
float __stdcall FUN_10b81c50(float A, int B)
{
    float V = DAT_10eafbdc;
    float Limit;
    switch (B)
    {
    case 0:
        Limit = DAT_10ff65f0;
        break;
    case 1:
        Limit = DAT_10ff65f4;
        break;
    case 2:
        return DAT_10ff65f8;
    case 3:
        V = DAT_10ff65fc;
    default:
        return V;
    }
    if (Limit > A)
        return A;
    return Limit;
}

// FUNCTION: 0x10B81CC0 ?FUN_10b81cc0@Class_10B81CC0@@QAEXXZ
void Class_10B81CC0::FUN_10b81cc0()
{
    Unknown120 = false;
    Unknown10->Virtual13(1);
    Unknown10->FUN_10d9fee0(0, 1);
}
