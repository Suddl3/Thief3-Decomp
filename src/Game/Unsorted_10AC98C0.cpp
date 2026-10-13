// Game/Unsorted_10AC98C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AC98B0.h"
#include "Game/Class_10AC99D0.h"

// FUNCTION: 0x10AC99D0 ?GetNext@Class_10AC99D0@@QAEHH@Z
int Class_10AC99D0::GetNext(int Index)
{
    if (Index + 1 < m_Count)
        return m_Entries[Index + 1];
    return 0;
}
