// Game/Unsorted_10B275E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10970890.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10B27700.h"

class Class_10B27700_Unknown1D8
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
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    virtual void Virtual35();
    virtual void Virtual36();
    virtual void Virtual37();
    virtual void Virtual38(cIntArray& Found);
};

// FUNCTION: 0x10B27700 ?FUN_10b27700@Class_10B27700@@QAEXH@Z
void Class_10B27700::FUN_10b27700(int Param)
{
    if (Unknown1D8)
    {
        cIntArray Found;
        Unknown1D8->Virtual38(Found);
        Class_1098E330* Item = (Class_1098E330*)Found.Data[0];
        if (Item && Param != -1)
        {
            Class_10970890* Target = Item->FUN_10991eb0();
            if (Target)
                Target->FUN_109724c0(Item, Param);
        }
    }
}
