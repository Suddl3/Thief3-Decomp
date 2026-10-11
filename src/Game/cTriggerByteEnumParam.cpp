// Game/cTriggerByteEnumParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerByteEnumParam.h"

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
