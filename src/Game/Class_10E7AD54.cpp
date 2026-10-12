// Game/Class_10E7AD54.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7AD54.h"

// FUNCTION: 0x10B289C0 ?Update@Class_10E7AD54@@UAEXM@Z
void Class_10E7AD54::Update(float Delta)
{
    m_Elapsed += Delta;
    if (m_Elapsed > (float)m_Duration)
        FUN_10b289f0(true);
}
