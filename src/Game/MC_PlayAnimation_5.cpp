// Game/MC_PlayAnimation_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10C271A0.h"

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

void* FUN_10b232e0(void* A, void* B);

class MC_PlayAnimation : public Class_10C271A0
{
public:
    virtual void FUN_10c2e9a0(FArchive& Ar);

    char Unknown04[0x48];
    char Unknown4C;
    char Unknown4D[3];
    int Unknown50;
    char Unknown54;
    char Unknown55[3];
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    char Unknown64[4];
};

// FUNCTION: 0x10C2E9A0 ?FUN_10c2e9a0@MC_PlayAnimation@@UAEXAAVFArchive@@@Z
void MC_PlayAnimation::FUN_10c2e9a0(FArchive& Ar)
{
    FUN_10c271a0(Ar);
    Ar.Serialize(&Unknown4C, 1);
    FUN_10c11ff0(Ar, &Unknown50);
    Ar.Serialize(&Unknown54, 1);
    BYTE Flag = Unknown58;
    Ar.Serialize(&Flag, 1);
    if (Ar.ArIsLoading)
        Unknown58 = Flag;
    Ar.Serialize(&Unknown5C, 4);
    Ar.Serialize(&Unknown60, 4);
    FUN_10b232e0(&Ar, &Unknown64);
}
