// Game/Unsorted_10B8C7B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8C7B0.h"
#include "Game/Class_10B8C9B0.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10B8DC70.h"
#include "Game/cIntArray.h"

struct Struct_10D9E5E0_Param;

Class_10D9B090* FUN_10d9dcb0();

struct Struct_10B8C9B0
{
    char Unknown00[0x30];
    int Unknown30;
};

// FUNCTION: 0x10B8C9B0 ?FindItem@Class_10B8C9B0@@QAEPAUStruct_10B8C9B0@@H@Z
Struct_10B8C9B0* Class_10B8C9B0::FindItem(int Value)
{
    for (int i = 0; i < m_Count; i++)
    {
        if (Value == m_Items[i]->Unknown30)
            return m_Items[i];
    }
    return 0;
}

// FUNCTION: 0x10B8CC60 ?ExitSingleMode@Class_10B8C7B0@@QAEXXZ
void Class_10B8C7B0::ExitSingleMode()
{
    if (m_SingleMode)
    {
        FUN_10d9dcb0()->FUN_10d9e5e0(m_Single);
        m_SingleMode = false;
        Refresh();
    }
}

// FUNCTION: 0x10B8DC70 ?AddItem@Class_10B8DC70@@QAEXH@Z
void Class_10B8DC70::AddItem(int Item)
{
    if (Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }
}
