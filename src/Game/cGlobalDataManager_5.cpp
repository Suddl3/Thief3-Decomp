// Game/cGlobalDataManager_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15B20.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A16B40 ?IsFlagSet@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::IsFlagSet(int p1)
{
    int Value = p1;
    return m_Flags.FUN_10a15b20(&Value);
}
