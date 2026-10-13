// Game/Class_10BFD210.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10978090.h"
#include "Game/Class_Field04.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10AF4BB0.h"
#include "Game/Class_10C1B0F0.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10BFBC90.h"
#include "Game/Class_10BFC190.h"
#include "Game/Class_10BFF240.h"
#include "Game/Class_10C16580.h"
#include "Game/Class_10E97AD4.h"
#include "Game/cPathPointList.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10BFD0A0 ?FUN_10bfd0a0@Class_10BFD210@@QAEXPAVClass_10C1B0F0@@M@Z
void Class_10BFD210::FUN_10bfd0a0(Class_10C1B0F0* A, float B)
{
    float V = A->Virtual6(0);
    if (FUN_10bfc3a0() + V > B)
    {
        B = B - FUN_10bfc3a0();
        if (B > DAT_10eafbdc)
            A->SetClampedValue(B);
        else
            A->SetClampedValue(0.0f);
    }
}

// FUNCTION: 0x10BFD210 ?Reset@Class_10BFD210@@QAEXXZ
void Class_10BFD210::Reset()
{
    FUN_10bfc680(0.0f);
}

// FUNCTION: 0x10BFD4C0 ?FUN_10bfd4c0@Class_10BFD210@@QAEXM@Z
void Class_10BFD210::FUN_10bfd4c0(float Value)
{
    Value = FUN_10bfc3a0() - Value;
    FUN_10bfc680(Value);
}
