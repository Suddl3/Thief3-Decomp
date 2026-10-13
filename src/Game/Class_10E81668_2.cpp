// Game/Class_10E81668_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E81668.h"

// FUNCTION: 0x10B4FF00 ?Construct@Class_10E81668@@QAEPAV1@XZ
Class_10E81668* Class_10E81668::Construct()
{
    FUN_10b3acb0();
    *(void***)this = DAT_10e81668;
    Unknown28 = 0;
    Unknown34 = 0.66f;
    Unknown38 = 0;
    for (int i = 0; i < 3; i++)
        Unknown50[i] = 0;
    return this;
}
