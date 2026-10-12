// Game/cDoorState.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cDoorState.h"

extern int DAT_10ff6600;

// FUNCTION: 0x10B8EC10 ?Advance@cDoorState@@UAEXXZ
void cDoorState::Advance()
{
    if (DAT_10ff6600 < 4)
        DAT_10ff6600++;
}
