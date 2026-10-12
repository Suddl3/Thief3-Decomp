// Game/Unsorted_10A589C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A58B70.h"

// FUNCTION: 0x10A58B70 ?GetValueAt@Class_10A58B70@@QAEHH@Z
int Class_10A58B70::GetValueAt(int Index)
{
    if (Index >= m_Count)
        return -1;
    return m_Values[Index];
}
