// Game/Class_10E7EC40_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B395B0.h"
#include "Game/Class_10B39700.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int GetLinkedObject();

    char Unknown04[4];
    int Unknown08;
    int m_LinkedObject;
};

class Class_10E7EC40 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int OnAnimationEnd(int A, int B);
};

// FUNCTION: 0x10B48510 ?OnAnimationEnd@Class_10E7EC40@@UAEHHH@Z
int Class_10E7EC40::OnAnimationEnd(int A, int B)
{
    if (B == 0x41)
    {
        ((Class_10B395B0*)GetLinkedObject())->FUN_10b395b0(Unknown08);
        ((Class_10B39700*)GetLinkedObject())->FUN_10b39700();
        return 1;
    }
    return Virtual4();
}
