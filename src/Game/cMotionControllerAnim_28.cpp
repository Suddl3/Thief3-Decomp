// Game/cMotionControllerAnim_28.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C49740.h"

class Class_10C339C0_Sub;

class Class_10C339C0_Unknown08;

class Class_10C339C0_Entry;

class Class_10C339C0_Unknown0A8;

struct Entry_10C32C30;

class Class_10C339C0_Sub
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual bool Virtual6();
};

class Class_10C339C0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual int Virtual5();

    char Pad04[0x18];
    Class_10C339C0_Sub Unknown1C;
    char Pad20[0x10];
    Class_10C339C0_Sub Unknown30;
    char Pad34[0x8];
    Class_10C339C0_Sub Unknown3C;
};

class Class_10C339C0_Entry
{
public:
    char Pad00[8];
    Class_10C339C0_Unknown08* Unknown08;
};

struct Entry_10C32C30
{
    Class_10C339C0_Entry* Unknown00;
};

class Class_10C339C0_Unknown0A8
{
public:
    char Pad00[8];
    Class_10C339C0_Unknown08* Unknown08;
};

class cMotionControllerAnim
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
    virtual bool FUN_10c339c0();

    char Unknown04[0xA4];
    Class_10C339C0_Unknown0A8* Unknown0A8;
    char Unknown0AC[0x4];
    Class_10C49740 Unknown0B0;
};

// FUNCTION: 0x10C339C0 ?FUN_10c339c0@cMotionControllerAnim@@UAE_NXZ
bool cMotionControllerAnim::FUN_10c339c0()
{
    Entry_10C32C30* Entry;
    Class_10C339C0_Unknown08* Obj = Unknown0A8 ? Unknown0A8->Unknown08 : 0;
    if (!Obj)
        return false;
    Class_10C339C0_Unknown08* Key = Obj;
    bool Found = Unknown0B0.FUN_10c49740((int*)&Key, &Entry);
    Class_10C339C0_Entry* P = (Found ? Entry : 0)->Unknown00;
    Class_10C339C0_Unknown08* B;
    if (P)
        B = P->Unknown08;
    else
        B = 0;
    Class_10C339C0_Sub* Sub;
    switch (Obj->Virtual5())
    {
    case 0:
        Sub = &Obj->Unknown30;
        break;
    case 1:
        Sub = &Obj->Unknown3C;
        break;
    case 2:
        Sub = &Obj->Unknown1C;
        break;
    default:
        Sub = 0;
        break;
    }
    if (B && Sub && Sub->Virtual6())
    {
        if (Obj->Virtual5() != 2)
            return true;
        if (Sub->Virtual6())
            return B->Virtual5() != 2;
        return false;
    }
    return Obj->Virtual5() != 2;
}
