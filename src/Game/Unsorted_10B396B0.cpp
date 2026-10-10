// Game/Unsorted_10B396B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B396B0.h"
#include "Game/Class_10B396E0.h"
#include "Game/Class_10B3A460.h"
#include "Game/Class_Field04.h"

Class_10B3A460* FUN_10b3abf0();

// FUNCTION: 0x10B396B0 ?FUN_10b396b0@Class_10B396B0@@QAEXH@Z
void Class_10B396B0::FUN_10b396b0(int A)
{
    int Index = FUN_10b3abf0()->FUN_10b3a460(A)->Unknown1C;
    Unknown0C[Index]->FUN_10b476d0();
}

// FUNCTION: 0x10B396E0 ?FUN_10b396e0@Class_10B396E0@@QAEXXZ
void Class_10B396E0::FUN_10b396e0()
{
    for (int i = 0; i < 8; i++)
        Unknown0C[i]->FUN_10b476d0();
}
