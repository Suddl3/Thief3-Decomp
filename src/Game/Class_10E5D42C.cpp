// Game/Class_10E5D42C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5D42C.h"
#include "Game/Config.h"

class Class_10E6CE28;

class Class_10A0FFD0_Item;

class Class_10A0FFD0_Unknown08;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int* A);
};

extern Class_10F46DA0* DAT_10f46da0;

// Copied from include/Game/Class_10E6CE28.h, with its base's placeholder of the same size
// (the vptr and two ints) and Virtual1 returning bool, as the call site tests it.
class Class_10E6CE28
{
public:
    virtual void Virtual0();
    virtual bool Virtual1();
    virtual void FUN_10a94fc0();
    virtual void Virtual3();
    virtual Class_10E6CE28* Virtual4(int A);

    int GetUnknown08();

    char Pad04[0x8];
    union
    {
        int Unknown08;
        int unknown_08;
    };
};

class Class_10A0FFD0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual Class_10A0FFD0_Item* Virtual4(int A);
};

class Class_10A0FFD0_Item
{
public:
    virtual void Virtual0();
    virtual int Virtual1();

    bool FUN_10a7f0e0(int A);
};

extern const char DAT_10e5d3f0[];

extern const char DAT_10e5d400[];

class Class_10A10070_Arg3
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
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual int Virtual19();
    virtual void* Virtual20(int I);
};

// FUNCTION: 0x10A0FFD0 ?FUN_10a0ffd0@Class_10E5D42C@@QAE_NHHHPAVClass_10E6CE28@@@Z
bool Class_10E5D42C::FUN_10a0ffd0(int A, int B, int C, Class_10E6CE28* D)
{
    Class_10A0FFD0_Unknown08* List = (Class_10A0FFD0_Unknown08*)D->GetUnknown08();
    for (int i = 0; i < List->Virtual3(); i++)
    {
        Class_10A0FFD0_Item* Item = List->Virtual4(i);
        if (Item->Virtual1() == 5 && !Item->FUN_10a7f0e0(A))
        {
            if (D->Virtual1())
            {
                Virtual5(A, D);
                DAT_10f46da0->Virtual2(&D->Unknown08);
            }
            return false;
        }
    }
    return true;
}

// FUNCTION: 0x10A10070 ?FUN_10a10070@Class_10E5D42C@@UAEXHHPAVClass_10A10070_Arg3@@@Z
void Class_10E5D42C::FUN_10a10070(int A, int B, Class_10A10070_Arg3* C)
{
    bool Flag = false;
    Config::Instance()->GetBool(DAT_10e5d3f0, DAT_10e5d400, &Flag, 0);
    if (C && Flag)
    {
        for (int i = 0; i < C->Virtual19(); i++)
        {
            void* Item = C->Virtual20(i);
            Virtual4(A, B, C, Item);
        }
    }
}
