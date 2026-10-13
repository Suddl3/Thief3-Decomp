// Game/Class_1091B3F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x14 bytes; the loops clear its first two words and call its destructor.
class Class_1091A590
{
public:
    ~Class_1091A590();

    int Unknown00;
    int Unknown04;
    char Unknown08[0xc];
};

// Copied from include/Game/Class_1091B3F0.h; Items holds the Class_1091A590 that the element destructor calls name.
class Class_1091B3F0
{
public:
    void SetCount(int A);
    void Free();
    void CopyFrom(const Class_1091B3F0& Other);

    int Count;
    int m_Capacity;
    Class_1091A590* Items;
};

// FUNCTION: 0x1091AF10 ?SetCount@Class_1091B3F0@@QAEXH@Z
void Class_1091B3F0::SetCount(int NewCount)
{
    int OldCount = Count;
    int Capacity = !Items ? 0 : m_Capacity / sizeof(Class_1091A590);
    for (int i = NewCount; i < OldCount; i++)
        Items[i].~Class_1091A590();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Items = (Class_1091A590*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(Class_1091A590), 0, 0, 0, 0);
        m_Capacity = NewCapacity * sizeof(Class_1091A590);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Items);
            Items = 0;
            m_Capacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Items = (Class_1091A590*)GetAllocator()->Virtual3(Items, NewCapacity * sizeof(Class_1091A590), 0, 0, 0, 0);
            m_Capacity = NewCapacity * sizeof(Class_1091A590);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1091A590* Element = (Class_1091A590*)((char*)Items + j * sizeof(Class_1091A590));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    Count = NewCount;
}
