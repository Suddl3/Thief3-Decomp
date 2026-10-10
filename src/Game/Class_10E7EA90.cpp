// Game/Class_10E7EA90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10E7EA90.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

// FUNCTION: 0x10B4EAF0 ?FUN_10b4eaf0@Class_10E7EA90@@UAEXPAVAGarrett@@@Z
void Class_10E7EA90::FUN_10b4eaf0(AGarrett* Garrett)
{
    if (Garrett->isCrouching)
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0xaf, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
}
