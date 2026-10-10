// Game/Unsorted_10A50100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A50610.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A50610 ?FUN_10a50610@Class_10A50610@@QAEXM@Z
void Class_10A50610::FUN_10a50610(float A)
{
    if (Unknown08 != 0)
    {
        if (A > DAT_10eafbdc)
        {
            Unknown08 = 3;
            Unknown1c = Unknown04 / A;
        }
        else
        {
            Unknown04 = 0.0f;
            Unknown08 = 0;
        }
    }
}
