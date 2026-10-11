// Game/cGlobalDataManager_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A160C0.h"
#include "Game/cGlobalDataManager.h"

// FUNCTION: 0x10A166D0 ?GetFlagValue@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::GetFlagValue(int A)
{
    if (!HasFlag(A))
        return 0;
    return m_FlagValues.FUN_10a160c0(A);
}
