// Game/Unsorted_10ABF220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABFB00.h"
#include "Game/Class_10ABFB00_Member.h"

// FUNCTION: 0x10ABFB00 ?SetState@Class_10ABFB00@@QAEXH_N@Z
void Class_10ABFB00::SetState(int A, bool State)
{
    float Level = State ? 1.0f : 0.0f;
    float* Value = &m_Level;
    *Value = Level;
    m_Interpolator.Virtual0(Value, Value, 0);
    m_State = State;
    FUN_10abf660(A);
    FUN_10abf7c0(A);
}
