// Game/Unsorted_10A243F0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

class Struct_10A4E1D0;

Class_10905A90_Member* GetAllocator();

struct Struct_10A243F0_Element
{
    int Unknown00;
    float Unknown04;
};

class Class_10A243F0
{
public:
    void Resize(int A);
    void Free();
    int FUN_10a4e1d0(Struct_10A4E1D0* A);

    int Unknown00;
    unsigned int m_BufferBytes;
    Struct_10A243F0_Element* m_Buffer;
};

// FUNCTION: 0x10A243F0 ?Resize@Class_10A243F0@@QAEXH@Z
void Class_10A243F0::Resize(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !m_Buffer ? 0 : m_BufferBytes / sizeof(Struct_10A243F0_Element);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Buffer = (Struct_10A243F0_Element*)GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A243F0_Element), 0, 0, 0, 0);
        m_BufferBytes = NewCapacity * sizeof(Struct_10A243F0_Element);
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            m_BufferBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            m_Buffer = (Struct_10A243F0_Element*)GetAllocator()->Virtual3(m_Buffer, NewCapacity * sizeof(Struct_10A243F0_Element), 0, 0, 0, 0);
            m_BufferBytes = NewCapacity * sizeof(Struct_10A243F0_Element);
        }
    }
    int Index = OldCount;
    if (NewCount - OldCount >= 4)
    {
        do
        {
            for (int j = 0; j < 4; j++)
            {
                Struct_10A243F0_Element* Element = &m_Buffer[Index + j];
                if (Element)
                {
                    Element->Unknown00 = 0xff;
                    Element->Unknown04 = 1.0f;
                }
            }
            Index += 4;
        } while (Index < NewCount - 3);
    }
    while (Index < NewCount)
    {
        Struct_10A243F0_Element* Element = &m_Buffer[Index];
        if (Element)
        {
            Element->Unknown00 = 0xff;
            Element->Unknown04 = 1.0f;
        }
        Index++;
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
