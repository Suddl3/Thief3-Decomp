// Game/Unsorted_10C00490.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

// FUNCTION: 0x10C00490 ?GetFrameDeltaTime@@YAMXZ
float GetFrameDeltaTime()
{
    float DeltaTime = TimeManager::Instance()->GetDeltaTime();
    return DeltaTime;
}
