// Game/cDoorState_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cDoorState.h"

extern int DAT_10ff6600;

// FUNCTION: 0x10B8EC30 ?IsAtEnd@cDoorState@@UAE_NXZ
bool cDoorState::IsAtEnd()
{
    return DAT_10ff6600 >= 4;
}
