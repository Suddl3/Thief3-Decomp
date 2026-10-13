// Game/cDoorState.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cDoorState.h"
#include "Game/cString.h"

extern int DAT_10ff6600;

extern char DAT_10f05b98[][32];

extern char DAT_10f05b98[][0x20];

// FUNCTION: 0x10B8EC10 ?Advance@cDoorState@@UAEXXZ
void cDoorState::Advance()
{
    if (DAT_10ff6600 < 4)
        DAT_10ff6600++;
}

// FUNCTION: 0x10B8EC30 ?IsAtEnd@cDoorState@@UAE_NXZ
bool cDoorState::IsAtEnd()
{
    return DAT_10ff6600 >= 4;
}

// FUNCTION: 0x10B8ECA0 ?GetStateName@cDoorState@@UAE?AVcString@@XZ
cString cDoorState::GetStateName()
{
    return cString(DAT_10f05b98[m_StateIndex]);
}

// FUNCTION: 0x10B8ECD0 ?GetCurrentStateName@cDoorState@@UAE?AVcString@@XZ
cString cDoorState::GetCurrentStateName()
{
    return cString(DAT_10f05b98[DAT_10ff6600]);
}
