// Game/Unsorted_10BB8290_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cBoneAimController.h"
#include "Game/Class_10BB82C0.h"
#include "Game/Class_10C7D570.h"

cBoneAimController* GetBoneAimController();

// FUNCTION: 0x10BB82C0 ?IsAngleBelow@Class_10BB82C0@@QAE_NH@Z
bool Class_10BB82C0::IsAngleBelow(int A)
{
    if (m_Entry)
        return GetBoneAimController()->IsAngleBelow(m_Owner->FUN_10c7d570(), &m_Entry, A);
    return false;
}
