// Game/Class_10E89720_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_10E89720.h"

extern char DAT_10f05b98[][32];

// FUNCTION: 0x10B8ECA0 ?GetStateName@Class_10E89720@@UAE?AVClass_109081E0@@XZ
Class_109081E0 Class_10E89720::GetStateName()
{
    return Class_109081E0(DAT_10f05b98[m_StateIndex]);
}
