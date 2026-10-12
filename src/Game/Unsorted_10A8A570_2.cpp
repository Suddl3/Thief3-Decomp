// Game/Unsorted_10A8A570_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C5D0.h"
#include "Game/cTriggerSoundSchemaParam.h"

// FUNCTION: 0x10A8A570 ?FUN_10a8a570@Class_10E6C5D0@@UAEHXZ
int Class_10E6C5D0::FUN_10a8a570()
{
    if (!m_Next)
        return 1;
    return m_Next->FUN_10a8a570();
}

// FUNCTION: 0x10A8ABE0 ?IsRelated@cTriggerSoundSchemaParam@@UAEHHPAV1@@Z
int cTriggerSoundSchemaParam::IsRelated(int p1, cTriggerSoundSchemaParam* p2)
{
    switch (p1)
    {
    case 1:
    {
        bool Same = Unknown08 == p2->Unknown08;
        return Same;
    }
    default:
        return 0;
    }
}
