// Game/Unsorted_10A67ED0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Item_10943600.h"
#include "Game/Class_10943600.h"
#include "Game/Class_10A680C0.h"
#include "Game/Class_10A68020.h"

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

class Class_10A68100
{
public:
    void AddUnique(int Item);

    char Unknown00[0x10];
    cIntArray m_Items;
};

Class_10905A90_Member* GetAllocator();

// FUNCTION: 0x10A68020 ?SetCount@Class_10A68020@@QAEXH@Z
void Class_10A68020::SetCount(int NewCount)
{
    int Capacity = !m_Data ? 0 : Unknown04 >> 4;
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~1023) + 1024;
        m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity * 16, 0, 0, 0, 0);
        Unknown04 = NewCapacity * 16;
    }
    else if (NewCount <= Capacity - 1024)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~1023) + 1024;
            m_Data = (char*)GetAllocator()->Virtual3(m_Data, NewCapacity * 16, 0, 0, 0, 0);
            Unknown04 = NewCapacity * 16;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10A680C0 ?Empty@Class_10A680C0@@QAEXXZ
void Class_10A680C0::Empty()
{
    Unknown08.Empty();
}

// FUNCTION: 0x10A68100 ?AddUnique@Class_10A68100@@QAEXH@Z
void Class_10A68100::AddUnique(int Item)
{
    if (m_Items.FindIndex(Item) == -1)
        m_Items.Append(Item);
}
