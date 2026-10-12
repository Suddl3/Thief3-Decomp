// Game/cVectorTween.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cVectorTween.h"

extern float DAT_10f46e5c[];

// FUNCTION: 0x10A58250 ?Update@cVectorTween@@UAEXM@Z
void cVectorTween::Update(float Delta)
{
    if (m_Finished)
        return;
    Delta = Delta + m_Elapsed;
    m_Elapsed = Delta;
    if (m_Duration <= Delta)
    {
        m_Current = m_End;
        m_Finished = 1;
        return;
    }
    float Ratio = Delta / m_Duration;
    int Index = (int)(Ratio * Unknown40);
    float Alpha = (DAT_10f46e5c[((Index - 0x4001) >> 2) & 0x3FFF] + 1.0f) * 0.5f;
    m_Current = m_Start + m_Delta * Alpha;
}
