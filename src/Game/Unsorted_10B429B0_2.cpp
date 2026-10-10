// Game/Unsorted_10B429B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B429B0.h"
#include "Game/Class_10B435B0.h"
#include "Game/Struct_10B429E0.h"

class Class_10A64EB0
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

    void FUN_10a64eb0();
};

class Class_10E67FD0
{
public:
    Class_10E67FD0();

    virtual ~Class_10E67FD0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x2C];
};

class Class_10E809B8 : public Class_10E67FD0
{
public:
    Class_10E809B8();

    virtual ~Class_10E809B8();

    int Unknown118;
    char Unknown11C[0x4];
    int Unknown120;
    int Unknown124;
    char Unknown128[0x4];
    Struct_10B429E0 Unknown12C;
};

extern Class_10B435B0* DAT_10ff6530;

extern int DAT_10ff652c;

// FUNCTION: 0x10B429B0 ?FUN_10b429b0@Class_10B429B0@@QAEXXZ
void Class_10B429B0::FUN_10b429b0()
{
    Unknown124 = 0;
    if (Unknown11C)
    {
        Unknown11C->FUN_10a64eb0();
        Unknown11C->Virtual36();
    }
}

// FUNCTION: 0x10B429E0 ??0Class_10E809B8@@QAE@XZ
Class_10E809B8::Class_10E809B8() : Unknown118(0), Unknown120(0), Unknown124(0)
{
    Unknown0E8 = 0x16;
}

// FUNCTION: 0x10B42BB0 ??_GClass_10E809B8@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B429E0's definition in this unit.

// FUNCTION: 0x10B43AA0 ?FUN_10b43aa0@@YAXH@Z
void FUN_10b43aa0(int A)
{
    if (A == 1)
        DAT_10ff6530->FUN_10b435b0(1, DAT_10ff652c);
    else
        DAT_10ff6530->Virtual123();
}
