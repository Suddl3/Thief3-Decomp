// Game/Unsorted_1090EED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109081E0.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_1090FF70.h"

// FUNCTION: 0x1090FD40 ?FUN_1090fd40@Class_1090FD40@@QAEHABVClass_109081E0@@@Z
int Class_1090FD40::FUN_1090fd40(const Class_109081E0& Item)
{
    int Index = Unknown00;
    FUN_1090f2c0(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}

// FUNCTION: 0x1090FF70 ?FUN_1090ff70@Class_1090FF70@@QAEXXZ
void Class_1090FF70::FUN_1090ff70()
{
    FUN_1090fc80(0x40);
    ::operator delete(m_Table);
    m_Count = 0;
    m_Size = 0;
    m_Table = 0;
    m_Collisions = 0;
}
