// Game/Class_10E8C860_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C3D3B0.h"

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

class Class_10BFD210
{
public:
    float FUN_10bfc3a0();
    void Reset();
    void FUN_10bfc680(float Value);
    void FUN_10bfd4c0(float Value);
    void FUN_10bff150(int A, float B, int C);

    char Pad00[0x1];
};

extern Struct_10AA3520* DAT_10f35dec;

extern float DAT_10eafbdc;

int FUN_10bb0c60(int A);

class Class_10BB1080_Item
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

class Class_10BB1080_Source
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10C3D3B0* Virtual4(int A);
};

class Class_10E8C860
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int FUN_10bb1080(int p1, Class_10BB1080_Item* Item, Class_10BB1080_Source* Source);
};

// FUNCTION: 0x10BB1080 ?FUN_10bb1080@Class_10E8C860@@UAEHHPAVClass_10BB1080_Item@@PAVClass_10BB1080_Source@@@Z
int Class_10E8C860::FUN_10bb1080(int p1, Class_10BB1080_Item* Item, Class_10BB1080_Source* Source)
{
    if (Item && Item->Virtual8() && Source && Source->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)Item);
        if (Obj)
        {
            float Value = Source->Virtual4(0)->Class_10C3D3B0::FUN_10c3d3b0();
            Class_10BFD210* Light = (Class_10BFD210*)(((Class_10AA82D0*)Obj)->GetLinkedObject() + 0x30);
            if (Value > DAT_10eafbdc)
                Light->FUN_10bff150(DAT_10f35dec->Unknown08, Value, DAT_10f35dec->Unknown08 + 0x2c);
            else
                Light->FUN_10bfd4c0(-Value);
            return 1;
        }
    }
    return 0;
}
