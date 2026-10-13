// Game/Unsorted_10AAB5F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AAB7D0.h"
#include "Game/cString.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x18 bytes, its first two words cleared by the loop.
class Class_10AAB7D0_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    char Pad08[0x10];
};

class Class_10AAB5F0_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual cString Virtual2();
    virtual int Virtual3();
};

class Class_10E6DA40
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int FUN_10aab5f0(Class_10AAB5F0_Param* Obj);

    cString Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10AAB5F0 ?FUN_10aab5f0@Class_10E6DA40@@UAEHPAVClass_10AAB5F0_Param@@@Z
int Class_10E6DA40::FUN_10aab5f0(Class_10AAB5F0_Param* Obj)
{
    Unknown04 = Obj->Virtual2();
    Unknown08 = Obj->Virtual3();
    return 1;
}

// FUNCTION: 0x10AAB7D0 ?SetCount@Class_10AAB7D0@@QAEXH@Z
void Class_10AAB7D0::SetCount(int NewCount)
{
    int OldCount = m_Count;
    int Capacity = !m_Data ? 0 : m_ByteCapacity / sizeof(Class_10AAB7D0_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10AAB7D0_Unknown08), 0, 0, 0, 0);
        m_ByteCapacity = NewCapacity * sizeof(Class_10AAB7D0_Unknown08);
        m_Data = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_ByteCapacity = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10AAB7D0_Unknown08), 0, 0, 0, 0);
            m_ByteCapacity = NewCapacity * sizeof(Class_10AAB7D0_Unknown08);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10AAB7D0_Unknown08* Element = (Class_10AAB7D0_Unknown08*)((char*)m_Data + j * sizeof(Class_10AAB7D0_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    GetAllocator()->Virtual9();
    m_Count = NewCount;
}
