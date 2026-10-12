// Game/Unsorted_10C38F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C39220.h"
#include "Game/Struct_10C39220.h"

// FUNCTION: 0x10C39220 ?GetCurrent@Class_10C39220@@QAE_NH@Z
bool Class_10C39220::GetCurrent(int A)
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
