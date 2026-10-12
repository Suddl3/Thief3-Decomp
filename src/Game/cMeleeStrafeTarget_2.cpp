// Game/cMeleeStrafeTarget_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFB8D0.h"
#include "Game/cMeleeStrafeTarget.h"

class Class_10FF667C
{
public:
    char Unknown00[0x28];
    Class_10BFB8D0* Unknown28;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BDB090 ?FUN_10bdb090@cMeleeStrafeTarget@@UAEXXZ
void cMeleeStrafeTarget::FUN_10bdb090()
{
    DAT_10ff667c->Unknown28->FUN_10bfb8d0(9);
}
