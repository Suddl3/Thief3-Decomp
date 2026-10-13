// Game/Unsorted_10A21340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element: 0x24 bytes. Copied from include/Game/Class_1095A7A0.h, plus the last int the header lacks.
class Class_1095A7A0
{
public:
    Class_1095A7A0();
    ~Class_1095A7A0();

    char Unknown00[2];
    char Unknown02;
    char Unknown03;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
};

// The owner: its element count, the buffer size in bytes and the buffer.
class Class_10A21340
{
public:
    void FUN_10a21340(int NewCount);

    int Count;
    int m_CapacityBytes;
    Class_1095A7A0* m_Data;
};

// FUNCTION: 0x10A21340 ?FUN_10a21340@Class_10A21340@@QAEXH@Z
void Class_10A21340::FUN_10a21340(int NewCount)
{
    int OldCount = Count;
    int Capacity = !m_Data ? 0 : m_CapacityBytes / sizeof(Class_1095A7A0);
    for (int i = NewCount; i < OldCount; i++)
        m_Data[i].~Class_1095A7A0();
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        m_Data = (Class_1095A7A0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_1095A7A0), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(Class_1095A7A0);
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
            m_Data = (Class_1095A7A0*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_1095A7A0), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(Class_1095A7A0);
        }
    }
    for (int j = OldCount; j < NewCount; j++)
        new (&m_Data[j]) Class_1095A7A0;
    GetAllocator()->Virtual9();
    Count = NewCount;
}
