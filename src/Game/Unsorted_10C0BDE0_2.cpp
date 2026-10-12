// Game/Unsorted_10C0BDE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cEntryTable.h"
#include "Game/Struct_10C0BFC0.h"

// FUNCTION: 0x10C0BFC0 ?FindEntry@cEntryTable@@QAEPAUStruct_10C0BFC0@@HH@Z
Struct_10C0BFC0* cEntryTable::FindEntry(int A, int B)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (m_Entries[i] && m_Entries[i]->Unknown30 == A && m_Entries[i]->Unknown2C == B)
            return m_Entries[i];
    }
    return 0;
}
