// Game/Unsorted_10A87F80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>
#include "Core/Core.h"
#include "Game/Class_10A88910.h"
#include "Game/Class_10A88970.h"
#include "Game/Class_10A88D00.h"
#include "Game/Class_10A88880.h"

extern float DAT_10e49684;

extern float DAT_10eafbdc;

// FUNCTION: 0x10A88880 ?GetFalloff@Class_10A88880@@QAEMM_N@Z
float Class_10A88880::GetFalloff(float Value, bool Flag)
{
    if (Flag)
    {
        if (Value == 180.0f)
            return DAT_10eafbdc;
        if (Value <= Unknown08)
            return DAT_10e49684;
        if (Value > Unknown0C)
            return DAT_10eafbdc;
        return ((Unknown0C - Unknown08) - (Value - Unknown08)) / (Unknown0C - Unknown08);
    }
    else
    {
        if (Value == 180.0f)
            return DAT_10eafbdc;
        if (Value <= Unknown00)
            return DAT_10e49684;
        if (Value > Unknown04)
            return DAT_10eafbdc;
        return ((Unknown04 - Unknown00) - (Value - Unknown00)) / (Unknown04 - Unknown00);
    }
}

// FUNCTION: 0x10A88910 ?ReadOrDefault@Class_10A88910@@QAEXHH@Z
void Class_10A88910::ReadOrDefault(int Id, int Mode)
{
    float Value = 0;
    if (Virtual4(Id, &Value))
    {
        m_Values[Id] = Value;
        return;
    }
    if (Mode == 1)
    {
        m_Values[Id] = 1.0f;
        return;
    }
    if (Mode == 3)
        m_Values[Id] = 0.0f;
}

// FUNCTION: 0x10A88970 ?ReadOrDefault@Class_10A88970@@QAEXHH@Z
void Class_10A88970::ReadOrDefault(int Index, int Mode)
{
    float Value = 0.0f;
    if (this->Virtual4(Index, &Value))
    {
        m_Values[Index] = Value;
        return;
    }
    if (Mode == 1)
    {
        m_Values[Index] = 1.0f;
        return;
    }
    if (Mode == 3)
        m_Values[Index] = 0.0f;
}
