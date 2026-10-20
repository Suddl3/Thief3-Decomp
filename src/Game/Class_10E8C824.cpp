// Game/Class_10E8C824.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10BBDC30.h"
#include "Game/Class_10E8C824.h"

class Class_1098E330;

class Class_10971570;

struct Struct_10BBD8B0;

class Class_10BB0F20_Item
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

class Class_10BB0F20_Source
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10AAB5C0* Virtual4(int A);
};

Class_10BBDC30* FUN_10bb0c30(int A);

// FUNCTION: 0x10BB0F20 ?FUN_10bb0f20@Class_10E8C824@@UAEHHPAVClass_10BB0F20_Item@@PAVClass_10BB0F20_Source@@@Z
int Class_10E8C824::FUN_10bb0f20(int p1, Class_10BB0F20_Item* Item, Class_10BB0F20_Source* Source)
{
    if (Item && Item->Virtual8() && Source && Source->Virtual3() >= 1)
    {
        int Value = Source->Virtual4(0)->GetUnknown08();
        Class_10BBDC30* Obj = FUN_10bb0c30((int)Item);
        if (Obj)
        {
            Obj->FUN_10bbdf10(0x420004a8, Value);
            return 1;
        }
    }
    return 0;
}
