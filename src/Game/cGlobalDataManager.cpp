// Game/cGlobalDataManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A16120.h"
#include "Game/cGlobalDataManager.h"
#include "Game/Class_10A15800.h"
#include "Game/Class_10A15C30.h"
#include "Game/Class_10A15B20.h"
#include "Game/Class_10A160C0.h"

struct Struct_10A16120
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A16640 ?HasInt@cGlobalDataManager@@UAE_NH@Z
bool cGlobalDataManager::HasInt(int A)
{
    int Key = A;
    return m_IntNames.FUN_10a15c30(&Key) == 1;
}

// FUNCTION: 0x10A16660 ?GetInt@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::GetInt(int A)
{
    if (!HasInt(A))
        return 0;
    Struct_10A16120 Result;
    Result = m_Ints.FUN_10a16120(A);
    return Result.Unknown0C;
}

// FUNCTION: 0x10A166B0 ?HasFlag@cGlobalDataManager@@UAE_NH@Z
bool cGlobalDataManager::HasFlag(int A)
{
    int Key = A;
    return m_Flags.FUN_10a15b20(&Key) == 1;
}

// FUNCTION: 0x10A166D0 ?GetFlagValue@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::GetFlagValue(int A)
{
    if (!HasFlag(A))
        return 0;
    return m_FlagValues.FUN_10a160c0(A);
}

// FUNCTION: 0x10A16B20 ?IsIntSet@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::IsIntSet(int p1)
{
    int Value = p1;
    return m_IntNames.FUN_10a15c30(&Value);
}

// FUNCTION: 0x10A16B40 ?IsFlagSet@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::IsFlagSet(int p1)
{
    int Value = p1;
    return m_Flags.FUN_10a15b20(&Value);
}

// FUNCTION: 0x10A16F00 ?RemoveIntRef@cGlobalDataManager@@UAEXH@Z
void cGlobalDataManager::RemoveIntRef(int p1)
{
    int Value = p1;
    if (m_IntNames.FUN_10a15c30(&Value))
        m_IntNames.Remove(&Value);
}

// FUNCTION: 0x10A16F70 ?RemoveFlagRef@cGlobalDataManager@@UAEXH@Z
void cGlobalDataManager::RemoveFlagRef(int A)
{
    int Key = A;
    if (m_Flags.FUN_10a15b20(&Key))
        m_Flags.Remove(&Key);
}
