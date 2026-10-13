// Game/Unsorted_10BDBA70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"

class UObject;

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(UObject** Value);
    virtual void Virtual7(void* V);

    char Unknown04[8];
    int Unknown0C;
    char Unknown10[4];
    int Unknown14;
    int Unknown18;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E94E00
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
    virtual void FUN_10bdba70(FArchive& Ar);

    char Pad04[0x50];
    int Unknown54;
    int Unknown58;
    int Unknown5C;
    char Pad60[0x8];
    bool Unknown68;
    char Pad69[0x3];
    int Unknown6C;
    int Unknown70;
    int Unknown74;
    char Pad78[0x1];
    bool Unknown79;
};

// FUNCTION: 0x10BDBA70 ?FUN_10bdba70@Class_10E94E00@@UAEXAAVFArchive@@@Z
void Class_10E94E00::FUN_10bdba70(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown54, 4);
    Ar.Serialize(&Unknown58, 4);
    FUN_10b052a0(Ar, &Unknown5C);
    Ar.Serialize(&Unknown68, 1);
    Ar.Serialize(&Unknown6C, 4);
    if (Ar.Unknown18 != 0 || Ar.Unknown0C >= 0x54)
    {
        Ar.Serialize(&Unknown70, 4);
        Ar.Serialize(&Unknown74, 4);
    }
    if (Ar.Unknown0C >= 0x67)
        Ar.Serialize(&Unknown79, 1);
}
