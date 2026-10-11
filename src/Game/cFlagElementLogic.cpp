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
    virtual bool Evaluate();

    int m_FlagName;
    int m_ExpectedValue;
};

// FUNCTION: 0x10A84B50 ?Evaluate@cFlagElementLogic@@UAE_NXZ
bool cFlagElementLogic::Evaluate()
{
    Class_10A174E0* Object = FUN_10a18230();
    FName Name = (EName)m_FlagName;
    int Expected = m_ExpectedValue;
    return Object->Virtual3(Name) == Expected;
}
