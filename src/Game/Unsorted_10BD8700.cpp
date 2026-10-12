// Game/Unsorted_10BD8700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E90D70.h"
#include "Game/cString.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Struct_10B98E00.h"
#include "Game/Struct_10C7D570.h"
#include "Game/Struct_10BCB770_Value.h"
#include "Core/Core.h"
#include "Game/Class_10BB7E60.h"
#include "Game/Class_10BB89D0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BFF460.h"
#include "Game/Struct_10BA91E0.h"
#include "Game/Class_10BD8880.h"

class Class_10BD8880_Unknown04
{
public:
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

class Class_10C7D570_Result
{
public:
    char Unknown00[0x2c];
    Struct_10BA91E0 Unknown2C;
};

float FUN_10ba91e0(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

double GetTimeSeconds();

class cCombatBase
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10bd92e0();
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
    virtual const Struct_10BA91E0* Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual bool Virtual73(float A);

    void FUN_10bd8ae0();

    Class_10BBB410* Unknown04;
    char Unknown08[0x40];
    float Unknown48;
    char m_LastKnownPosition[0xC];
    bool Unknown58;
};

// FUNCTION: 0x10BD8880 ??0Class_10BD8880@@QAE@HH@Z
Class_10BD8880::Class_10BD8880(int A, int B)
    : Class_10E90D70(A, B), Unknown40(0), Unknown44(0), Unknown48(1024.0f),
      Unknown4C(((Struct_10C7D570*)((Class_10C7D570*)((Struct_10B98E00*)A)->Unknown08)->FUN_10c7d570())->Unknown2C),
      Unknown58(false), Unknown5C(1.0f), Unknown60(false), Unknown64(1.0f), Unknown68(DAT_10e47660)
{
    Unknown6C = ((Class_10BD8880_Unknown04*)Unknown04[0])->Unknown08->FUN_10dbd510(0x100745)->FUN_10bbdc80();
}

// FUNCTION: 0x10BD92E0 ?FUN_10bd92e0@cCombatBase@@UAEXXZ
void cCombatBase::FUN_10bd92e0()
{
    Class_10BFF460* Obj = Unknown04->GetCurrent();
    Class_10C7D570* C = Unknown04->Unknown08;
    Unknown48 = FUN_10ba91e0(&((Class_10C7D570_Result*)C->FUN_10c7d570())->Unknown2C, Virtual70());
    Unknown58 = Obj && !Obj->FUN_10bff330() && Virtual73(0.5f);
    float Value = ((Class_10BB89D0*)Unknown04)->Unknown33C;
    if (GetTimeSeconds() > Value)
    {
        if (((Class_10BB7E60*)Unknown04)->FUN_10bb7e60())
        {
            ((Class_10BB89D0*)Unknown04)->FUN_10bbc0f0(0x807f7);
            FUN_10bd8ae0();
            return;
        }
        ((Class_10BB89D0*)Unknown04)->FUN_10bbc0f0(0x807f9);
    }
    FUN_10bd8ae0();
}
