// Game/Class_10E94218.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"

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

    void PopState();
};

class Object_10BDAEB0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

class Class_10E94218 : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bdaeb0();

    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    Object_10BDAEB0* Unknown40;
};

// FUNCTION: 0x10BDAEB0 ?FUN_10bdaeb0@Class_10E94218@@UAEXXZ
void Class_10E94218::FUN_10bdaeb0()
{
    if (Unknown40)
        Unknown40->Virtual2();
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    if (!Obj || !Obj->FUN_10bff460() || FUN_10bc4160()->GetLinkedObject() == 0)
        PopState();
}
