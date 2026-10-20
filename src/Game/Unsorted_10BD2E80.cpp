// Game/Unsorted_10BD2E80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BB8510.h"
#include "Game/Class_10BB9FC0.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10C1AA90.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E992D4.h"

class Class_10C1AC00;

class Class_10C88610
{
public:
    Class_10C1AC00* FUN_10c88610();
};

struct Struct_10C05A80 {};

struct Struct_10C05A50
{
    char Unknown00[0xC];
};

struct Class_10BD2E80_Target
{
    char Unknown00[0x2C];
    Struct_10C05A50 Unknown2C;
};

float __cdecl DistanceSquared3D(const Struct_10C05A80* A, const Struct_10C05A80* B);

extern float DAT_10e6b94c;

class Class_10BD2E80_Result
{
public:
    char Unknown00[0x10];
    int Unknown10;
};

class Class_10BD2E80_Unknown04
{
public:
    char Unknown00[0x8];
    Class_10C7D570* Unknown08;
    char Unknown10[0x24];
    Class_10C88610 Unknown30;
};

class Class_10BC4160
{
public:
    virtual void Virtual0();
};

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
    virtual void FUN_10bd2e80(Class_10BD2E80_Result* Out, const Struct_10C05A80* Target);

    bool FUN_10bd1d40(Class_10C1AC00* Obj);

    Class_10BD2E80_Unknown04* Unknown04;
    char Unknown08[0x9C];
    bool UnknownA4;
};

// FUNCTION: 0x10BD2E80 ?FUN_10bd2e80@Class_10E939E0@@UAEXPAVClass_10BD2E80_Result@@PBUStruct_10C05A80@@@Z
void Class_10E939E0::FUN_10bd2e80(Class_10BD2E80_Result* Out, const Struct_10C05A80* Target)
{
    Class_10BD2E80_Unknown04* AI = Unknown04;
    Class_10C1AC00* Obj = AI->Unknown30.FUN_10c88610();
    if (UnknownA4)
    {
        if (Obj && FUN_10bd1d40(Obj))
        {
            Out->Unknown10 = 1;
            return;
        }
    }
    else
    {
        if (Obj && ((Class_10E992D4*)Obj)->FUN_10c270b0() && FUN_10bd1d40(Obj))
        {
            Out->Unknown10 = 1;
            ((Class_10C1AA90*)Obj)->FUN_10c1aa90(1);
            return;
        }
    }
    {
        int Result = 0;
        if (((Class_10BB8510*)Unknown04)->FUN_10bb8510(&Result) == 2)
        {
            if (DistanceSquared3D(Target, (const Struct_10C05A80*)&((Class_10BD2E80_Target*)Unknown04->Unknown08->FUN_10c7d570())->Unknown2C) > DAT_10e6b94c)
            {
                Out->Unknown10 = 1;
                return;
            }
            Out->Unknown10 = 2;
            return;
        }
    }
    if (UnknownA4 && ((Class_10BB9FC0*)Unknown04)->FUN_10bb96f0())
    {
        float Value = Unknown04->Unknown08->FUN_10dbd510()->GetFloat(0x10058c) * 16.0f;
        if (DistanceSquared3D(Target, (const Struct_10C05A80*)&((Class_10BD2E80_Target*)Unknown04->Unknown08->FUN_10c7d570())->Unknown2C) > Value * Value)
        {
            Out->Unknown10 = 1;
        }
    }
}
