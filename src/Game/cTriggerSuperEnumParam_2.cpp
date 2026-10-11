// Game/cTriggerSuperEnumParam_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cTriggerSuperEnumParam.h"
#include "Game/Class_10E6C740_Member.h"

extern int DAT_10f3a1f4;

// FUNCTION: 0x10A8C990 ?AdvanceCursor@cTriggerSuperEnumParam@@UAEXXZ
void cTriggerSuperEnumParam::AdvanceCursor()
{
    if (m_SuperEnum && DAT_10f3a1f4 <= m_SuperEnum->Unknown38)
        DAT_10f3a1f4++;
}
