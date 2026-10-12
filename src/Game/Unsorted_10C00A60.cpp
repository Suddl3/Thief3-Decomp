// Game/Unsorted_10C00A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C00B40.h"
#include "Game/Class_10C00B40_Field18.h"
#include "Game/Class_10C00A60.h"
#include "Game/Class_10905A90_Member.h"

unsigned int HashBytes(const void* Data, int Length);

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void*, int, unsigned);

// FUNCTION: 0x10C00A60 ?FUN_10c00a60@Class_10C00A60@@QAEXH@Z
void Class_10C00A60::FUN_10c00a60(int Count)
{
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        int* NewData = (int*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
        m_Data = NewData;
        m_CapacityBytes = NewCapacity * sizeof(int);
        memset(NewData + Capacity, 0, (NewCapacity - Capacity) * sizeof(int));
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            m_Data = (int*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(int), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    m_Count = Count;
}

// FUNCTION: 0x10C00B40 ?GetBucketIndex@Class_10C00B40@@QAEIABH@Z
unsigned int Class_10C00B40::GetBucketIndex(const int& Key)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    return HashBytes(Data, Length) & ((1 << m_BucketBits) - 1);
}
