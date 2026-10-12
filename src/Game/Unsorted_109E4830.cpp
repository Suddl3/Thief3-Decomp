// Game/Unsorted_109E4830.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109E4830.h"
#include "Game/Object_10A18FC0.h"

Object_10A18FC0* FUN_10a18fc0();

// FUNCTION: 0x109E4830 ?GetCursorScreenY@Class_109E4830@@QAEHXZ
int Class_109E4830::GetCursorScreenY()
{
    float Ratio = (float)FUN_10a18fc0()->Virtual3() / UnknownB4;
    return (int)(Ratio * UnknownD0);
}
