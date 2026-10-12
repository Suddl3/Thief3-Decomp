// Game/Unsorted_10AB8730_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB8E30.h"
#include "Game/cIntArray.h"

// FUNCTION: 0x10AB8E30 ?RemoveItem@Class_10AB8E30@@QAEXH@Z
void Class_10AB8E30::RemoveItem(int Item)
{
    int Index = m_Items.FindIndex(Item);
    if (Index != -1)
    {
        m_Items.RemoveAt(Index);
        m_Values.RemoveAt(Index);
        if (m_Values.Count > 0)
            m_Current = m_Values.Data[m_Values.Count - 1];
    }
}
