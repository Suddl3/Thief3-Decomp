// Game/cTriggerSuperEnumParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerSuperEnumParam.h"
#include "Game/Class_10E6C740_Member.h"

// FUNCTION: 0x10A8C950 ?TestRelation@cTriggerSuperEnumParam@@UAEHHPBV1@@Z
int cTriggerSuperEnumParam::TestRelation(int A, const cTriggerSuperEnumParam* B)
{
    switch (A)
    {
    case 1:
        return (m_SuperEnum && (m_Value == m_SuperEnum->Unknown38 || B->m_Value == m_SuperEnum->Unknown38))
            || B->m_Value == m_Value;
    }
    return 0;
}
