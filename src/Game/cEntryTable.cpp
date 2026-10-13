// Game/cEntryTable.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cEntryTable.h"
#include "Game/Struct_10C0BFC0.h"
#include "Core/Core.h"
#include "Game/Class_10C0C150.h"
#include "Game/Class_10C0C8E0.h"
#include "Game/Item_10C0C150.h"

double GetTimeSeconds();

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

// FUNCTION: 0x10C0C090 ?UpdatePosition@cEntryTable@@QAEXHHPAVFVector@@H@Z
void cEntryTable::UpdatePosition(int A, int B, FVector* Pos, int D)
{
    Struct_10C0BFC0* Obj = FindEntry(A, B);
    Obj->Unknown5C = GetTimeSeconds();
    Obj->Unknown38 = *Pos;
}
