// Game/Unsorted_10A245C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// A growable array of 16-byte elements: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class Class_10A245C0
{
public:
    void SetCount(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / 16;
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * 16, 0, 0, 0, 0);
            Unknown04 = NewCapacity * 16;
        }
        else if (NewCount <= Capacity - 16)
        {
            if (NewCount == 0)
            {
                GetAllocator()->Virtual5(Unknown08);
                Unknown08 = 0;
                Unknown04 = 0;
            }
            else
            {
                int NewCapacity = (NewCount & ~15) + 16;
                Unknown08 = GetAllocator()->Virtual3(Unknown08, NewCapacity * 16, 0, 0, 0, 0);
                Unknown04 = NewCapacity * 16;
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~Class_10A245C0();

    int Unknown00;
    unsigned int Unknown04;
    void* Unknown08;
};

// FUNCTION: 0x10A245C0 ??1Class_10A245C0@@QAE@XZ
Class_10A245C0::~Class_10A245C0()
{
    SetCount(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
