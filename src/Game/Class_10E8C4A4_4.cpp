// Game/Class_10E8C4A4_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E8C4A4_Member.h"

class Class_1096C8D0;

class Class_10E8C4A4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Class_109081E0 FUN_10c12cc0();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual Class_109081E0 FUN_10c131d0();
    virtual bool FUN_10c129b0();

    Class_1096C8D0* Unknown04;
    Class_10E8C4A4_Member* Unknown08;
};

// FUNCTION: 0x10C12CC0 ?FUN_10c12cc0@Class_10E8C4A4@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E8C4A4::FUN_10c12cc0()
{
    if (Unknown08)
        return Unknown08->Virtual25();
    return Class_109081E0(DAT_10e47660);
}
