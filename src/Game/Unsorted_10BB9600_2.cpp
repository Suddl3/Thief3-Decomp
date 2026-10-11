// Game/Unsorted_10BB9600_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10AAF570.h"
#include "Game/Class_10971570.h"

class Class_10BB9E90_FUN_10c7d570
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
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual void Virtual48();
    virtual void Virtual49();
    virtual void Virtual50();
    virtual void Virtual51();
    virtual void Virtual52();
    virtual void Virtual53();
    virtual void Virtual54();
    virtual void Virtual55();
    virtual void Virtual56();
    virtual void Virtual57();
    virtual void Virtual58();
    virtual void Virtual59();
    virtual void Virtual60();
    virtual void Virtual61();
    virtual void Virtual62();
    virtual void Virtual63();
    virtual void Virtual64();
    virtual void Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual void Virtual76();
    virtual void Virtual77();
    virtual void Virtual78();
    virtual void Virtual79();
    virtual void Virtual80();
    virtual void Virtual81();
    virtual void Virtual82();
    virtual void Virtual83();
    virtual void Virtual84();
    virtual void Virtual85();
    virtual void Virtual86();
    virtual void Virtual87();
    virtual void Virtual88();
    virtual void Virtual89();
    virtual void Virtual90();
    virtual void Virtual91();
    virtual void Virtual92();
    virtual void Virtual93();
    virtual void Virtual94();
    virtual void Virtual95();
    virtual void Virtual96();
    virtual void Virtual97();
    virtual Class_10971570* Virtual98();
};

class Class_10BB9E90_FUN_10aaf570
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
    virtual void Virtual38();
    virtual void Virtual39();
    virtual void Virtual40();
    virtual void Virtual41();
    virtual void Virtual42();
    virtual void Virtual43();
    virtual void Virtual44();
    virtual void Virtual45();
    virtual void Virtual46();
    virtual void Virtual47();
    virtual int Virtual48();
};

class Class_10FF667C
{
public:
    char Unknown00[0x34];
    int Unknown34;
    int Unknown38;
    int Unknown3C;
};

extern Class_10FF667C* DAT_10ff667c;

// Game/Class_10BB9FC0.h copied whole, with the field the header calls padding at 0x0C typed as the Class_10AAF570 it holds, and the flag at 0x2D5 added.
class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();
    void FUN_10bb9fc0();
    void FUN_10bb9ff0();
    bool FUN_10bb96f0();

    char Unknown00[8];
    Class_10C7D570* Unknown08;
    Class_10AAF570* Unknown0C;
    char Unknown10[0x274];
    int Unknown284;
    char Unknown288[0x4D];
    bool Unknown2D5;
};

// FUNCTION: 0x10BB9E90 ?FUN_10bb9e90@Class_10BB9FC0@@QAEXXZ
void Class_10BB9FC0::FUN_10bb9e90()
{
    Class_10971570* Obj = ((Class_10BB9E90_FUN_10c7d570*)Unknown08->FUN_10c7d570())->Virtual98();
    if (!Obj)
    {
        if (!FUN_10bb96f0())
            Unknown284 = 0;
        return;
    }
    int Kind = ((Class_10BB9E90_FUN_10aaf570*)Unknown0C->FUN_10aaf570())->Virtual48();
    if (Kind == 0xb || Kind == 0xc)
        Unknown284 = DAT_10ff667c->Unknown34;
    else if (Kind == 0xf || Kind == 0xe)
        Unknown284 = DAT_10ff667c->Unknown38;
    else if (Kind == 0 && Unknown2D5)
    {
        unsigned char Flag = 0;
        Obj->FUN_10971570(0x20000bd, (bool*)&Flag);
        if (Flag == 9)
            Unknown284 = DAT_10ff667c->Unknown3C;
    }
}
