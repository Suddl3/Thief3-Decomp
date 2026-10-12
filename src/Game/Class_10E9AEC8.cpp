// Game/MC_PullToPoint.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10c380d0_Member.h"

class MC_PullToPoint
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Trigger();

    Class_10c380d0_Member* Unknown04;
    char Unknown08[0x50];
    unsigned char m_bTriggered;
};

// FUNCTION: 0x10C380D0 ?Trigger@MC_PullToPoint@@UAEXXZ
void MC_PullToPoint::Trigger()
{
    m_bTriggered = 1;
    Unknown04->Virtual44();
}
