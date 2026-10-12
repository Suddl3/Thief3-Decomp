// Game/Unsorted_10A37A70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1090FD40.h"

class Class_109081E0;

// FUNCTION: 0x10A39200 ?RemoveAt@Class_1090FD40@@QAEXH@Z
void Class_1090FD40::RemoveAt(int Index)
{
    if (Index != m_Count - 1)
        FUN_10a37f80(Index + 1, Index, m_Count - Index - 1);
    FUN_1090f2c0(m_Count - 1);
}
