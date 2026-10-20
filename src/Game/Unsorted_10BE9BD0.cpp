// Game/Unsorted_10BE9BD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10FF667C.h"
#include "Game/Class_10FF667C_Unknown18.h"
#include "Game/Class_10E96FD0.h"
#include "Game/FArchive.h"

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

extern Class_10FF667C* DAT_10ff667c;

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
};

class State_Flee : public cTacticMoveToPoint
{
public:
    virtual void FUN_10bec730(int A, int B, int C, int D, int E);

    void FUN_10bebc70();

    char Unknown04[0x60];
    bool Unknown64;
};

// FUNCTION: 0x10BE9D00 ?Serialize@Class_10E96FD0@@UAEXAAVFArchive@@@Z
void Class_10E96FD0::Serialize(FArchive& Ar)
{
    ((Class_10E8BE68*)this)->Class_10E8BE68::Serialize(Ar);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown40);
    Ar.Serialize(&Unknown44, 4);
}

// FUNCTION: 0x10BEC730 ?FUN_10bec730@State_Flee@@UAEXHHHHH@Z
void State_Flee::FUN_10bec730(int A, int B, int C, int D, int E)
{
    cTacticMoveToPoint::FUN_10bcac50(A, B, C, D, E);
    if (!Unknown64)
        FUN_10bebc70();
}
