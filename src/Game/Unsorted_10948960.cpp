// Game/Unsorted_10948960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Struct_10919190.h"

class Class_10E66718
{
public:
    virtual void FUN_10a3a300(int A);
    virtual void Virtual1();
    virtual void Virtual2();
    virtual FVector FUN_10a3a950();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10a3a030();
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
    virtual bool Virtual24();

    void FUN_10948bd0();
    void FUN_10948960(int A);

    Struct_10919190 Unknown04;
    char Unknown44[0x14];
    unsigned char Unknown58;
    char Pad59[0x3];
    int Unknown5C;
    int Unknown60;
    char Pad64[0xb0];
    FVector Unknown114;
    FVector Unknown120;
    char Pad12C[0x4];
    bool Unknown130;
    char Pad131[0x3];
};

// FUNCTION: 0x10948BD0 ?FUN_10948bd0@Class_10E66718@@QAEXXZ
void Class_10E66718::FUN_10948bd0()
{
    if (!(Unknown5C & 0x11))
    {
        if ((Unknown5C & 0x24) && !(Unknown58 & 0x20))
        {
            Virtual23();
            if (Virtual24())
                Unknown60 |= 0x100;
        }
    }
    else
    {
        FUN_10948960(0);
        Virtual23();
        Virtual24();
        if (Unknown58 & 0x20)
            Unknown60 |= 0x80;
        else
            Unknown60 |= 0x100;
    }
    Unknown60 &= 0xfffff7ff;
}
