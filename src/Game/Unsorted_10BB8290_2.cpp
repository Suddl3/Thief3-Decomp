// Game/Unsorted_10BB8290_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB8290.h"
#include "Game/Class_10C7D570.h"

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB8290 ?FUN_10bb8290@Class_10BB8290@@QAE_NXZ
bool Class_10BB8290::FUN_10bb8290()
{
    if (Unknown284 == 0)
        return false;
    return GetBoneAimController()->FUN_10a2c500(Unknown08->FUN_10c7d570(), &Unknown284);
}
