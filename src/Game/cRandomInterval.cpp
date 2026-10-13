// Game/cRandomInterval.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10DBD510.h"
#include "Game/cRandomInterval.h"
#include "Game/Class_10BB8070.h"
#include "Game/Class_10BB8480.h"
#include "Game/SoundSchema.h"

float GetFrameDeltaTime();

float appFrand();

double GetTimeSeconds();

class Class_10C28BD0
{
public:
    void FUN_10c28bd0();
};

int FUN_10c28bc0();

// FUNCTION: 0x10BB7F90 ?RollInterval@cRandomInterval@@QAEXXZ
void cRandomInterval::RollInterval()
{
    float Min = m_Schema->FUN_10dbd510(0x100251)->GetFloat();
    float Max = m_Schema->FUN_10dbd510(0x100252)->GetFloat();
    m_Interval = Min + (Max - Min) * appFrand();
    m_Roll = appFrand();
}

// FUNCTION: 0x10BB7FF0 ?FUN_10bb7ff0@cRandomInterval@@QAEXXZ
void cRandomInterval::FUN_10bb7ff0()
{
    float L = Unknown30.FUN_10bfc3a0();
    float V1 = m_Schema->FUN_10dbd510(0x40100242)->GetFloat();
    if (V1 < L)
    {
        float V2 = m_Schema->FUN_10dbd510(0x100251)->GetFloat();
        if (V2 > m_Interval)
            RollInterval();
    }
    else
        m_Interval = (double)m_Interval - GetFrameDeltaTime();
}

// FUNCTION: 0x10BB8430 ?StartInterval@cRandomInterval@@QAEXXZ
void cRandomInterval::StartInterval()
{
    m_Schema->FUN_10ba9f90(0);
    ((Class_10C28BD0*)FUN_10c28bc0())->FUN_10c28bd0();
    RollInterval();
    float Value = m_Schema->FUN_10dbd510(0x10070a)->GetFloat();
    m_EndTime = GetTimeSeconds() + Value;
}
