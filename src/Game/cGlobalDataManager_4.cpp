// Game/cGlobalDataManager_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A15C30.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A16B20 ?IsIntSet@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::IsIntSet(int p1)
{
    int Value = p1;
    return m_IntNames.FUN_10a15c30(&Value);
}
