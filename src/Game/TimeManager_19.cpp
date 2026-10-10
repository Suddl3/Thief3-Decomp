// Game/TimeManager_19.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10F46DA0.h"
#include "Game/TimeManager.h"

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10D3ED00 ?SetPaused@TimeManager@@QAEX_N@Z
void TimeManager::SetPaused(bool Pause)
{
    Unknown14 = -1.0f;
    if (Paused != Pause)
    {
        Paused = Pause;
        if (Pause)
            DAT_10f46da0->Virtual5(0x74, 0, 0, 0);
        else
            DAT_10f46da0->Virtual5(0x75, 0, 0, 0);
    }
}
