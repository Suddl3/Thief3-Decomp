// Game/Unsorted_10C08960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CA00.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10C08DE0.h"
#include "Game/Class_10BABED0.h"
#include "Game/cItemList.h"

class Class_10BAA6B0_Param;

class Class_10BAA8A0;

class Class_10BABED0;

class Class_10B9CA00;

class Class_10B9CAC0;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

class Class_10B9CAC0 : public Class_10B9CA00
{
};

// FUNCTION: 0x10C08DE0 ?FUN_10c08de0@Class_10C08DE0@@QAEXXZ
void Class_10C08DE0::FUN_10c08de0()
{
    Unknown20 = true;
    for (int i = 0; i < m_Count; i++)
    {
        Class_10BAA6B0_Param* Param = m_Params[i];
        if (Param)
        {
            Class_10BABED0* A = FUN_10baa6b0(Param);
            if (A)
            {
                Class_10B9CAC0* B = A->FUN_10baa750();
                if (B)
                    B->FUN_10b9ca00();
            }
        }
    }
    FUN_10c08d60();
}

// FUNCTION: 0x10C08E30 ?AddUnique@cItemList@@QAEXH@Z
void cItemList::AddUnique(int Item)
{
    if (m_ItemIds.FindIndex(Item) == -1)
    {
        // The game's cIntArray::Append is inlined at this call site.
        cIntArray& Array = m_ItemIds;
        int Index = Array.Unknown00;
        Array.SetCount(Index + 1);
        Array.Unknown08[Index] = Item;
    }
}
