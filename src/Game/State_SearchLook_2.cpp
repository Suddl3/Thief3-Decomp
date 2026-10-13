// Game/State_SearchLook_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8960.h"
#include "Game/Class_10bb8960_Result.h"
#include "Game/Class_10BE3FF0.h"

class Class_10BB89D0 : public Class_10BB8960
{
public:
    Class_10BE3FF0* FUN_10bb89d0();
};

double GetTimeSeconds();

class State_SearchLook
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
    virtual void NotifyActivated(int A);

    void FUN_10bd5860();

    Class_10BB89D0* Unknown04;
    char Unknown08[0x3C];
    float m_EndTime;
};

// FUNCTION: 0x10BD7DE0 ?NotifyActivated@State_SearchLook@@UAEXH@Z
void State_SearchLook::NotifyActivated(int A)
{
    Class_10bb8960_Result* Result = Unknown04->FUN_10bb8960();
    Result->FUN_10bd46e0();
    if (Unknown04->FUN_10bb89d0())
        Unknown04->FUN_10bb89d0()->FUN_10be7ae0();
    double Value = Result->Virtual88();
    m_EndTime = (float)(GetTimeSeconds() + Value);
    FUN_10bd5860();
}
