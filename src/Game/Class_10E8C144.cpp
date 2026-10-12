// Game/Class_10E8C144.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C49740.h"
#include "Game/Class_10E8C144.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Group_10BA14C0.h"

struct Item_10BA14C0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10BA14C0 ?FindItem@Class_10E8C144@@UAEPAUItem_10BA14C0@@HHH@Z
Item_10BA14C0* Class_10E8C144::FindItem(int Key, int Index, int Group)
{
    Entry_10C32C30* Entry = 0;
    m_Entries.FUN_10c49740(&Key, &Entry);
    if (Entry && Group < Entry->Count)
    {
        Group_10BA14C0* G = &Entry->Data[Group];
        if (Index < G->Count)
            return &G->Data[Index];
    }
    return 0;
}
