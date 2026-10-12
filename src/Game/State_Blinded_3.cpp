// Game/State_Blinded_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB86B0.h"
#include "Game/Class_10C17360.h"
#include "Game/FArchive.h"
#include "Game/Struct_10BCBD10.h"

class Class_10E92230
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
    virtual void FUN_10bcbde0();

    Class_10BB86B0* Unknown04;
};

class cTacticMoveToPoint
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
    virtual void FUN_10bcac50(int A, int B, int C, int D, int E);

    void PopState();
    void FUN_10bcb850(FArchive& Ar);
};

class State_Blinded : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bcbd10(int A, int B, int C, int D, int E);
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

    Struct_10BCBD10* Unknown04;
    char Unknown08[0x54];
    bool Unknown5C;
    char Unknown5D[3];
    int Unknown60;
    int Unknown64;
};

// FUNCTION: 0x10BCBD10 ?FUN_10bcbd10@State_Blinded@@UAEXHHHHH@Z
void State_Blinded::FUN_10bcbd10(int A, int B, int C, int D, int E)
{
    cTacticMoveToPoint::FUN_10bcac50(A, B, C, D, E);
    if (D != 0x17)
    {
        Unknown04->UnknownAC.FUN_10c17360();
        Unknown5C = true;
        PopState();
    }
}

// FUNCTION: 0x10BCBDE0 ?FUN_10bcbde0@Class_10E92230@@UAEXXZ
void Class_10E92230::FUN_10bcbde0()
{
    Unknown04->FUN_10bb86b0(0.5f);
}
