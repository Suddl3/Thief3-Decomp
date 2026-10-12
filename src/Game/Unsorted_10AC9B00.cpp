// Game/Unsorted_10AC9B00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ACA3E0.h"
#include "Game/TimeManager.h"

// FUNCTION: 0x10ACA3E0 ?FUN_10aca3e0@Class_10ACA3E0@@QAEXM@Z
void Class_10ACA3E0::FUN_10aca3e0(float Time)
{
    Time += TimeManager::Instance()->FUN_10d3edc0();
    for (int i = 0; i < m_Count; i++)
        FUN_10aca180(m_Elements[i], Time);
}
