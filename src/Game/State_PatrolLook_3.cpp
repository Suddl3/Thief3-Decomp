// Game/State_PatrolLook_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E8BE68.h"
#include "Game/FArchive.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

void FUN_10c11ff0(FArchive& Ar, int* Value);

void* FUN_10b232e0(void* A, void* B);

extern Class_10FF667C* DAT_10ff667c;

class State_PatrolLook
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
    virtual void FUN_10bee900(FArchive& Ar);

    char Pad04[0x3C];
    bool Unknown40;
    char Pad41[0x3];
    int Unknown44;
    int Unknown48;
    char Unknown4C[0xC];
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
};

// FUNCTION: 0x10BEE900 ?FUN_10bee900@State_PatrolLook@@UAEXAAVFArchive@@@Z
void State_PatrolLook::FUN_10bee900(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown40, 1);
    Ar.Serialize(&Unknown44, 4);
    Ar.Serialize(&Unknown48, 4);
    FUN_10b052a0(Ar, &Unknown4C);
    Ar.Serialize(&Unknown58, 4);
    Ar.Serialize(&Unknown5C, 4);
    FUN_10c11ff0(Ar, &Unknown60);
    Ar.Serialize(&Unknown64, 4);
    FUN_10b232e0(&Ar, &Unknown68);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown6C);
}
