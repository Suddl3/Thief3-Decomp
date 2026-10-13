// Game/Class_10ABFB00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ABFB00.h"

extern float DAT_10eafbdc;

bool __stdcall FUN_10abf300(int A, int B);

// FUNCTION: 0x10ABFA30 ?Update@Class_10ABFB00@@QAEXHHM@Z
void Class_10ABFB00::Update(int A, int B, float C)
{
    bool State = FUN_10abf300(A, B);
    if (State)
    {
        if (!m_State)
        {
            m_State = true;
            float Value = 1.0f;
            m_Interpolator.Virtual0(&m_Level, &Value, 0.25f);
        }
    }
    else
    {
        if (m_State)
        {
            m_State = false;
            float Value = 0.0f;
            m_Interpolator.Virtual0(&m_Level, &Value, 0.25f);
        }
    }
    Class_10ABFA30_Unknown14* Obj = &Unknown14;
    if (!Obj->Virtual1())
    {
        if (!(Obj->Unknown08 <= DAT_10eafbdc))
            Obj->Unknown08 -= C;
        else
            Obj->Virtual5(C * Obj->Unknown04);
        float V = Obj->Virtual3();
        if (m_Level != V)
        {
            m_Level = V;
            FUN_10abf660(A);
            FUN_10abf7c0(A);
        }
    }
}
