// Game/cGlobalDataManager_10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15B20.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A16F70 ?RemoveFlagRef@cGlobalDataManager@@UAEXH@Z
void cGlobalDataManager::RemoveFlagRef(int A)
{
    int Key = A;
    if (m_Flags.FUN_10a15b20(&Key))
        m_Flags.FUN_10a16270(&Key);
}
