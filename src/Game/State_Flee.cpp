// Game/State_Flee.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB89D0.h"
#include "Game/Class_10BE3FF0.h"
#include "Game/Struct_10BE9AC0.h"
#include "Engine/EngineClasses.h"

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

// FUNCTION: 0x10BE9890 ?FUN_10be9890@State_Flee@@UAEXXZ
void State_Flee::FUN_10be9890()
{
    if (Unknown04->FUN_10bb89d0() && Unknown04->FUN_10bb89d0()->Virtual75())
        PopState();
}
