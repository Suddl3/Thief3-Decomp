// Game/Unsorted_10944DD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class Class_10946090_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4(int Param);
};

struct Struct_10946090_Item
{
    int Unknown00;
    Class_10946090_Item* Unknown04;
    char Unknown08[0x1C];
};

class Class_10E4A668
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
    virtual void FUN_10946090(cIntArray* Out, int Param);

    char Unknown04[0xEC];
    int Unknown0F0;
    char Unknown0F4[0x3C];
    Struct_10946090_Item* Unknown130;
};

// FUNCTION: 0x10946090 ?FUN_10946090@Class_10E4A668@@UAEXPAVcIntArray@@H@Z
void Class_10E4A668::FUN_10946090(cIntArray* Out, int Param)
{
    int Count = Unknown0F0;
    for (int i = 0; i < Count; i++)
    {
        if (Unknown130)
        {
            Class_10946090_Item* Item = Unknown130[i].Unknown04;
            if (Item)
            {
                int Value = Item->Virtual4(Param);
                if (Value)
                {
                    int Index = Out->Count;
                    Out->SetCount(Index + 1);
                    Out->Data[Index] = Value;
                }
            }
        }
    }
}
