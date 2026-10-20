// Game/Unsorted_10AC8EC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AC8F70.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// The element: 0xC bytes, its three words cleared by the loop.
class Class_10AC8F70_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    float Unknown08;
};

// FUNCTION: 0x10AC8F70 ?FUN_10ac8f70@Class_10AC8F70@@QAEXH@Z
void Class_10AC8F70::FUN_10ac8f70(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_10AC8F70_Unknown08);
    GetAllocator()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10AC8F70_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_10AC8F70_Unknown08);
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
            void* Block = GetAllocator()->Virtual3(Unknown08, NewCapacity * sizeof(Class_10AC8F70_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_10AC8F70_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_10AC8F70_Unknown08* Element = (Class_10AC8F70_Unknown08*)((char*)Unknown08 + j * sizeof(Class_10AC8F70_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = -1;
            Element->Unknown08 = -1.0f;
        }
    }
    GetAllocator()->Virtual9();
    Unknown00 = NewCount;
}
