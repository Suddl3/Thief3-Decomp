// Game/Unsorted_10A89070_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerSoundSchemaParam.h"
#include "Game/cTriggerByteEnumParam.h"

extern int DAT_10f3a1dc;

extern int DAT_10f3a1e0;

// FUNCTION: 0x10A8AC20 ?IsLimitReached@cTriggerSoundSchemaParam@@UAE_NXZ
bool cTriggerSoundSchemaParam::IsLimitReached()
{
    return DAT_10f3a1dc >= DAT_10f3a1e0;
}

// FUNCTION: 0x10A8C1F0 ?HasIndex@cTriggerByteEnumParam@@UAE_NXZ
bool cTriggerByteEnumParam::HasIndex()
{
    return m_Index != -1;
}
