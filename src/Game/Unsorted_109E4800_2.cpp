// Game/Unsorted_109E4800_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E4800.h"
#include "Game/Object_10A18FC0.h"

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x109E4800 ?FUN_109e4800@Class_109E4800@@QAEHXZ
int Class_109E4800::FUN_109e4800()
{
    float Ratio = (float)FUN_10a18fc0()->Virtual2() / UnknownB0;
    return (int)(Ratio * UnknownCC);
}
