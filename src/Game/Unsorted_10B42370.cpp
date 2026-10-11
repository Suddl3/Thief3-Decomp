// Game/Unsorted_10B42370.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount)
    {
        int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(void*);
        GetAllocator()->Virtual8(0, 0);
        if (NewCount > Capacity)
        {
            int NewCapacity = NewCount;
            if (Capacity)
                NewCapacity = (NewCount & ~15) + 16;
            Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(void*);
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
                Unknown08 = (void**)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(void*), 0, 0, 0, 0);
                Unknown04 = NewCapacity * sizeof(void*);
            }
        }
        GetAllocator()->Virtual9();
        Unknown00 = NewCount;
    }

    ~Class_10BFBD70()
    {
        FUN_10bfbd70(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void** Unknown08;
};

// Each element is freed with operator delete alone, so it has no destructor.
struct Struct_10B42370 {};

class Class_10B42370
{
public:
    void FUN_10b42370();

    int Unknown00;
    int Unknown04;
    Class_10BFBD70 Unknown08;
};

// FUNCTION: 0x10B42370 ?FUN_10b42370@Class_10B42370@@QAEXXZ
void Class_10B42370::FUN_10b42370()
{
    for (int i = 0; i < Unknown08.Unknown00; i++)
    {
        delete (Struct_10B42370*)Unknown08.Unknown08[i];
        Unknown08.Unknown08[i] = 0;
    }
    Unknown08.~Class_10BFBD70();
}
