// Game/Unsorted_10A214C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

struct Item_10A21A60
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
    float Unknown0C;
};

class Class_10953AC0
{
public:
    void Resize(int A);
    void Free();
    void CopyFrom(const Class_10953AC0& Other);

    int m_Count;
    int m_Capacity;
    Item_10A21A60* m_Items;
};

class Class_10A21A60
{
public:
    int FindOrAddPlane(const Item_10A21A60* P);

    char Unknown00[0x1C];
    Class_10953AC0 m_Planes;
};

// FUNCTION: 0x10A21A60 ?FindOrAddPlane@Class_10A21A60@@QAEHPBUItem_10A21A60@@@Z
int Class_10A21A60::FindOrAddPlane(const Item_10A21A60* P)
{
    Item_10A21A60 Item;
    Item.Unknown00 = P->Unknown00;
    Item.Unknown04 = P->Unknown04;
    Item.Unknown08 = P->Unknown08;
    Item.Unknown0C = -P->Unknown0C;
    int Count = m_Planes.m_Count;
    Class_10953AC0* Array = &m_Planes;
    for (int i = 0; i < Count; i++)
    {
        Item_10A21A60* Entry = &m_Planes.m_Items[i];
        if (Item.Unknown08 * Entry->Unknown08 + Item.Unknown04 * Entry->Unknown04 + Item.Unknown00 * Entry->Unknown00 > 0.999 && fabs(Entry->Unknown0C - Item.Unknown0C) < 0.001)
            return i;
    }
    int Index = Array->m_Count;
    Array->Resize(Index + 1);
    Array->m_Items[Index] = Item;
    return Index;
}
