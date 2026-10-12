// Game/Class_10E7E6A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B25200.h"
#include "Game/Class_10E7E6A0.h"

enum EArmUse
{
    EAU_FREE,
    EAU_FORCED_BODY,
    EAU_FORCED_ARMS
};

class AGarrett
{
public:
    char Unknown00[0x54D];
    unsigned char ArmUse;
};

class Class_10B255F0 : public Class_10B25200
{
};

Class_10B255F0* GetSelection();

// FUNCTION: 0x10B3AE90 ?ReleaseArm@Class_10E7E6A0@@QAEXPAVAGarrett@@@Z
void Class_10E7E6A0::ReleaseArm(AGarrett* Garrett)
{
    Garrett->ArmUse = EAU_FREE;
    GetSelection()->FUN_10b24d90();
}
