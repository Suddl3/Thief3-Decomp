// Game/Class_10E6BA00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E6BA00.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time. The constructor zeroes it; this copy
// inlines SetCount and the destructor, as the function does.
class cIntArray
{
public:
    cIntArray() : Unknown00(0), m_CapacityBytes(0), Unknown08(0) {}

    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(void*);
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                m_CapacityBytes = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                m_CapacityBytes = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~cIntArray()
    {
        SetCount(0);
        if (m_CapacityBytes)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
    }

    int Unknown00;
    int m_CapacityBytes;
    void** Unknown08;
};

// The objects the array holds, and the objects they point at.
class Class_10A6E810_Unknown08
{
public:
    int Unknown00;
    class Class_10A6E810_Unknown04* Unknown04;
};

class Class_10A6E810_Unknown04
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
    class Class_10A6E810_Unknown0C* Unknown0C;
};

class Class_10A6E810_Unknown0C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B);
};

// FUNCTION: 0x10A6E810 ?Virtual15@Class_10E6BA00@@UAEXHHH@Z
void Class_10E6BA00::Virtual15(int A, int B, int C)
{
    cIntArray Local;
    FUN_10a4c500(&Local);
    for (int i = 0; i < Local.Unknown00; i++)
    {
        Class_10A6E810_Unknown08* P = (Class_10A6E810_Unknown08*)Local.Unknown08[i];
        P->Unknown04->Unknown0C->Virtual4(P->Unknown00, A);
    }
}
