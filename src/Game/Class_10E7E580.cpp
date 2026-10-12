// Game/Class_10E7E580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10AC92E0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10E7E580.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

class Class_10F3A3D8
{
public:
    char Unknown00[0x13C];
    Class_10AC92E0* Unknown13C;
};

extern Class_10F3A3D8* DAT_10f3a3d8;

// FUNCTION: 0x10B49120 ?FUN_10b49120@Class_10E7E580@@UAEXPAVAGarrett@@@Z
void Class_10E7E580::FUN_10b49120(AGarrett* Garrett)
{
    if (Garrett->isCrouching)
        ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(1, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B39530*)GetLinkedObject())->FUN_10b39530(0, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    DAT_10f3a3d8->Unknown13C->FUN_10ac92e0();
}
