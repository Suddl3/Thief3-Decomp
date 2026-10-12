// Game/Unsorted_1090EED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_1090FF70.h"

// FUNCTION: 0x1090FD40 ?Add@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::Add(const cString& Item)
{
    int Index = m_Count;
    SetCount(Index + 1);
    m_Items[Index] = Item;
    return Index;
}

// FUNCTION: 0x1090FF70 ?Free@Class_1090FF70@@QAEXXZ
void Class_1090FF70::Free()
{
    Empty(0x40);
    ::operator delete(m_Table);
    m_Count = 0;
    m_Size = 0;
    m_Table = 0;
    m_Collisions = 0;
}
