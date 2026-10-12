// Game/GSLean.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A18FA0.h"
#include "Game/Class_10AC92E0.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

class Object_10A18FC0 : public Class_10A18FA0
{
};

Object_10A18FC0* FUN_10a18fc0();

class Class_10F3A3D8
{
public:
    char Unknown00[0x13C];
    Class_10AC92E0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class GSLean
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Enter(AGarrett* Garrett);

    void PlayLeanMotion(AGarrett* Garrett);
    FVector FUN_10b4f690(AGarrett* Garrett);

    char Unknown04[0xC];
    bool Unknown10;
    bool Unknown11;
    FVector Unknown14;
    FVector Unknown20;
    int Unknown2C;
};

// FUNCTION: 0x10B4F7B0 ?Enter@GSLean@@UAEXPAVAGarrett@@@Z
void GSLean::Enter(AGarrett* Garrett)
{
    Unknown2C = !FUN_10a18fc0()->FUN_10a18fa0(6);
    PlayLeanMotion(Garrett);
    Unknown20 = FUN_10b4f690(Garrett);
    Unknown14 = FVector(0.0f, 0.0f, 0.0f);
    Unknown10 = false;
    Unknown11 = false;
    if (!Garrett->bInBowDraw)
        DAT_10f3a3d8->Unknown13C->FUN_10ac92e0();
}
