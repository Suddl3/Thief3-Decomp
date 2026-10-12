// Game/Unsorted_10B15620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B15620.h"
#include "Game/TimeManager.h"

bool FUN_10abc140();

// FUNCTION: 0x10B15620 ?FUN_10b15620@Class_10B15620@@QAE_NXZ
bool Class_10B15620::FUN_10b15620()
{
    bool Result = FUN_10abc140();
    Result &= TimeManager::Instance()->GetGameTime() - m_StartTime > 3.0;
    return Result;
}
