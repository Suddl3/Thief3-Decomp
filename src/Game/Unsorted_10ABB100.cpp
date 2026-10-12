// Game/Unsorted_10ABB100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ABB580.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABB200.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x14 bytes; the loop stores its fields in this order.
class Class_10ABB100_Unknown08
{
public:
    int Unknown00;
    bool Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
};

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10ABB200_Unknown08
{
public:
    void* Unknown00;
    bool Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
};

// FUNCTION: 0x10ABB100 ?Resize@Class_10ABB580@@QAEXH@Z
void Class_10ABB580::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_AllocBytes / sizeof(Class_10ABB100_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10ABB100_Unknown08), 0, 0, 0, 0);
        m_AllocBytes = NewCapacity * sizeof(Class_10ABB100_Unknown08);
        m_Data = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_AllocBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10ABB100_Unknown08), 0, 0, 0, 0);
            m_AllocBytes = NewCapacity * sizeof(Class_10ABB100_Unknown08);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10ABB100_Unknown08* Element = (Class_10ABB100_Unknown08*)((char*)m_Data + j * sizeof(Class_10ABB100_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown10 = true;
            Element->Unknown04 = false;
            Element->Unknown08 = 0;
            Element->Unknown0C = 2;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x10ABB200 ?FUN_10abb200@Class_10ABB200@@QAEXHHH@Z
void Class_10ABB200::FUN_10abb200(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10ABB200_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10ABB200_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown10 = true;
                    Item->Unknown04 = false;
                    Item->Unknown08 = 0;
                    Item->Unknown0C = 2;
                }
            }
            return;
        }
        int Start = To + Count;
        int End = From + Count;
        if (Start < End)
        {
            for (int I = Start; I < End; I++)
            {
                Class_10ABB200_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown10 = true;
                    Item->Unknown04 = false;
                    Item->Unknown08 = 0;
                    Item->Unknown0C = 2;
                }
            }
        }
    }
}
