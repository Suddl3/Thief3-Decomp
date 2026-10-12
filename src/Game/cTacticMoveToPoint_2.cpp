// Game/cTacticMoveToPoint_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"

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
    virtual void Virtual1();
    virtual void FUN_10bdb0f0();

    void PopState();
};

// FUNCTION: 0x10BDB0F0 ?FUN_10bdb0f0@cTacticMoveToPoint@@UAEXXZ
void cTacticMoveToPoint::FUN_10bdb0f0()
{
    if (FUN_10bc4160()->GetLinkedObject() == 0)
        PopState();
}
