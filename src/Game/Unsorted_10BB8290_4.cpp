// Game/Unsorted_10BB8290_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB8300.h"
#include "Game/Class_10C7D570.h"

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB8300 ?ClearEntry@Class_10BB8300@@QAEXXZ
void Class_10BB8300::ClearEntry()
{
    if (m_Entry)
    {
        GetBoneAimController()->FUN_10a2c2a0(m_Owner->FUN_10c7d570(), &m_Entry);
        m_Entry = 0;
    }
}
