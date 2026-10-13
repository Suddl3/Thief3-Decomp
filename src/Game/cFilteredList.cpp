// Game/cFilteredList.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10939570.h"
#include "Game/cFilteredList.h"
#include "Game/Struct_One2.h"
#include "Game/Struct_One4.h"
#include "Game/Struct_Pair0.h"
#include "Game/Struct_Zero4.h"
#include "Game/Struct_Zero5.h"
#include "Game/Class_10E4AC6C.h"
#include "Game/Class_109514C0.h"
#include "Game/Class_109516C0.h"
#include "Game/Class_109516C0_Entry.h"
#include "Game/Class_10951900.h"
#include "Game/Struct_10951A40.h"

class Class_10951540
{
public:
    bool MatchesFilter(void* A);
};

// FUNCTION: 0x109516E0 ?RemoveMatching@cFilteredList@@QAEXXZ
void cFilteredList::RemoveMatching()
{
    for (int i = 0; i < m_Count; i++)
    {
        Class_10951540* Item = m_Items[i];
        if (Item->MatchesFilter(&m_Filter))
        {
            delete Item;
            m_Items[i] = 0;
        }
    }
}

// FUNCTION: 0x10951A40 ?SetFilter@cFilteredList@@QAEXPBUStruct_10951A40@@@Z
void cFilteredList::SetFilter(const Struct_10951A40* In)
{
    m_Filter = *In;
    RemoveMatching();
}
