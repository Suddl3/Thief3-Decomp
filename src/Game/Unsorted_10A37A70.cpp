// Game/Unsorted_10A37A70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090FD40.h"

class cString;

// FUNCTION: 0x10A39200 ?RemoveAt@Class_1090FD40@@QAEXH@Z
void Class_1090FD40::RemoveAt(int Index)
{
    if (Index != m_Count - 1)
        MoveItems(Index + 1, Index, m_Count - Index - 1);
    SetCount(m_Count - 1);
}
