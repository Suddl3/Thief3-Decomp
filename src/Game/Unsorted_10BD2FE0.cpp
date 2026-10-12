// Game/Unsorted_10BD2FE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BB8960.h"
#include "Game/Class_10bb8960_Result.h"
#include "Game/FArchive.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* V);

class Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);
};

class Class_10E935F0 : public Class_10E8BE68
{
public:
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x40];
    int Unknown44;
    float Unknown48[3];
};

class Class_10BF7F90 : public Class_10AA82D0
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class cTacticMoveToPoint : public Class_10BC4160
{
public:
    void PopState();
};

class Class_10E932A0 : public cTacticMoveToPoint
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10bd2fe0();

    Class_10BB8960* Unknown04;
    char Unknown08[0x38];
    bool Unknown40;
};

// FUNCTION: 0x10BD2FE0 ?FUN_10bd2fe0@Class_10E932A0@@UAEXXZ
void Class_10E932A0::FUN_10bd2fe0()
{
    if ((!FUN_10bc4160()->FUN_10aa82d0() && !Unknown40) || Unknown04->FUN_10bb8960()->Virtual82())
        PopState();
}

// FUNCTION: 0x10BD3090 ?Serialize@Class_10E935F0@@UAEXAAVFArchive@@@Z
void Class_10E935F0::Serialize(FArchive& Ar)
{
    Class_10E8BE68::Serialize(Ar);
    Ar.Serialize(&Unknown44, 4);
    FUN_10b052a0(Ar, Unknown48);
}
