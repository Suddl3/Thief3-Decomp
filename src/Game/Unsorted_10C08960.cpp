// Game/Unsorted_10C08960.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CA00.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10C08DE0.h"
#include "Game/Class_10BABED0.h"

class Class_10BAA6B0_Param;

class Class_10BAA8A0;

class Class_10BABED0;

class Class_10B9CA00;

class Class_10B9CAC0;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

class Class_10B9CAC0 : public Class_10B9CA00
{
};

class cIntArray
{
public:
    void SetCount(int NewCount);

    int FindIndex(int Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return i;
        }
        return -1;
    }

    void Append(int Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class cItemList
{
public:
    void AddUnique(int Item);

    char Unknown00[0x14];
    cIntArray m_ItemIds;
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
        m_ItemIds.Append(Item);
}
