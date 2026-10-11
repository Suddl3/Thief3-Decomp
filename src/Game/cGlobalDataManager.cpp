// Game/cGlobalDataManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A16120.h"
#include "Game/cGlobalDataManager.h"

struct Struct_10A16120
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

// FUNCTION: 0x10A16660 ?GetInt@cGlobalDataManager@@UAEHH@Z
int cGlobalDataManager::GetInt(int A)
{
    if (!HasInt(A))
        return 0;
    Struct_10A16120 Result;
    Result = m_Ints.FUN_10a16120(A);
    return Result.Unknown0C;
}
