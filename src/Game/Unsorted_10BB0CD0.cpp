// Game/Unsorted_10BB0CD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10E8C848.h"
#include "Game/Class_10E8C86C.h"
#include "Game/Class_10E9CD90.h"
#include "Game/Struct_10BB0B90.h"
#include "Game/Class_10BB1020_B.h"

int FUN_10bb0c60(int A);

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

class Class_10BAD190
{
public:
    void FUN_10bad190(int A, int B, int C);
};

class Class_10B9C9F0
{
public:
    Class_10BAD190* FUN_10b9c9f0();
};

struct Struct_10AA3520
{
    char Unknown00[8];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

struct Struct_10BB0B90_Unknown118
{
    char Unknown00[8];
    Class_10B9C9F0* Unknown08;
};

Struct_10BB0B90* FUN_10bb0b90(int A);

// FUNCTION: 0x10BB1020 ?FUN_10bb1020@Class_10E8C848@@UAEHHPAVClass_10BB1020_B@@H@Z
int Class_10E8C848::FUN_10bb1020(int A, Class_10BB1020_B* B, int C)
{
    if (B && B->Virtual8())
    {
        Struct_10BB0B90* Owner = FUN_10bb0b90((int)B);
        if (Owner && Owner->Unknown118 && Owner->Unknown118->Unknown08)
        {
            Owner->Unknown118->Unknown08->FUN_10b9c9f0()->FUN_10bad190(DAT_10f35dec->Unknown08, 1, 1);
            return 1;
        }
    }
    return 0;
}

// FUNCTION: 0x10BB1140 ?FUN_10bb1140@Class_10E8C86C@@UAEHHPAVClass_10BB1140_Item@@PAVClass_10BB1140_Source@@@Z
int Class_10E8C86C::FUN_10bb1140(int p1, Class_10BB1140_Item* Item, Class_10BB1140_Source* Source)
{
    if (Item && Item->Virtual8() && Source && Source->Virtual3() >= 1)
    {
        int Obj = FUN_10bb0c60((int)Item);
        if (Obj)
        {
            float Value = Source->Virtual4(0)->Class_10C3D3B0::FUN_10c3d3b0();
            Class_10E9CD90* Light = (Class_10E9CD90*)(((Class_10AA82D0*)Obj)->FUN_10aa82d0() + 0x30);
            Light->Class_10E9CD90::FUN_10bfbb80(Value);
            return 1;
        }
    }
    return 0;
}
