// Game/Class_10E89720_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/cDoorState.h"

extern char DAT_10f05b98[][32];

// FUNCTION: 0x10B8ECA0 ?GetStateName@cDoorState@@UAE?AVcString@@XZ
cString cDoorState::GetStateName()
{
    return cString(DAT_10f05b98[m_StateIndex]);
}
