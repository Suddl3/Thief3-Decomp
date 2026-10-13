// Game/cRandomInterval.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10DBD510.h"
#include "Game/cRandomInterval.h"

float GetFrameDeltaTime();

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
