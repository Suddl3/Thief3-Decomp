// Game/AAIPathPoint_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BC2330.h"

class AAIPathPoint;

void FUN_10993fc0();

class AAIPathPoint
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void PostLoad();

    char Unknown04[0xBC];
    Class_10BC2330 UnknownC0;
};

// FUNCTION: 0x10BBEF10 ?PostLoad@AAIPathPoint@@UAEXXZ
void AAIPathPoint::PostLoad()
{
    FUN_10993fc0();
    UnknownC0.FUN_10bc2330(this);
}
