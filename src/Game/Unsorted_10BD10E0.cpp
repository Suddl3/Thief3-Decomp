// Game/Unsorted_10BD10E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10E9313C.h"

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[0x08];
    int ArVer;
    int Unknown10;
    int ArIsLoading;
};

void FUN_10c11ff0(FArchive& Ar, int* Value);

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

void* FUN_10b232e0(void* A, void* B);

class Object_10BFBD00
{
public:
    virtual void Virtual0();
    virtual void Virtual1(FArchive& Ar, void* Value);
};

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BD1240 ?FUN_10bd1240@Class_10E9313C@@UAEXAAVFArchive@@@Z
void Class_10E9313C::FUN_10bd1240(FArchive& Ar)
{
    FUN_10c11ff0(Ar, &Unknown04);
    Unknown08.FUN_10c01ff0(&Ar);
    FUN_10b052a0(Ar, &Unknown10);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown1C);
    BYTE Flag = Unknown20;
    Ar.Serialize(&Flag, 1);
    if (Ar.ArIsLoading)
        Unknown20 = Flag;
    Ar.Serialize(&Unknown24, 4);
    BYTE Flag2 = Unknown28;
    Ar.Serialize(&Flag2, 1);
    if (Ar.ArIsLoading)
        Unknown28 = Flag2;
    Ar.Serialize(&Unknown2C, 4);
    Ar.Serialize(&Unknown30, 1);
    FUN_10b232e0(&Ar, &Unknown34);
    if (Ar.ArVer >= 0x65)
        Ar.Serialize(&Unknown38, 1);
}
