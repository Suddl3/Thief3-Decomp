// Game/Unsorted_1094EFC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1094F750.h"
#include "Game/Class_10953590.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

struct Struct_1094F6F0_Item
{
    Class_10953590* Unknown00;
};

class Class_10E4AB88
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
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void FUN_1094f6f0(Class_10BFBD70* Out, int Param);

    char Unknown04[0xF0];
    int Unknown0F4;
    int Unknown0F8;
    Struct_1094F6F0_Item** Unknown0FC;
};

// FUNCTION: 0x1094F6F0 ?FUN_1094f6f0@Class_10E4AB88@@UAEXPAVClass_10BFBD70@@H@Z
void Class_10E4AB88::FUN_1094f6f0(Class_10BFBD70* Out, int Param)
{
    for (int i = 0; i < Unknown0F4; i++)
    {
        Class_10953590* Obj = Unknown0FC[i]->Unknown00;
        if (Obj)
        {
            int Value = Obj->Virtual4(Param);
            if (Value)
            {
                int Index = Out->Unknown00;
                Out->FUN_10bfbd70(Index + 1);
                Out->Unknown08[Index] = Value;
            }
        }
    }
}

// FUNCTION: 0x1094F750 ?FUN_1094f750@Class_1094F750@@QAEXXZ
void Class_1094F750::FUN_1094f750()
{
    FUN_1094f510(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
