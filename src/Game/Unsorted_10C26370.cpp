// Game/Unsorted_10C26370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10C26570.h"
#include "Game/Class_10C3CFC0.h"
#include "Game/Class_10E9925C.h"
#include "Game/Class_10E992D4.h"

// FUNCTION: 0x10C26570 ?FUN_10c26570@Class_10C26570@@QAEXHHH@Z
void Class_10C26570::FUN_10c26570(int A, int B, int C)
{
    for (int i = 0; i < Unknown38; i++)
    {
        if (Unknown40[i]->Virtual2() == 2)
            Unknown40[i]->FUN_10c3cfc0(B, A, C);
    }
}

// FUNCTION: 0x10C265C0 ?FUN_10c265c0@Class_10E992D4@@QAEXXZ
void Class_10E992D4::FUN_10c265c0()
{
    if (FUN_10c26490() && Unknown0C >= 0 && !Virtual8())
    {
        FUN_10c26490()->FUN_109bf5f0(Unknown0C, Unknown10);
        Unknown34 = true;
    }
}
