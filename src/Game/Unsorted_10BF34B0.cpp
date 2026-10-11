// Game/Unsorted_10BF34B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"

void FUN_10befed0();

class Class_10BC4BF0_Member;

class Class_10BC4BF0
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

    int FUN_10bc4bf0();

    Class_10BC4BF0_Member* Unknown04;
};

class Class_10BF5310 : public Class_10E8BE68
{
public:
    void FUN_10bf5310();
    int FUN_10bc4bf0();
    unsigned char FUN_10bef0b0();
    void FUN_10bef610(int A);
    void FUN_10bf42c0();
};

// FUNCTION: 0x10BF5310 ?FUN_10bf5310@Class_10BF5310@@QAEXXZ
void Class_10BF5310::FUN_10bf5310()
{
    FUN_10befed0();
    Class_10BC4BF0* Obj = (Class_10BC4BF0*)FUN_10bc4bf0();
    int Kind = Obj->Virtual48();
    if (Kind == 0xe || Kind == 0xb || Kind == 7)
    {
        FUN_10bf42c0();
        return;
    }
    if (Kind == 0xf || Kind == 0xc)
    {
        FUN_10bef610(0);
        return;
    }
    if (FUN_10bef0b0())
        Class_10E8BE68::FUN_10bc5b50();
}
