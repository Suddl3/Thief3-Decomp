// Game/State_PatrolLook.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8D60.h"

double GetTimeSeconds();

class Class_10E8BE68
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

    bool FUN_10bc40e0();
    bool FUN_10bc4af0();
    void PopState();
};

class State_Patrol : public Class_10E8BE68
{
public:
    void FUN_10bece10();
};

class State_PatrolLook : public State_Patrol
{
public:
    virtual void FUN_10bed000();

    Class_10BB8D60* Unknown04;
    char Unknown08[8];
    int Unknown10;
    char Unknown14[0x30];
    float m_EndTime;
    char Unknown48[0x10];
    int m_Limit;
};

// FUNCTION: 0x10BED000 ?FUN_10bed000@State_PatrolLook@@UAEXXZ
void State_PatrolLook::FUN_10bed000()
{
    if (!FUN_10bc40e0())
    {
        if (FUN_10bc4af0())
            return;
        if (Unknown10 == 10)
            Unknown04->FUN_10bb8d60();
    }
    if (m_Limit < 1 && GetTimeSeconds() > m_EndTime)
    {
        PopState();
        return;
    }
    FUN_10bece10();
}
