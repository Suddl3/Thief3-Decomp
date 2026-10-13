// Game/cFlagElementLogic_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"

class Class_10A84C10_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual cString Virtual2();
    virtual int Virtual3();
};

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10a84c10(Class_10A84C10_Param* Reader);

    FName Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A84C10 ?FUN_10a84c10@cFlagElementLogic@@UAEHPAVClass_10A84C10_Param@@@Z
int cFlagElementLogic::FUN_10a84c10(Class_10A84C10_Param* Reader)
{
    Unknown04 = FName(*Reader->Virtual2(), FNAME_Add);
    Unknown08 = Reader->Virtual3();
    return 1;
}
