// Game/cGlobalDataManager_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A161C0.h"

struct Struct_10A16F30
{
    short Unknown00;
    short Unknown02;
    int Unknown04;
};

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
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void AddFlagRef(int A);

    char m_FlagValues[4];
    Class_10A161C0 m_Flags;
};

// FUNCTION: 0x10A16F30 ?AddFlagRef@cGlobalDataManager@@UAEXH@Z
void cGlobalDataManager::AddFlagRef(int A)
{
    if (A != 0)
    {
        int Value = A;
        Struct_10A16F30 Info;
        Info.Unknown04 = 0;
        Info.Unknown00 = 0;
        Info.Unknown02 = -1;
        m_Flags.FUN_10a161c0(&Value, &Info);
    }
}
