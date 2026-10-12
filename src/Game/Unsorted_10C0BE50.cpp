// Game/Unsorted_10C0BE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0BF20.h"

Class_10905A90_Member* GetAllocator();

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10C0BF20_Unknown08
{
public:
    void* Unknown00;
    char Unknown04[0x8];
};

// FUNCTION: 0x10C0BE50 ?Resize@Class_10C0C150@@QAEXH@Z
void Class_10C0C150::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Item_10C0C150);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Item_10C0C150*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Item_10C0C150);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Data = (Item_10C0C150*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Item_10C0C150), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Item_10C0C150);
        }
    }
    for (int i = OldCount; i < NewCount; i++)
    {
        Item_10C0C150* Element = m_Data + i;
        if (Element)
            Element->Unknown00 = 0;
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10C0BF20 ?MoveRange@Class_10C0BF20@@QAEXHHH@Z
void Class_10C0BF20::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(m_Data + To, m_Data + From, Count * sizeof(Class_10C0BF20_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10C0BF20_Unknown08* Item = m_Data + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Class_10C0BF20_Unknown08* Item = m_Data + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
    }
}
