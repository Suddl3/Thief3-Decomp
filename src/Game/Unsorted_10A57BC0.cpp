// Game/Unsorted_10A57BC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E68F8C
{
public:
    virtual void Virtual0();
    virtual void FUN_10a57be0(float Delta);

    FVector m_Current;
    FVector m_Start;
    FVector m_End;
    FVector m_Delta;
    BYTE m_Finished;
    char Pad35[0x3];
    float m_Duration;
    float m_Elapsed;
};

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
