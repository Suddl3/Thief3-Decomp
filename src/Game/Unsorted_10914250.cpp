// Game/Unsorted_10914250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E4938C.h"

// The array's elements are destroyed through their virtual destructor.
class Class_10914250_Element
{
public:
    virtual ~Class_10914250_Element();
};

// cIntArray::SetCount is the game's (0x109ED5E0): inlined on normal paths,
// called from unwind funclets.
inline void cIntArray::SetCount(int Count)
{
    int Capacity = !Unknown08 ? 0 : m_CapacityBytes / sizeof(int);
    GetAllocator()->Virtual8(0, 0);
    if (Count > Capacity)
    {
        int NewCapacity = Count;
        if (Capacity)
            NewCapacity = (Count & ~15) + 16;
        Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
        m_CapacityBytes = NewCapacity * sizeof(int);
    }
    else if (Count <= Capacity - 16)
    {
        if (Count == 0)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            m_CapacityBytes = 0;
        }
        else
        {
            int NewCapacity = (Count & ~15) + 16;
            Unknown08 = (int*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(int), 0, 0, 0, 0);
            m_CapacityBytes = NewCapacity * sizeof(int);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = Count;
}

// FUNCTION: 0x10914250 ??1Class_10E4938C@@UAE@XZ
Class_10E4938C::~Class_10E4938C()
{
    for (int i = 0; i < Unknown04.Count; i++)
    {
        if (Unknown04.Data[i])
        {
            delete (Class_10914250_Element*)Unknown04.Data[i];
            Unknown04.Data[i] = 0;
        }
    }
}
