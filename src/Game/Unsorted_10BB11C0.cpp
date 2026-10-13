// Game/Unsorted_10BB11C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C3D3B0.h"

int FUN_10bb0c60(int A);

class Class_10E74F70
{
public:
    virtual void FUN_10bfbb90(float Value);
};

class Class_10BB1140_Item
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

class Class_10BB1140_Source
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10C3D3B0* Virtual4(int A);
};

// FUNCTION: 0x10BB11C0 ?FUN_10bb11c0@@YGHHPAVClass_10BB1140_Item@@PAVClass_10BB1140_Source@@@Z
int __stdcall FUN_10bb11c0(int p1, Class_10BB1140_Item* Item, Class_10BB1140_Source* Source)
{
    if (Item && Item->Virtual8() && Source && Source->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)Item);
        if (Obj)
        {
            float Value = Source->Virtual4(0)->Class_10C3D3B0::FUN_10c3d3b0();
            Class_10E74F70* Light = (Class_10E74F70*)(((Class_10AA82D0*)Obj)->GetLinkedObject() + 0x30);
            Light->Class_10E74F70::FUN_10bfbb90(Value);
            return 1;
        }
    }
    return 0;
}
