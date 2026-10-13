// Game/Unsorted_1090FFA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/Class_10905A90_Member.h"
#include "Game/cString.h"
#include "Game/Class_1090FD40.h"

class cString;

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x1090FFA0 ?AddUnique@Class_1090FD40@@QAEHABVcString@@@Z
int Class_1090FD40::AddUnique(const cString& Item)
{
    int Count = m_Count;
    for (int i = 0; i < Count; i++)
    {
        if (strcmp(*m_Items[i], *Item) == 0)
            return i;
    }
    SetCount(Count + 1);
    m_Items[Count] = Item;
    return Count;
}
