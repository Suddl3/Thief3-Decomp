// Game/cTriggerByteEnumParam_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerByteEnumParam.h"
#include "Game/Struct_10A8C2B0_Inner.h"
#include "Game/Struct_10A8C2B0_Outer.h"

extern int DAT_10f3a1f0;

// FUNCTION: 0x10A8C350 ?IsAtEnd@cTriggerByteEnumParam@@UAEHXZ
int cTriggerByteEnumParam::IsAtEnd()
{
    if (Unknown04 && Unknown04->Unknown60)
        return DAT_10f3a1f0 >= Unknown04->Unknown60->Unknown38;
    return DAT_10f3a1f0 >= 0xFF;
}
