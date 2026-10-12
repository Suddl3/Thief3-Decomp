// Game/cAISpeech_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10BEFAB0.h"
#include "Game/cAISpeech.h"

class Class_10BFF460
{
public:
    float MeasureDistance();
};

float GetFrameDeltaTime();

// The address of an object passed by reference.
inline Class_10E97B00* AddressOf(const Class_10E97B00& Object)
{
    return (Class_10E97B00*)&Object;
}

// FUNCTION: 0x10BF0AE0 ?UpdateSummon@cAISpeech@@QAEXPAVClass_10BFF460@@@Z
void cAISpeech::UpdateSummon(Class_10BFF460* Target)
{
    if (m_SummonCooldown >= 0.0f)
    {
        double Saved = m_SummonCooldown;
        m_SummonCooldown = (float)(Saved - GetFrameDeltaTime());
    }
    if (Target)
    {
        if (Target->MeasureDistance() < m_SummonRange && m_SummonCooldown < 0.0f)
        {
            {
                cString Text("summon");
                FUN_10bc7d70(AddressOf(Class_10E97B00("+summon:fight")), 0x14, 9, &Text, true);
            }
            m_SummonCooldown = GetRandomInRange();
        }
    }
}
