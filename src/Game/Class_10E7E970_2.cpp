// Game/Class_10E7E970_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B396B0.h"

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10E7E970 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();
    virtual int OnAnimationEnd(int A, int B);
};

// FUNCTION: 0x10B4D9B0 ?OnAnimationEnd@Class_10E7E970@@UAEHHH@Z
int Class_10E7E970::OnAnimationEnd(int A, int B)
{
    ((Class_10B396B0*)FUN_10aa82d0())->FUN_10b396b0(B);
    Unknown08 = 0x101;
    if ((B < 0x78 || B > 0x7c) && (B < 0xd4 || B > 0xd8))
        return Virtual4();
    return 0x17;
}
