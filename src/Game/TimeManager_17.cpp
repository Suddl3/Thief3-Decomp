// Game/TimeManager_17.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

// FUNCTION: 0x10D3ECD0 ?SetMinStep@TimeManager@@QAEXM@Z
void TimeManager::SetMinStep(float Step)
{
    if (Step < MaxStep)
        MinStep = Step;
    else
        MinStep = MaxStep;
}
