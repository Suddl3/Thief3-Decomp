// Game/Class_10E7E658_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B396A0.h"
#include "Game/Class_10F3A3D8.h"
#include "Game/cGarrettLockPickController.h"

class AActor;

class FVector
{
public:
    float X;
    float Y;
    float Z;
};

class AGarrett
{
public:
    void SetNoiseEnabled(int A);

    char Unknown00[0x2C];
    FVector Location;
    char Unknown38[0x2EC];
    AActor* ropeToMount;
    char Unknown328[0x128];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

class Class_10E7E6A0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();

    void ReleaseArm(AGarrett* Garrett);
    void ClearVelocity(AGarrett* Garrett);
};

class cRopeMotion : public Class_10E7E6A0
{
public:
    virtual void DismountRope(AGarrett* Garrett);
};

// FUNCTION: 0x10B494C0 ?DismountRope@cRopeMotion@@UAEXPAVAGarrett@@@Z
void cRopeMotion::DismountRope(AGarrett* Garrett)
{
    ReleaseArm(Garrett);
    ClearVelocity(Garrett);
    ((Class_10B396A0*)GetLinkedObject())->FUN_10b396a0();
    DAT_10f3a3d8->Unknown108->FUN_109e38b0((int)Garrett->ropeToMount, (int)&Garrett->Location);
    Garrett->bUpdatePhysHeight = 1;
    Garrett->SetNoiseEnabled(0);
}
