// Game/Class_10E96810.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFD210.h"
#include "Game/Class_10DBD510.h"

double GetTimeSeconds();

struct Struct_10BE41B0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
    char Unknown0C[0x24];
    Class_10BFD210 Unknown30;
};

class Class_10E96810
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
    virtual void Virtual64();
    virtual float Virtual65();
    virtual void Virtual66();
    virtual void Virtual67();
    virtual void Virtual68();
    virtual void Virtual69();
    virtual void Virtual70();
    virtual void Virtual71();
    virtual void Virtual72();
    virtual void Virtual73();
    virtual void Virtual74();
    virtual void Virtual75();
    virtual bool FUN_10be41b0();

    Struct_10BE41B0* Unknown04;
    char Unknown08[4];
    float Unknown0C;
};

// FUNCTION: 0x10BE41B0 ?FUN_10be41b0@Class_10E96810@@UAE_NXZ
bool Class_10E96810::FUN_10be41b0()
{
    double V = Virtual65() + Unknown0C;
    if (GetTimeSeconds() < V)
        return false;
    Struct_10BE41B0* Owner = Unknown04;
    float L = Owner->Unknown30.FUN_10bfc3a0();
    float Y = Unknown04->Unknown08->FUN_10dbd510(0x40100577)->FUN_10bbdb40();
    if (Y > L)
        return true;
    return false;
}
