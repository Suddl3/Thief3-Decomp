// Game/Class_10C4EDA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10A56130.h"
#include "Game/Class_10C4EDA0.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Item_10A55380.h"
#include "Game/Class_1090C880.h"
#include "Game/cString.h"
#include "Game/Struct_10A55380.h"
#include "Game/Class_10C4E970.h"
#include "Game/Class_10C4F450.h"
#include "Game/Class_10C4F970.h"

Class_10905A90_Member* GetAllocator();

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10A550B0 ?Resize@Class_10C4EDA0@@QAEXH@Z
void Class_10C4EDA0::Resize(int NewCount)
{
    int Capacity = !m_Items ? 0 : m_Capacity / sizeof(Item_10A55380);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Items = (Item_10A55380*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10A55380), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Item_10A55380);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Items);
            m_Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Items = (Item_10A55380*)GetAllocator()->Virtual3(m_Items, NewCapacity * sizeof(Item_10A55380), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Item_10A55380);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10A55380 ?AddItem@Class_10C4EDA0@@QAEXABUStruct_10A55380@@@Z
void Class_10C4EDA0::AddItem(const Struct_10A55380& A)
{
    Item_10A55380 Item;
    Item.Unknown00 = A;
    if (A.Unknown08 != DAT_10eafbdc)
        Item.Unknown0C = DAT_10e49684 / A.Unknown08;
    else
        Item.Unknown0C = 0.0f;
    int Index = m_Count;
    Item.Unknown10 = Unknown14;
    Resize(Index + 1);
    m_Items[Index] = Item;
}

// FUNCTION: 0x10C4EDA0 ?Free@Class_10C4EDA0@@QAEXXZ
void Class_10C4EDA0::Free()
{
    Resize(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_Capacity = 0;
    }
}
