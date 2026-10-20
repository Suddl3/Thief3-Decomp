// Game/Unsorted_10C5E520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C5EE80.h"

// Ion Storm's memory manager (0x10905AA0).
class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void* Virtual3(void* Block, int Size, int A, int B, int C, int D);
    virtual void Virtual4();
    virtual void Virtual5(void* Block);
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(int A, int B);
    virtual void Virtual9();
};

Class_10905A90_Member* GetAllocator();

extern "C" void* memset(void* Dest, int Fill, unsigned int Count);

Class_10C5E600_Unknown08::~Class_10C5E600_Unknown08()
{
    if (Unknown00)
    {
        char* Block = (char*)Unknown00 - 4;
        GetAllocator()->Virtual5(Block);
        Unknown00 = 0;
    }
}

// FUNCTION: 0x10C5E600 ?FUN_10c5e600@Class_10C5EE80@@QAEXH@Z
void Class_10C5EE80::FUN_10c5e600(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : (unsigned int)Unknown04 / sizeof(Class_10C5E600_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_10C5E600_Unknown08* Element = Unknown08 + i;
        Element->~Class_10C5E600_Unknown08();
    }
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        Class_10C5E600_Unknown08* Block = (Class_10C5E600_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C5E600_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10C5E600_Unknown08);
        Unknown08 = Block;
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
            Class_10C5E600_Unknown08* Block = (Class_10C5E600_Unknown08*)GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10C5E600_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10C5E600_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10C5E600_Unknown08* Element = Unknown08 + j;
        if (Element)
        {
            Element->Unknown00 = 0;
            memset(&Element->Unknown04, 0, sizeof(Class_10C5E600_Unknown08) - 4);
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
