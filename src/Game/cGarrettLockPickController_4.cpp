// Game/cGarrettLockPickController_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E3D0.h"
#include "Game/Class_10A3C2E0.h"
#include "Game/Class_10E7E6A0.h"
#include "Game/Struct_10AA3520.h"

class AGarrett;

extern Struct_10AA3520* DAT_10f35dec;

void DestroyLockPickWindowManager();

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
    unsigned CanDoItemSearch : 1;
    unsigned CanUseItems : 1;
    unsigned bUpdatePhysHeight : 1;
    char Unknown454[4];
    Class_1098E3D0* Unknown458;
};

class cGarrettLockPickController : public Class_10E7E6A0
{
public:
    virtual void Exit(AGarrett* Garrett);
};

// FUNCTION: 0x10B3F000 ?Exit@cGarrettLockPickController@@UAEXPAVAGarrett@@@Z
void cGarrettLockPickController::Exit(AGarrett* Garrett)
{
    DAT_10f35dec->Unknown94->Reset();
    FUN_10b3ed30(Garrett);
    ReleaseArm(Garrett);
    FUN_10b3adc0(Garrett);
    Garrett->CanUseItems = 1;
    {
        int Value = 0;
        Garrett->Unknown458->FUN_1098e3d0(0x8007cc, &Value);
    }
    DestroyLockPickWindowManager();
    ClearVelocity(Garrett);
}
