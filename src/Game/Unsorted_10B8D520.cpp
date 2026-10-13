// Game/Unsorted_10B8D520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B8C9B0.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B8CB20.h"
#include "Game/Class_10B8D800.h"
#include "Game/Class_109671D0.h"
#include "Game/Class_10D9FEE0.h"

class FVector;

// FUNCTION: 0x10B8D800 ?FUN_10b8d800@Class_10B8D800@@QAE_NHHHH@Z
bool Class_10B8D800::FUN_10b8d800(int A, int B, int C, int D)
{
    if (C == -1)
    {
        FUN_10b8cb20(A, B, -1, D);
    }
    else if (Unknown19)
    {
        Class_10D9FEE0* Obj = (Class_10D9FEE0*)FindItem(C);
        Class_109671D0 Local;
        if (Obj)
        {
            Class_109671D0* Src = (Class_109671D0*)A;
            Local = *Src;
        }
        else
        {
            Local.Unknown00 = 0;
            Local.Unknown04 = 0;
            Local.Unknown08 = 0;
        }
        if (!Local.FUN_109671d0())
        {
            Obj->FUN_10d9fee0(1, 1);
            Obj->FUN_10da0640(&Local, B);
            return true;
        }
    }
    return false;
}
