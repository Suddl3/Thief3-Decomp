// Game/Unsorted_10AC44C0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element of the array: 0x3C bytes. Its destructor frees the block its first
// field points to; the block starts four bytes before the string.
class Class_10A38130
{
public:
    Class_10A38130();
    ~Class_10A38130()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
    char Unknown04[0x38];
};

class Class_10AC4920
{
public:
    void FUN_10ac44c0(int Count);
    void Free();

    int Unknown00;
    int Unknown04;
    Class_10A38130* m_Data;
};

// FUNCTION: 0x10AC44C0 ?FUN_10ac44c0@Class_10AC4920@@QAEXH@Z
void Class_10AC4920::FUN_10ac44c0(int Count)
{
    int OldCount = Unknown00;
    int Capacity = !m_Data ? 0 : Unknown04 / sizeof(Class_10A38130);
    for (int i = Count; i < OldCount; i++)
        m_Data[i].~Class_10A38130();
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        m_Data = (Class_10A38130*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A38130), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10A38130);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(m_Data);
            m_Data = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            m_Data = (Class_10A38130*)GetAllocator()->Virtual3(m_Data, NewCapacity * sizeof(Class_10A38130), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10A38130);
        }
    }
    for (int j = OldCount; j < Count; j++)
        new (&m_Data[j]) Class_10A38130;
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}
