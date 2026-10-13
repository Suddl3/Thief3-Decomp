// Game/Class_10E68F8C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E68F8C.h"

// FUNCTION: 0x10A57BE0 ?FUN_10a57be0@Class_10E68F8C@@UAEXM@Z
void Class_10E68F8C::FUN_10a57be0(float Delta)
{
    if (m_Finished)
        return;
    Delta = Delta + m_Elapsed;
    m_Elapsed = Delta;
    float Ratio = Delta / m_Duration;
    m_Current = m_Start + m_Delta * Ratio;
    if (Delta >= m_Duration)
    {
        m_Current = m_End;
        m_Finished = 1;
    }
}
