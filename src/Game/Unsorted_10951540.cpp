// Game/Unsorted_10951540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10939570.h"
#include "Game/Class_109514C0.h"
#include "Game/Class_109516C0.h"
#include "Game/Class_109516C0_Entry.h"
#include "Game/Class_10951900.h"
#include "Game/cFilteredList.h"
#include "Game/Struct_10951A40.h"

// FUNCTION: 0x109516C0 ?GetEntry@Class_109516C0@@QAEPAUClass_109516C0_Entry@@H@Z
Class_109516C0_Entry* Class_109516C0::GetEntry(int Index)
{
    if (m_EntryCount > Index)
    {
        Class_109516C0_Entry* Entry = m_Entries[Index];
        if (Entry)
            return Entry;
    }
    return &m_DefaultEntry;
}
