// Game/Unsorted_10AC99F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC99F0.h"

// FUNCTION: 0x10AC99F0 ?RemoveValue@Class_10AC99F0@@QAEXH@Z
void Class_10AC99F0::RemoveValue(int A)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Entries[i] == A)
            m_Entries[i] = 0;
    }
}
