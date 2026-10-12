// Game/Unsorted_10951540.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10939570.h"
#include "Game/Class_109514C0.h"
#include "Game/Class_109516C0.h"
#include "Game/Class_109516C0_Entry.h"
#include "Game/Class_10951900.h"
#include "Game/Class_10951A40.h"
#include "Game/Struct_10951A40.h"

class Class_10953590;

extern Class_10939570* DAT_10f323fc;

// FUNCTION: 0x10951660 ?Reset@Class_10951900@@QAEXXZ
void Class_10951900::Reset()
{
    if (m_Mode == 1 && Unknown18 == 0x3f800000)
        m_Flags &= ~0x400;
    m_Mode = 0;
    if (Unknown24)
    {
        Unknown24->ReleaseAll();
        delete Unknown24;
        Unknown24 = 0;
    }
    if (m_Handle)
    {
        DAT_10f323fc->FUN_1093bce0(m_Handle);
        m_Handle = 0;
    }
}

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

// FUNCTION: 0x10951A40 ?SetFilter@Class_10951A40@@QAEXPBUStruct_10951A40@@@Z
void Class_10951A40::SetFilter(const Struct_10951A40* In)
{
    m_Filter = *In;
    RemoveMatching();
}
