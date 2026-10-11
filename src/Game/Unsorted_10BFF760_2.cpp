// Game/Unsorted_10BFF760_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

// FUNCTION: 0x10C00480 ?GetTimeSeconds@@YANXZ
double GetTimeSeconds()
{
    double GameTime = TimeManager::Instance()->GetGameTime();
    return GameTime;
}
