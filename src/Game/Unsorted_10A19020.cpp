// Game/Unsorted_10A19020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A19330.h"
#include "Game/cIntArray.h"

// FUNCTION: 0x10A19330 ?RemoveItem@Class_10A19330@@QAEXHH@Z
void Class_10A19330::RemoveItem(int Item, int Which)
{
    int Index = m_Lists[Which].FindIndex(Item);
    if (Index != -1)
        m_Lists[Which].RemoveAt(Index);
}
