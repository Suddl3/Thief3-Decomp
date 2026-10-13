// Game/Class_10E98E28.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FArchive.h"
#include "Game/Class_10E98D08.h"

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

class Class_10E98E28 : public Class_10E98D08
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
    virtual void Serialize(FArchive& Ar);

    char Unknown04[0x44];
    FVector Unknown48;
    float Unknown54;
    int Unknown58;
};

// FUNCTION: 0x10C1B400 ?Serialize@Class_10E98E28@@UAEXAAVFArchive@@@Z
void Class_10E98E28::Serialize(FArchive& Ar)
{
    FUN_10c1b1a0(Ar);
    FUN_10b052a0(Ar, &Unknown48);
    Ar.Serialize(&Unknown54, 4);
    BYTE Flag = Unknown58;
    Ar.Serialize(&Flag, 1);
    if (Ar.Unknown14)
        Unknown58 = Flag;
}
