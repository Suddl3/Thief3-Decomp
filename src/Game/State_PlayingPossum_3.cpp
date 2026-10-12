// Game/State_PlayingPossum_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/TimeManager.h"

class Class_10BC4BF0
{
public:
    virtual void Virtual0();

    int GetTargetLinkType();
};

class cTacticMoveToPoint : public Class_10BC4BF0
{
public:
    void PopState();
};

class State_PlayingPossum : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bce970();
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
    virtual void FUN_10bcecd0(int A, int B, int C, int D, int E);

    char Unknown04[0x3C];
    double m_StartTime;
    double m_EndTime;
    float m_Duration;
};

// FUNCTION: 0x10BCECD0 ?FUN_10bcecd0@State_PlayingPossum@@UAEXHHHHH@Z
void State_PlayingPossum::FUN_10bcecd0(int A, int B, int C, int D, int E)
{
    if (m_EndTime > 0.0 && TimeManager::Instance()->GetGameTime() > m_EndTime)
        PopState();
}
