// Game/cTriggerOperatorParam_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerOperatorParam.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

extern Class_1090A780 DAT_10f3a1f8[];

extern const char DAT_10e6c7ec[];

// FUNCTION: 0x10A8D490 ?GetText@cTriggerOperatorParam@@UAE?AVcString@@XZ
cString cTriggerOperatorParam::GetText()
{
    if (Unknown04 >= 0 && Unknown04 < 4)
        return cString(DAT_10f3a1f8[Unknown04]);
    return cString(DAT_10e6c7ec);
}
