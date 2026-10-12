// Game/Unsorted_10BD09D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10BD1320.h"
#include "Game/Class_10E93138.h"
#include "Game/FArchive.h"
#include "Game/Item_10BD1320.h"

void* FUN_10b232e0(void* A, void* B);

// FUNCTION: 0x10BD10A0 ?Serialize@Class_10E93138@@UAEXAAVFArchive@@@Z
void Class_10E93138::Serialize(FArchive& Ar)
{
    FUN_10b232e0(&Ar, &Unknown04);
    Ar.Serialize(&Unknown08, 4);
    Ar.Serialize(&Unknown0C, 4);
}

// FUNCTION: 0x10BD1320 ?AddItem@Class_10BD1320@@QAEHPBUItem_10BD1320@@@Z
int Class_10BD1320::AddItem(const Item_10BD1320* Item)
{
    int Index = m_Count;
    FUN_10bd0410(Index + 1);
    Item_10BD1320* Dest = &m_Items[Index];
    Dest->Unknown04 = Item->Unknown04;
    Dest->Unknown08 = Item->Unknown08;
    Dest->Unknown0C = Item->Unknown0C;
    return Index;
}
