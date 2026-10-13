// Game/Class_10E814F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// A growable array of pointers: a count, the bytes allocated and the block,
// grown and shrunk 16 entries at a time.
class cIntArray
{
public:
    void SetCount(int NewCount)
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

    ~cIntArray()
    {
        SetCount(0);
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

// The objects the pair at +0x08 owns: deleted without a virtual call.
class Class_10B7B000
{
public:
    ~Class_10B7B000();
};

class Class_10E814F0
{
public:
    virtual ~Class_10E814F0();

    int Unknown04;
    Class_10B7B000* Unknown08[2];
    int Unknown10[15];
    cIntArray Unknown4C;
};

// FUNCTION: 0x10B47540 ??1Class_10E814F0@@UAE@XZ
Class_10E814F0::~Class_10E814F0()
{
    for (int i = 0; i < 2; i++)
    {
        if (Unknown08[i])
        {
            delete Unknown08[i];
            Unknown08[i] = 0;
        }
    }
}

// FUNCTION: 0x10B479E0 ??_GClass_10E814F0@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10B47540's definition in this unit.
