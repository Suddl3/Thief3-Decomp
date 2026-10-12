// Game/Class_10E89720_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10E89720.h"

extern int DAT_10ff6600;

extern char DAT_10f05b98[][0x20];

// FUNCTION: 0x10B8ECD0 ?GetCurrentStateName@Class_10E89720@@UAE?AVcString@@XZ
cString Class_10E89720::GetCurrentStateName()
{
    return cString(DAT_10f05b98[DAT_10ff6600]);
}
