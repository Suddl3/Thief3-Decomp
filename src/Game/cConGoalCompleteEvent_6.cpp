// Game/cConGoalCompleteEvent_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_10AB37F0.h"
#include "Game/Class_10AB3C20.h"

class Class_10AAB590_Param
{
public:
    virtual void Virtual0(int* Value);
    virtual void Virtual1(int Value);
    virtual cString Virtual2();
    virtual int Virtual3();
};

class cConGoalCompleteEvent
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aab2e0(Class_10AAB590_Param* Src);

    cString Unknown04;
    int Unknown08;
    cString Unknown0C;
    Class_10AB37F0 Unknown10;
};

// FUNCTION: 0x10AAB2E0 ?FUN_10aab2e0@cConGoalCompleteEvent@@UAEHPAVClass_10AAB590_Param@@@Z
int cConGoalCompleteEvent::FUN_10aab2e0(Class_10AAB590_Param* Src)
{
    Unknown04 = Src->Virtual2();
    Unknown08 = Src->Virtual3();
    Unknown0C = Src->Virtual2();
    Unknown10.FUN_10ab37f0(Src->Virtual2());
    ((Class_10AB3C20*)&Unknown10)->SetValue(Src->Virtual2());
    return 1;
}
