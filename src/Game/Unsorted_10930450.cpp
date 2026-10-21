// Game/Unsorted_10930450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10930A40.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The entry of the array the element holds.
struct Class_10930450_Entry
{
    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// The element: itself a growable array of entries.
class Class_10930450_m_Data
{
public:
    Class_10930450_m_Data() : Unknown00(0), Unknown04(0), Unknown08(0) {}

    ~Class_10930450_m_Data()
    {
        SetCount(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    void SetCount(int NewCount);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

inline void Class_10930450_m_Data::SetCount(int NewCount)
{
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10930450_Entry);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10930450_Entry), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10930450_Entry);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown04 = 0;
            Unknown08 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10930450_Entry), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10930450_Entry);
            Unknown08 = Block;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x10930450 ?FUN_10930450@Class_10930A40@@QAEXH@Z
void Class_10930A40::FUN_10930450(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !m_Data ? 0 : Unknown04 / sizeof(Class_10930450_m_Data);
    for (int i = NewCount; i < OldCount; i++)
        ((Class_10930450_m_Data*)m_Data)[i].~Class_10930450_m_Data();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10930450_m_Data), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10930450_m_Data);
        m_Data = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10930450_m_Data), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10930450_m_Data);
            m_Data = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&((Class_10930450_m_Data*)m_Data)[j]) Class_10930450_m_Data();
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
