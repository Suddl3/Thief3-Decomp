// Game/State_MunchCorpse_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/FArchive.h"

class Class_10E8BE68
{
public:
    virtual void FUN_10bca010(FArchive& Ar);
};

extern Class_10FF667C* DAT_10ff667c;

class State_MunchCorpse : public Class_10E8BE68
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
    virtual void FUN_10bdf930(FArchive& Ar);

    char Unknown04[0x3C];
    int Unknown40;
    int Unknown44;
    int Unknown48;
    int Unknown4C;
};

// FUNCTION: 0x10BDF930 ?FUN_10bdf930@State_MunchCorpse@@UAEXAAVFArchive@@@Z
void State_MunchCorpse::FUN_10bdf930(FArchive& Ar)
{
    Class_10E8BE68::FUN_10bca010(Ar);
    if (Ar.Unknown0C >= 0x37)
    {
        Ar.Serialize(&Unknown40, 4);
        Ar.Serialize(&Unknown44, 4);
    }
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown48);
    Ar.Serialize(&Unknown4C, 4);
}
