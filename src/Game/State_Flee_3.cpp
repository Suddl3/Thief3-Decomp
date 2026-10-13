// Game/State_Flee_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10BE9AC0.h"
#include "Engine/EngineClasses.h"

class Class_10BB89D0;

class cTacticMoveToPoint
{
public:
    virtual void FUN_10be9ac0();

    void PopState();
};

class State_Flee : public cTacticMoveToPoint
{
public:
    virtual void FUN_10be9ac0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10be9890();

    Class_10BB89D0* Unknown04;
    char Unknown08[0x58];
    Struct_10BE9AC0* Unknown60;
    char Unknown64[0x10];
    int Unknown74;
};

// FUNCTION: 0x10BE9AC0 ?FUN_10be9ac0@State_Flee@@UAEXXZ
void State_Flee::FUN_10be9ac0()
{
    if (!Unknown74 && Unknown60)
    {
        if (Unknown60->Unknown04)
            Unknown60->Unknown04->FUN_10a6ea30(0x800709, 0);
        delete Unknown60;
        Unknown60 = 0;
    }
}
