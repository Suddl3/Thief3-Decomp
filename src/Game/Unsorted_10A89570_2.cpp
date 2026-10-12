// Game/Unsorted_10A89570_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6C5D0.h"
#include "Game/cTriggerSoundSchemaParam.h"

extern int DAT_10f3a1dc;

extern int DAT_10f3a1e0;

// FUNCTION: 0x10A8A550 ?FUN_10a8a550@Class_10E6C5D0@@UAEXXZ
void Class_10E6C5D0::FUN_10a8a550()
{
    if (m_Next)
        m_Next->FUN_10a8a550();
}

// FUNCTION: 0x10A8AC00 ?IncrementCount@cTriggerSoundSchemaParam@@UAEXXZ
void cTriggerSoundSchemaParam::IncrementCount()
{
    if (DAT_10f3a1dc < DAT_10f3a1e0)
        DAT_10f3a1dc++;
}
