// Game/cTriggerByteEnumParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerByteEnumParam.h"
#include "Game/cTriggerSoundSchemaParam.h"
#include "Game/Struct_10A8C2B0_Inner.h"
#include "Game/Struct_10A8C2B0_Outer.h"

extern int DAT_10f3a1f0;

// FUNCTION: 0x10A8C1F0 ?HasIndex@cTriggerByteEnumParam@@UAE_NXZ
bool cTriggerByteEnumParam::HasIndex()
{
    return m_Index != -1;
}

// FUNCTION: 0x10A8C200 ?Compare@cTriggerByteEnumParam@@UAEHHPAV1@@Z
int cTriggerByteEnumParam::Compare(int p1, cTriggerByteEnumParam* p2)
{
    switch (p1)
    {
    case 1:
        return m_Index == p2->m_Index;
    case 6:
        return m_Index != p2->m_Index;
    case 2:
        return m_Index < p2->m_Index;
    case 3:
        return m_Index <= p2->m_Index;
    case 4:
        return m_Index > p2->m_Index;
    case 5:
        return m_Index >= p2->m_Index;
    }
    return 0;
}

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

// FUNCTION: 0x10A8C2F0 ?NextValue@cTriggerByteEnumParam@@UAEXXZ
void cTriggerByteEnumParam::NextValue()
{
    if (Unknown04 && Unknown04->Unknown60)
    {
        if (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
        {
            DAT_10f3a1f0++;
            while (DAT_10f3a1f0 < Unknown04->Unknown60->Unknown38)
            {
                if (Unknown04->Unknown60->Unknown34[DAT_10f3a1f0] != 0)
                    return;
                DAT_10f3a1f0++;
            }
        }
    }
    else if (DAT_10f3a1f0 < 0xff)
        DAT_10f3a1f0++;
}

// FUNCTION: 0x10A8C350 ?IsAtEnd@cTriggerByteEnumParam@@UAEHXZ
int cTriggerByteEnumParam::IsAtEnd()
{
    if (Unknown04 && Unknown04->Unknown60)
        return DAT_10f3a1f0 >= Unknown04->Unknown60->Unknown38;
    return DAT_10f3a1f0 >= 0xFF;
}

// FUNCTION: 0x10A8C410 ?CopyFrom@cTriggerByteEnumParam@@UAEXPAV1@@Z
void cTriggerByteEnumParam::CopyFrom(cTriggerByteEnumParam* p1)
{
    m_Index = p1->m_Index;
    m_Name = p1->m_Name;
}
