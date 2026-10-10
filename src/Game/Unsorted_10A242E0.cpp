// Game/Unsorted_10A242E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A243E0.h"
#include "Game/Class_10A288C0.h"
#include "Game/Class_10A2B480.h"

// FUNCTION: 0x10A243E0 ?FUN_10a243e0@Class_10A243E0@@QAEXPAH@Z
void Class_10A243E0::FUN_10a243e0(int* p1)
{
    Unknown78 = *p1;
}

// FUNCTION: 0x10A288C0 ?FUN_10a288c0@Class_10A288C0@@QAEXXZ
void Class_10A288C0::FUN_10a288c0()
{
    FUN_10a264e0(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x10A2B480 ?FUN_10a2b480@Class_10A2B480@@QAEXXZ
void Class_10A2B480::FUN_10a2b480()
{
    if (Unknown0C)
        ::operator delete(Unknown0C);
    Unknown0C = 0;
    Unknown10 = 0;
    FUN_10a2b220();
}
