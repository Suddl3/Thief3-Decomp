// Game/MC_PlayAnimation.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/MC_PlayAnimation.h"

extern float DAT_10eafbdc;

double GetTimeSeconds();

// FUNCTION: 0x10C2E500 ?IsFinished@MC_PlayAnimation@@UAE_NXZ
bool MC_PlayAnimation::IsFinished()
{
    if (m_Duration != DAT_10eafbdc)
    {
        double EndTime = m_Duration + m_StartTime;
        if (GetTimeSeconds() > EndTime)
            return true;
    }
    return m_Failed;
}
