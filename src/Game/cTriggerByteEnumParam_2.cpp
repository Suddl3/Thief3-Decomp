// Game/cTriggerByteEnumParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerByteEnumParam.h"
#include "Game/Struct_10A8C2B0_Inner.h"
#include "Game/Struct_10A8C2B0_Outer.h"

extern int DAT_10f3a1f0;

// FUNCTION: 0x10A8C2B0 ?FirstValue@cTriggerByteEnumParam@@UAEXXZ
void cTriggerByteEnumParam::FirstValue()
{
    DAT_10f3a1f0 = 0;
    if (Unknown04 && Unknown04->Unknown60)
    {
        while (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
        {
            if (Unknown04->Unknown60->Unknown34[DAT_10f3a1f0] != 0)
                break;
            DAT_10f3a1f0++;
        }
    }
}
