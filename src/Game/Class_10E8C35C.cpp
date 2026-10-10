// Game/Class_10E8C35C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10978090.h"
#include "Game/Class_10E8C35C_Secondary.h"
#include "Game/Class_10F46DA0.h"

struct Struct_10C14320
{
    char Unknown00[0x78];
    int Unknown78;
};

class Class_10C08940
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
    virtual Struct_10C14320* Virtual8();
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E8C35C : public Class_10978090, public Class_10E8C35C_Secondary
{
public:
    virtual void Virtual1();
    virtual void FUN_10c14320();

    int Unknown10;
    int Unknown14;
};

// FUNCTION: 0x10C14320 ?FUN_10c14320@Class_10E8C35C@@UAEXXZ
void Class_10E8C35C::FUN_10c14320()
{
    Struct_10C14320* Obj = FUN_10978090()->Virtual8();
    if (Obj->Unknown78 & 4)
    {
        DAT_10f46da0->Virtual1(this, 0x57, Obj, -1);
        Unknown14 = 4;
    }
}
