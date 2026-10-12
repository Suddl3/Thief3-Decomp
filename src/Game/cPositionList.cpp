// Game/cPositionList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cPositionList.h"
#include "Game/Struct_10C39220.h"

// FUNCTION: 0x10C39220 ?GetCurrent@cPositionList@@QAE_NH@Z
bool cPositionList::GetCurrent(int A)
{
    Struct_10C39220* Out = (Struct_10C39220*)A;
    if (m_Index >= m_Count)
        return false;
    if (m_Mode == 1 || m_Mode == 7)
        *Out = m_FixedEntry;
    else
        *Out = m_Entries[m_Index];
    return true;
}
