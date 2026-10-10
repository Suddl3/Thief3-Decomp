// Game/Class_10E954D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BC4BF0.h"

struct Struct_10BC4240_Param;

class Class_10BC4BF0Obj
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
};

class Class_10E8BE68 : public Class_10BC4BF0
{
public:
    Struct_10BC4240_Param* FUN_10bca700();
    void FUN_10bc4240(Struct_10BC4240_Param* Param, bool A);
};

class Class_10E954D0 : public Class_10E8BE68
{
public:
    virtual void FUN_10bdf8e0();

    Struct_10BC4240_Param* FUN_10bc58f0(int A, int B, int C);
    void FUN_10bc4f20();
};

// FUNCTION: 0x10BDF8E0 ?FUN_10bdf8e0@Class_10E954D0@@UAEXXZ
void Class_10E954D0::FUN_10bdf8e0()
{
    Struct_10BC4240_Param* Param = FUN_10bc58f0(1, 1, 1);
    if (Param)
    {
        ((Class_10BC4BF0Obj*)FUN_10bc4bf0())->Virtual62();
        FUN_10bc4f20();
    }
    else
    {
        Param = FUN_10bca700();
    }
    if (Param)
        FUN_10bc4240(Param, false);
}
