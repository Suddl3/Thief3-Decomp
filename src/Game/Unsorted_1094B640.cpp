// Game/Unsorted_1094B640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/cElementArray.h"
#include "Game/Struct_1094C6E0.h"

Class_10905A90_Member* GetAllocator();

class Class_10E499F4 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Struct_1094C6E0 FUN_1094c6e0();

    char Unknown04[0x30];
    Struct_1094C6E0 Unknown34;
};

// The element: 8 bytes, an int and a byte; the loops clear both.
class Class_1094B640_Unknown08
{
public:
    int Unknown00;
    char Unknown04;
};

// FUNCTION: 0x1094B640 ?Resize@cElementArray@@QAEXH@Z
void cElementArray::Resize(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Elements ? 0 : m_CapacityBytes / sizeof(Class_1094B640_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_1094B640_Unknown08* Element = (Class_1094B640_Unknown08*)((char*)m_Elements + i * sizeof(Class_1094B640_Unknown08));
        Element->Unknown00 = 0;
        Element->Unknown04 = 0;
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_1094B640_Unknown08), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_1094B640_Unknown08);
        m_Elements = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Elements);
            m_Elements = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Elements, NewCapacity * sizeof(Class_1094B640_Unknown08), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_1094B640_Unknown08);
            m_Elements = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1094B640_Unknown08* Element = (Class_1094B640_Unknown08*)((char*)m_Elements + j * sizeof(Class_1094B640_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}

// FUNCTION: 0x1094C3F0 ?Free@cElementArray@@QAEXXZ
void cElementArray::Free()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Elements);
        m_Elements = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x1094C6E0 ?FUN_1094c6e0@Class_10E499F4@@UAE?AUStruct_1094C6E0@@XZ
Struct_1094C6E0 Class_10E499F4::FUN_1094c6e0()
{
    return Unknown34;
}
