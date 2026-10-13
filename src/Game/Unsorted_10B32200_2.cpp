// Game/Unsorted_10B32200_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B21360.h"
#include "Game/Class_10B32B50.h"
#include "Game/Class_10B21340.h"

// FUNCTION: 0x10B32620 ?FUN_10b32620@Class_10B32B50@@QAEXPAVClass_10B21340@@@Z
void Class_10B32B50::FUN_10b32620(Class_10B21340* A)
{
    Info_10B21360 Info;
    FUN_10b31fb0(&Info.Unknown00, A);
    int Value = Unknown34;
    if (Value != 0)
    {
        if (Value > 0)
        {
            Unknown34 = (int)((float)Value - A->Unknown454 * 1200.0f);
            if (Unknown34 < 0)
                Unknown34 = 0;
        }
        else
        {
            Unknown34 = (int)(A->Unknown454 * 1200.0f + (float)Value);
            if (Unknown34 > 0)
                Unknown34 = 0;
        }
    }
    Info.Unknown00 -= Unknown34;
    ((Class_10B21360*)A)->FUN_10b21360(&Info);
}
