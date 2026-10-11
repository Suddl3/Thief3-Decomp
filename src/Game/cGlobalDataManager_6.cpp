// Game/cGlobalDataManager_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A16BC0.h"
#include "Game/Class_10A16BF0.h"

class cGlobalDataManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void FUN_10a16e70();

    char m_FlagValues[4];
    Class_10A16BC0 m_Flags;
    char Unknown20[0x14];
    Class_10A16BF0 m_IntNames;
};

// FUNCTION: 0x10A16E70 ?FUN_10a16e70@cGlobalDataManager@@UAEXXZ
void cGlobalDataManager::FUN_10a16e70()
{
    m_Flags.FUN_10a16370(0x40);
    m_IntNames.FUN_10a165c0(0x40);
}
