// Game/TimeManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/TimeManager.h"
#include "Game/Class_10F46DA0.h"

extern Class_10F46DA0* DAT_10f46da0;

extern float DAT_10eafbdc;

// FUNCTION: 0x10D3EC80 ?GetGameTime@TimeManager@@QAENXZ
double TimeManager::GetGameTime()
{
    return GameTime;
}

// FUNCTION: 0x10D3EC90 ?SetGameTime@TimeManager@@QAEXN@Z
void TimeManager::SetGameTime(double Time)
{
    Unknown3D = true;
    GameTime = Time;
}

// FUNCTION: 0x10D3ECA0 ?SetMaxStep@TimeManager@@QAEXM@Z
void TimeManager::SetMaxStep(float Step)
{
    if (Step > MinStep)
        MaxStep = Step;
    else
        MaxStep = MinStep;
}

// FUNCTION: 0x10D3ECD0 ?SetMinStep@TimeManager@@QAEXM@Z
void TimeManager::SetMinStep(float Step)
{
    if (Step < MaxStep)
        MinStep = Step;
    else
        MinStep = MaxStep;
}

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

// FUNCTION: 0x10D3ED40 ?IsPaused@TimeManager@@QAE_NXZ
bool TimeManager::IsPaused()
{
    return Paused;
}

// FUNCTION: 0x10D3ED70 ?GetTimeScale@TimeManager@@QAEMXZ
float TimeManager::GetTimeScale()
{
    return TimeScale;
}

// FUNCTION: 0x10D3ED80 ?SetTimeScale@TimeManager@@QAEXM@Z
void TimeManager::SetTimeScale(float Scale)
{
    if (DAT_10eafbdc > Scale)
        TimeScale = 0.0f;
    else
        TimeScale = Scale;
}

// FUNCTION: 0x10D3EDB0 ?GetDeltaTime@TimeManager@@QAEMXZ
float TimeManager::GetDeltaTime()
{
    return DeltaTime;
}
