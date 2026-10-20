// Game/Unsorted_10BFC220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFC2B0.h"
#include "Game/Class_10C3DD60.h"

double GetTimeSeconds();

extern float DAT_10eafbdc;

class Class_10BFC2B0_Unknown04
{
public:
    char Unknown00[0x4];
    float Unknown04;
};

// FUNCTION: 0x10BFC2B0 ?FUN_10bfc2b0@Class_10BFC2B0@@QAEXXZ
void Class_10BFC2B0::FUN_10bfc2b0()
{
    if (m_StartTime != DAT_10eafbdc)
    {
        float Elapsed = GetTimeSeconds() - m_StartTime;
        Unknown04->Unknown04 = Elapsed + Unknown04->Unknown04;
        for (int i = 0; i < m_Count; i++)
        {
            Class_10C3DD60* Obj = m_Objects[i];
            Obj->SetField28(Obj->Class_10C3DD60::FUN_10c3dd60() + Elapsed);
        }
        m_StartTime = 0.0f;
    }
}
