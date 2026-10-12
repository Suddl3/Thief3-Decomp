// Game/Unsorted_10A52470.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A52EE0.h"

// FUNCTION: 0x10A52EE0 ?GetItem@Class_10A52EE0@@QAEHH@Z
int Class_10A52EE0::GetItem(int Index)
{
    if (Index >= 0 && Index < m_Count)
        return m_Items[Index];
    return 0;
}
