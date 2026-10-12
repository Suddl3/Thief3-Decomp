// Game/Unsorted_10BB0AB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB0AB0.h"

double GetTimeSeconds();

// FUNCTION: 0x10BB0AB0 ?SetValueAndTime@Class_10BB0AB0@@QAEXH@Z
void Class_10BB0AB0::SetValueAndTime(int p1)
{
    Unknown2CC = p1;
    m_LastSetTime = (float)GetTimeSeconds();
}
