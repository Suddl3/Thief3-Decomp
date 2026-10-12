// Game/State_SlipAndFall.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570_Field10.h"
#include "Game/Class_10BB86B0.h"
#include "Game/Class_10BB86F0.h"

double GetTimeSeconds();

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

    int FUN_10bc4bf0();

    Class_10BB86B0* Unknown04;
};

class State_SlipAndFall : public Class_10BC4BF0
{
public:
    virtual void FUN_10bcc030();
};

// FUNCTION: 0x10BCC030 ?FUN_10bcc030@State_SlipAndFall@@UAEXXZ
void State_SlipAndFall::FUN_10bcc030()
{
    Unknown04->FUN_10bb86b0(0.5f);
    ((Class_10AAF570_Field10*)FUN_10bc4bf0())->Virtual27();
    ((Class_10BB86F0*)Unknown04)->FUN_10bb86f0(GetTimeSeconds());
}
