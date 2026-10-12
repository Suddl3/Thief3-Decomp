// Game/AGarrett_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10B255F0.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/FArchive.h"

class AGarrett;

class Class_10B1D600
{
public:
    void FUN_10b1d600(FArchive& Ar, AGarrett* Owner);
};

class Class_10AC91B0
{
public:
    void FUN_10ac91b0(FArchive& Ar);
};

extern Class_10F3A3D8* DAT_10f3a3d8;

Class_10B1B8A0* FUN_10b1b600();

Class_10B255F0* GetSelection();

class APawn
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

    char Unknown04[0xBC];
    Class_10B1D600* UnknownC0;
};

class APlayerPawn : public APawn
{
public:
    virtual void Serialize(FArchive& Ar);
};

class AGarrett : public APlayerPawn
{
public:
    virtual void Serialize(FArchive& Ar);
};

// FUNCTION: 0x10B21AD0 ?Serialize@AGarrett@@UAEXAAVFArchive@@@Z
void AGarrett::Serialize(FArchive& Ar)
{
    APlayerPawn::Serialize(Ar);
    if (Ar.Unknown0C >= 0x2C)
    {
        UnknownC0->FUN_10b1d600(Ar, this);
        FUN_10b1b600()->FUN_10b1a400(Ar);
        GetSelection()->FUN_10b24dd0(Ar);
        DAT_10f3a3d8->Unknown140->FUN_10ac91b0(Ar);
    }
}
