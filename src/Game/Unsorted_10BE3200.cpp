// Game/Unsorted_10BE3200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first
#include "Core/Core.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class Class_10E95D00 : public Class_10E8BE68
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
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x3C];
    bool Unknown40;
    char Unknown41[0x3];
    FVector Unknown44;
    FVector Unknown50;
    int Unknown5C;
    int Unknown60;
};

extern Class_10FF667C* DAT_10ff667c;

class State_Fetch : public Class_10E8BE68
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
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x3C];
    int m_Reference;
    unsigned char Unknown44;
    int Unknown48;
};

// FUNCTION: 0x10BE33A0 ?Serialize@Class_10E95D00@@UAEXAAVFArchive@@@Z
void Class_10E95D00::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    if (Ar.Unknown0C >= 0x50)
    {
        FUN_10b052a0(Ar, &Unknown44);
        Ar.Serialize(&Unknown40, 1);
    }
    if (Ar.Unknown0C >= 0x6F)
    {
        Ar.Serialize(&Unknown5C, 4);
        Ar.Serialize(&Unknown60, 4);
        FUN_10b052a0(Ar, &Unknown50);
    }
}

// FUNCTION: 0x10BE3420 ?Serialize@State_Fetch@@UAEXAAVFArchive@@@Z
void State_Fetch::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    if (Ar.Unknown0C >= 0x60)
    {
        Ar.Serialize(&Unknown44, 1);
        DAT_10ff667c->Unknown18->Virtual1(Ar, &m_Reference);
        unsigned char Byte = Unknown48;
        Ar.Serialize(&Byte, 1);
        Unknown48 = Byte;
    }
}
