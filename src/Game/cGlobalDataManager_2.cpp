// Game/cGlobalDataManager_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15B20.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A166B0 ?HasFlag@cGlobalDataManager@@UAE_NH@Z
bool cGlobalDataManager::HasFlag(int A)
{
    int Key = A;
    return m_Flags.FUN_10a15b20(&Key) == 1;
}
