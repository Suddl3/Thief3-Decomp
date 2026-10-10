// Game/TimeManager_13.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

// FUNCTION: 0x10D3ECA0 ?SetMaxStep@TimeManager@@QAEXM@Z
void TimeManager::SetMaxStep(float Step)
{
    if (Step > MinStep)
        MaxStep = Step;
    else
        MaxStep = MinStep;
}
