// Game/cCombatBase_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8300.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF280.h"

class Class_10BD85B0_TargetLink
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual bool Virtual46();
    virtual bool Virtual47();
};

class Class_10BC4BF0_Member;

class Class_10BC4BF0
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();

    Class_10BD85B0_TargetLink* GetTargetLinkType();

    Class_10BC4BF0_Member* Unknown04;
};

class cCombatBase
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10bd85b0();

    Class_10BBB410* Unknown04;
};

// FUNCTION: 0x10BD85B0 ?FUN_10bd85b0@cCombatBase@@UAEXXZ
void cCombatBase::FUN_10bd85b0()
{
    Class_10BFF280* Obj = (Class_10BFF280*)Unknown04->GetCurrent();
    if (Obj)
    {
        if ((((Class_10BC4BF0*)this)->GetTargetLinkType() && ((Class_10BC4BF0*)this)->GetTargetLinkType()->Virtual46()) ||
            (((Class_10BC4BF0*)this)->GetTargetLinkType() && ((Class_10BC4BF0*)this)->GetTargetLinkType()->Virtual47()))
        {
            ((Class_10BB8300*)Unknown04)->ClearEntry();
            return;
        }
        Class_10BBB410* Ctrl = Unknown04;
        Ctrl->FUN_10bb9f60(Obj->FUN_10bff280(), 0);
    }
}
