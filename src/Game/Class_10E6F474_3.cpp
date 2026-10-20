// Game/Class_10E6F474_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6F474.h"

// cIntArray::Append, the out-of-line call the game's code makes here
inline void cIntArray::Append(int Item)
{
    int Index = Unknown00;
    SetCount(Index + 1);
    Unknown08[Index] = Item;
}

// FUNCTION: 0x10ABB720 ?AddUnique@Class_10E6F474@@QAEXH@Z
void Class_10E6F474::AddUnique(int Item)
{
    for (int i = 0; i < m_MembraneMaterials.Unknown00; i++)
    {
        if (Item == m_MembraneMaterials.Unknown08[i])
            return;
    }
    m_MembraneMaterials.Append(Item);
}
