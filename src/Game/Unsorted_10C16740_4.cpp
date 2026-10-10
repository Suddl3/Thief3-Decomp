// Game/Unsorted_10C16740_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C16740.h"

float appFrand();

// FUNCTION: 0x10C16800 ?FUN_10c16800@Class_10C16740@@QAEXM@Z
void Class_10C16740::FUN_10c16800(float Value)
{
    if (Unknown58 != Value)
    {
        float Random = appFrand() * Value;
        Unknown58 = Value;
        Unknown54 = Random;
    }
}
