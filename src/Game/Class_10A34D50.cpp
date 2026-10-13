// Game/Class_10A34D50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A34D50.h"
#include "Game/Class_10EB7660.h"
#include "Game/Entry_10A34D50.h"

// FUNCTION: 0x10A34D50 ?Append@Class_10A34D50@@QAEHABUEntry_10A34D50@@@Z
int Class_10A34D50::Append(const Entry_10A34D50& Item)
{
    int Index = m_Count;
    Resize(Index + 1);
    m_Items[Index] = Item;
    return Index;
}
