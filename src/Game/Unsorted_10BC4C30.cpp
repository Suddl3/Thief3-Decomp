// Game/Unsorted_10BC4C30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Field10.h"
#include "Game/Class_10BC4BF0_Member.h"
#include "Game/Struct_10FF66BC.h"

class Object_10AAF570
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
    virtual int Virtual38();
};

extern Struct_10FF66BC DAT_10ff66bc[];

class Class_Field04
{
public:
    void FUN_10bb83e0();

    char Unknown00[0xC];
    Class_10AAF570* Unknown0C;
};

class Class_10E8BE68
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10bc4c30();

    // The accessor at 0x10BC4BF0, which the compiler inlines here.
    int FUN_10bc4bf0()
    {
        Class_10AAF570* Target = Unknown04->Unknown0C;
        if (!Target)
            return 0;
        return Target->FUN_10aaf570();
    }

    Class_Field04* Unknown04;
};

struct Struct_10BC4E90
{
    char Unknown00[0x2C];
    int Unknown2C;
};

class Class_10E92B20
{
public:
    virtual void Virtual0();

    void FUN_10bc4e90(Struct_10BC4E90* p1, int p2);

    // The accessor at 0x10BC4BF0, which the compiler inlines here.
    int FUN_10bc4bf0()
    {
        Class_10AAF570* Target = Unknown04->Unknown0C;
        if (!Target)
            return 0;
        return Target->FUN_10aaf570();
    }

    Class_10BC4BF0_Member* Unknown04;
};

// FUNCTION: 0x10BC4C30 ?FUN_10bc4c30@Class_10E8BE68@@UAEXXZ
void Class_10E8BE68::FUN_10bc4c30()
{
    if (FUN_10bc4bf0() && (DAT_10ff66bc[((Object_10AAF570*)FUN_10bc4bf0())->Virtual38()].Flags & 4))
        Unknown04->FUN_10bb83e0();
}

// FUNCTION: 0x10BC4E90 ?FUN_10bc4e90@Class_10E92B20@@QAEXPAUStruct_10BC4E90@@H@Z
void Class_10E92B20::FUN_10bc4e90(Struct_10BC4E90* p1, int p2)
{
    if (FUN_10bc4bf0())
        ((Class_10AAF570_Field10*)FUN_10bc4bf0())->Virtual69(&p1->Unknown2C, p2);
}
