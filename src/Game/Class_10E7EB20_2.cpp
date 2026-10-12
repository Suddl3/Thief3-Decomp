// Game/Class_10E7EB20_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B3AE70.h"
#include "Game/Class_10E7EB20.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned bInBowDraw : 1;
    unsigned isCrouching : 1;
};

// FUNCTION: 0x10B4F430 ?FUN_10b4f430@Class_10E7EB20@@UAEXPAVAGarrett@@@Z
void Class_10E7EB20::FUN_10b4f430(AGarrett* Garrett)
{
    if (Garrett->isCrouching)
        ((Class_10B39530*)GetLinkedObject())->Play(0xaf, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B39530*)GetLinkedObject())->Play(0xa9, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ForceBody(Garrett);
    FUN_10b3b400(Garrett);
}
