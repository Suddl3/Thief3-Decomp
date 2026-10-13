// Game/cTriggerSuperEnumParam.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cTriggerSuperEnumParam.h"
#include "Game/Class_10E6C740_Member.h"

extern int DAT_10f3a1f4;

struct Struct_10A8C9B0
{
    char Unknown00[0x38];
    int Unknown38;
};

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

// FUNCTION: 0x10A8C990 ?AdvanceCursor@cTriggerSuperEnumParam@@UAEXXZ
void cTriggerSuperEnumParam::AdvanceCursor()
{
    if (m_SuperEnum && DAT_10f3a1f4 <= m_SuperEnum->Unknown38)
        DAT_10f3a1f4++;
}

// FUNCTION: 0x10A8C9B0 ?IsDone@cTriggerSuperEnumParam@@UAEHXZ
int cTriggerSuperEnumParam::IsDone()
{
    if (m_SuperEnum)
        return DAT_10f3a1f4 > m_SuperEnum->Unknown38;
    return 1;
}

// FUNCTION: 0x10A8CA90 ?CopyValueFrom@cTriggerSuperEnumParam@@UAEXPBV1@@Z
void cTriggerSuperEnumParam::CopyValueFrom(const cTriggerSuperEnumParam* p1)
{
    m_Value = p1->m_Value;
}
