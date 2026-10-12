// Game/Unsorted_10A465F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A462B0.h"
#include "Game/Class_10A46770.h"
#include "Game/Class_10AF4BB0.h"

// FUNCTION: 0x10A46770 ?Empty@Class_10A46770@@QAEXH@Z
void Class_10A46770::Empty(int Slack)
{
    for (int i = 0; i < Unknown04; i++)
        ((Class_10A462B0*)Unknown00)[i].~Class_10A462B0();
    Unknown04 = 0;
    Unknown08 = Slack;
    FUN_10af3b50(0x30);
}
