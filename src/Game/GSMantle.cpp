// Game/GSMantle.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/GSMantle.h"
#include "Core/Core.h"
#include "Game/Class_10B25200.h"
#include "Game/Class_10B3AE70.h"
#include "Game/Class_10E7E538.h"
#include "Game/Struct_10B53A00.h"
#include "Game/Class_10B3B220_Unknown0B0.h"
#include "Game/Class_10B3B220_Item.h"

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

// FUNCTION: 0x10B3AE50 ?ForceArms@GSMantle@@QAEXPAVAGarrett@@@Z
void GSMantle::ForceArms(AGarrett* Garrett)
{
    Garrett->ArmUse = EAU_FORCED_ARMS;
    GetSelection()->SetJunkState();
}

// FUNCTION: 0x10B3B260 ?ReleaseItem@GSMantle@@QAEXPAUStruct_10B53A00@@@Z
void GSMantle::ReleaseItem(Struct_10B53A00* P)
{
    Class_10B3B220_Item* Item = P->Unknown0B0->Virtual6();
    Item->Virtual19(0);
    if (!Item->Unknown104)
        P->Unknown450 &= ~2;
}
