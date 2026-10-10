// Game/Unsorted_109DFBA0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"

class Class_10905A90_Member
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int Item);
};

Class_10905A90_Member* FUN_10905aa0();

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x109DFF00 ?FUN_109dff00@Class_10BFBD70@@QAEXXZ
void Class_10BFBD70::FUN_109dff00()
{
    for (int i = 0; i < Unknown00; i++)
    {
        int* Item = Unknown08 + i;
        if (*Item)
        {
            int Key = *Item - 4;
            FUN_10905aa0()->Virtual5(Key);
            *Item = 0;
        }
    }
    Unknown00 = 0;
}

// FUNCTION: 0x109DFF50 ?FUN_109dff50@Class_10BFBD70@@QAEXH@Z
void Class_10BFBD70::FUN_109dff50(int Index)
{
    if (Index != Unknown00 - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = Unknown00 - Index - 1;
        if (From != To && Count)
            memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(int));
    }
    FUN_10bfbd70(Unknown00 - 1);
}
