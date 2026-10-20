// Game/Unsorted_10A14E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090FD40.h"

class cString;

Class_10905A90_Member* GetAllocator();

// The element of the array: four bytes, then the cString array it owns.
class Element_10A15060
{
public:
    int Unknown00;
    Class_1090FD40 m_Items;

    void Init() { m_Items.m_Count = 0; m_Items.m_CapacityBytes = 0; m_Items.m_Items = 0; }
};

// Class_10A151A0 copied from include/Game/Class_10A151A0.h with the element type named.
class Class_10A151A0
{
public:
    void FUN_10a15060(int Count);
    void Free();

    int Unknown00;
    int Unknown04;
    Element_10A15060* Unknown08;
};

// FUNCTION: 0x10A15060 ?FUN_10a15060@Class_10A151A0@@QAEXH@Z
void Class_10A151A0::FUN_10a15060(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Element_10A15060);
    for (int i = NewCount; i < OldCount; i++)
        Unknown08[i].m_Items.Empty();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Element_10A15060* Block = (Element_10A15060*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Element_10A15060), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Element_10A15060);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            Element_10A15060* Block = (Element_10A15060*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Element_10A15060), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Element_10A15060);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Element_10A15060* E = &Unknown08[j];
        if (E)
            E->Init();
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
