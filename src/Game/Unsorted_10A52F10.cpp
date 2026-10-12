// Game/Unsorted_10A52F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52F10.h"
#include "Game/Class_10A53220.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A52F10 ?IndexOf@Class_10A52F10@@QAEHH@Z
int Class_10A52F10::IndexOf(int Value)
{
    int i;
    for (i = 0; i < UnknownB8; i++)
    {
        if (Value == UnknownC0[i])
            break;
    }
    if (i == UnknownB8)
        return -1;
    return i;
}

// FUNCTION: 0x10A53220 ?FUN_10a53220@Class_10A53220@@QAEXM@Z
void Class_10A53220::FUN_10a53220(float Delta)
{
    if (!(Unknown08 <= DAT_10eafbdc))
        Unknown08 -= Delta;
    else
        Virtual5(Unknown04 * Delta);
}
