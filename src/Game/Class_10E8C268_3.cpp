// Game/Class_10E8C268_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E50610.h"
#include "Game/Class_10E8C268Base.h"

class Class_10978090Result
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
    virtual int Virtual8();
};

class Class_10978090
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    Class_10978090Result* FUN_10978090();
    int Unknown04;
    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E8C268Base* Obj, int B, int C, Class_10E50610* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E8C268 : public Class_10978090, public Class_10E8C268Base
{
public:
    virtual void FUN_10c14de0();
};

// FUNCTION: 0x10C14DE0 ?FUN_10c14de0@Class_10E8C268@@UAEXXZ
void Class_10E8C268::FUN_10c14de0()
{
    Class_10E50610 Local;
    Local.Unknown04 = FUN_10978090()->Virtual8();
    Local.Unknown08 = 1;
    DAT_10f46da0->Virtual1(this, 0x22, -1, &Local);
}
