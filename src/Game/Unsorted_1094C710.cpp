// Game/Unsorted_1094C710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1094D6E0.h"

class cIntArray
{
public:
    void SetCount(int NewCount);

    void AddUnique(int Item)
    {
        int Count = Unknown00;
        for (int i = 0; i < Count; i++)
        {
            if (Unknown08[i] == Item)
                return;
        }
        SetCount(Count + 1);
        Unknown08[Count] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_1094CFD0
{
public:
    void AddUniqueItem(int Item);

    char Unknown00[0x12C];
    cIntArray m_Items;
};

// FUNCTION: 0x1094CFD0 ?AddUniqueItem@Class_1094CFD0@@QAEXH@Z
void Class_1094CFD0::AddUniqueItem(int Item)
{
    m_Items.AddUnique(Item);
}

// FUNCTION: 0x1094D6E0 ?Init@Class_1094D6E0@@QAEPAV1@XZ
Class_1094D6E0* Class_1094D6E0::Init()
{
    Unknown04 = 0;
    Unknown00 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    return this;
}
