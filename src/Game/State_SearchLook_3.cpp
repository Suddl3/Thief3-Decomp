// Game/State_SearchLook_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8960.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10bb8960_Result.h"

// Declarations first.
class Class_10bb8960_Result;

class Class_10B39870;

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class cTacticMoveToPoint : public Class_10BC4160
{
public:
    void PopState();
};

double GetTimeSeconds();

class State_SearchLook : public cTacticMoveToPoint
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10bd7d50();

    void FUN_10bd5860();

    Class_10BB8960* Unknown04;
    char Unknown08[0x38];
    bool Unknown40;
    float Unknown44;
};

// FUNCTION: 0x10BD7D50 ?FUN_10bd7d50@State_SearchLook@@UAEXXZ
void State_SearchLook::FUN_10bd7d50()
{
    if (FUN_10bc4160()->GetLinkedObject() == 0)
    {
        double Remaining = Unknown44;
        if (GetTimeSeconds() >= Remaining)
            PopState();
        else
            FUN_10bd5860();
        return;
    }
    if (FUN_10bc4160()->GetLinkedObject() == 0 && !Unknown40)
    {
        PopState();
        return;
    }
    if (Unknown04->FUN_10bb8960()->Virtual82())
        PopState();
}
