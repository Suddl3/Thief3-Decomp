// Game/cMeleeStrafeTarget.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8300.h"
#include "Game/Class_10BFF280.h"
#include "Game/Class_10BB8360.h"

class Class_10BFF460 : public Class_10BFF280
{
};

class Class_10BBB410 : public Class_10BB8360
{
public:
    Class_10BFF460* GetCurrent();
};

class cMeleeStrafeTarget
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10bdafa0();

    Class_10BBB410* Unknown04;
};

// FUNCTION: 0x10BDAFA0 ?FUN_10bdafa0@cMeleeStrafeTarget@@UAEXXZ
void cMeleeStrafeTarget::FUN_10bdafa0()
{
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    if (Obj)
    {
        Class_10BBB410* Ctrl = Unknown04;
        Ctrl->FUN_10bb8360(Obj->FUN_10bff280(), 1.0f, 0);
    }
    Unknown04->FUN_10bb8300();
}
