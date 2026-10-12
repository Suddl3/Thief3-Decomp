// Game/Class_10E8BE68_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BABED0.h"

struct Struct_10BC4240_Param;

class Class_10BB8300
{
public:
    char Unknown00[8];
    Class_10BABED0* m_Owner;
};

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
    virtual void FUN_10bcc240();

    bool FUN_10bc40e0();
    void FUN_10bc4240(Struct_10BC4240_Param* Param, bool A);
    void PopState();
    Struct_10BC4240_Param* FUN_10bca700();

    Class_10BB8300* Unknown04;
};

// FUNCTION: 0x10BCC240 ?FUN_10bcc240@Class_10E8BE68@@UAEXXZ
void Class_10E8BE68::FUN_10bcc240()
{
    if (!Unknown04->m_Owner->FUN_10babed0(false))
    {
        PopState();
        return;
    }
    if (FUN_10bc40e0())
    {
        PopState();
        return;
    }
    Struct_10BC4240_Param* Param = FUN_10bca700();
    if (Param)
        FUN_10bc4240(Param, false);
}
