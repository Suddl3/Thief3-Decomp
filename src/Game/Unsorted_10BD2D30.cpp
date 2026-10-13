// Game/Unsorted_10BD2D30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C2F090.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10AA82C0.h"

struct Struct_10BF7990
{
    char Unknown00[0xC];
};

struct Struct_10C05A50
{
    char Unknown00[0xC];
};

struct Struct_10BD2D30_Target
{
    char Unknown00[0x2C];
    Struct_10C05A50 Unknown2C;
};

class Class_10B39870 : public Class_10AA82C0
{
};

class Class_10AAF570
{
public:
    virtual void Virtual0();
    int GetLinkType();
};

class Class_10AA82D0 : public Class_10AAF570
{
public:
    Class_10B39870* GetLinkedObject();
};

class Class_10BF7F90 : public Class_10AA82D0
{
public:
    bool FUN_10bf7990(Struct_10BF7990* A);
};

class Class_10BD2D30_Unknown04
{
public:
    char Unknown00[0x8];
    Class_10C7D570* Unknown08;
};

class Class_10BD2D30_Result
{
public:
    char Unknown00[0x10];
    int Unknown10;
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

float DistanceSquared2D(const Struct_10C05A50* A, const Struct_10C05A50* B);

class Class_10E939E0 : public Class_10BC4160
{
public:
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
    virtual void FUN_10bd2d30();

    int GetTargetLinkType();

    Class_10BD2D30_Unknown04* Unknown04;
    char Unknown08[0x9C];
    bool UnknownA4;
};

// FUNCTION: 0x10BD2D30 ?FUN_10bd2d30@Class_10E939E0@@UAEXXZ
void Class_10E939E0::FUN_10bd2d30()
{
    Struct_10BF7990 Link;
    float Value;
    if (!FUN_10bc4160()->FUN_10bf7990(&Link))
        return;
    if (((Class_10BD2D30_Result*)FUN_10bc4160()->GetLinkedObject()->FUN_10aa82c0())->Unknown10 == 1)
        return;
    if (UnknownA4)
    {
        Value = Unknown04->Unknown08->FUN_10dbd510(0x401007d4)->GetFloat();
        ((Class_10C2F090*)GetTargetLinkType())->FUN_10c2f090(*(int*)&Value);
        return;
    }
    Value = Unknown04->Unknown08->FUN_10dbd510(0x401007d7)->GetFloat() * 16.0f;
    if (DistanceSquared2D((Struct_10C05A50*)&Link, &((Struct_10BD2D30_Target*)Unknown04->Unknown08->FUN_10c7d570())->Unknown2C) > Value * Value)
    {
        Value = Unknown04->Unknown08->FUN_10dbd510(0x401007d4)->GetFloat();
        ((Class_10C2F090*)GetTargetLinkType())->FUN_10c2f090(*(int*)&Value);
        return;
    }
    Value = Unknown04->Unknown08->FUN_10dbd510(0x401007d5)->GetFloat();
    ((Class_10C2F090*)GetTargetLinkType())->FUN_10c2f090(*(int*)&Value);
}
