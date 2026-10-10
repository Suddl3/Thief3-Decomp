// Game/Class_10E7AD54.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7AD54.h"

// FUNCTION: 0x10B289C0 ?FUN_10b289c0@Class_10E7AD54@@UAEXM@Z
void Class_10E7AD54::FUN_10b289c0(float Delta)
{
    Unknown0C += Delta;
    if (Unknown0C > (float)Unknown10)
        FUN_10b289f0(true);
}
