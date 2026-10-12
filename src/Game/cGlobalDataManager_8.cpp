// Game/cGlobalDataManager_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15C30.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A16F00 ?RemoveIntRef@cGlobalDataManager@@UAEXH@Z
void cGlobalDataManager::RemoveIntRef(int p1)
{
    int Value = p1;
    if (m_IntNames.FUN_10a15c30(&Value))
        m_IntNames.Remove(&Value);
}
