// Game/cFlagElementLogic.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A174E0.h"
#include "Core/Core.h"

Class_10A174E0* FUN_10a18230();

class cFlagElementLogic
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool FUN_10a84b50();

    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10A84B50 ?FUN_10a84b50@cFlagElementLogic@@UAE_NXZ
bool cFlagElementLogic::FUN_10a84b50()
{
    Class_10A174E0* Object = FUN_10a18230();
    FName Name = (EName)Unknown04;
    int Expected = Unknown08;
    return Object->Virtual3(Name) == Expected;
}
