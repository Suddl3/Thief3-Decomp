// Game/Unsorted_10BB7E60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB7E60.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10BB7E60 ?FUN_10bb7e60@Class_10BB7E60@@QAE_NXZ
bool Class_10BB7E60::FUN_10bb7e60()
{
    float Value = Unknown08->FUN_10dbd510(0x1004b6)->FUN_10bbdb40();
    if (Value > DAT_10eafbdc && Value < Unknown260)
        return true;
    return false;
}

// FUNCTION: 0x10BB7EA0 ?FUN_10bb7ea0@Class_10BB7E60@@QAE_NXZ
bool Class_10BB7E60::FUN_10bb7ea0()
{
    float Value = Unknown08->FUN_10dbd510(0x100838)->FUN_10bbdb40();
    if (Value > DAT_10eafbdc && Value < Unknown260)
        return true;
    return false;
}
