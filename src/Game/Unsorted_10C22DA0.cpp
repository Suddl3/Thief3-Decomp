// Game/Unsorted_10C22DA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BAEC80.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

extern "C" void* memset(void* Dest, int Value, unsigned Count);

Class_10905A90_Member* GetAllocator();

// The item of the array: a block the owner frees.
class Class_10C24440_Item
{
public:
    char Unknown00[0x14];
    Class_10BAEC80 Unknown14;
    int Unknown20;
};

// The owner of the array.
class Class_10C24440
{
public:
    void FUN_10c24440(int From, int To, int Count);

    int Unknown00;
    int Unknown04;
    Class_10C24440_Item* Unknown08;
};

// FUNCTION: 0x10C24440 ?FUN_10c24440@Class_10C24440@@QAEXHHH@Z
void Class_10C24440::FUN_10c24440(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        if (From < To)
        {
            for (int I = From + Count; I < To + Count; I++)
            {
                Class_10BAEC80* Block = &Unknown08[I].Unknown14;
                Block->FUN_10a211e0(0);
                if (Block->m_BlockBytes)
                {
                    GetAllocator()->Virtual5(Block->Unknown08);
                    Block->Unknown08 = 0;
                    Block->m_BlockBytes = 0;
                }
            }
        }
        else if (To < From)
        {
            for (int I = To; I < From; I++)
            {
                Class_10BAEC80* Block = &Unknown08[I].Unknown14;
                Block->FUN_10a211e0(0);
                if (Block->m_BlockBytes)
                {
                    GetAllocator()->Virtual5(Block->Unknown08);
                    Block->Unknown08 = 0;
                    Block->m_BlockBytes = 0;
                }
            }
        }
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10C24440_Item));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10C24440_Item* Item = Unknown08 + I;
                if (Item)
                    memset(Item, 0, sizeof(Class_10C24440_Item));
            }
            return;
        }
        for (int I = To + Count; I < From + Count; I++)
        {
            Class_10C24440_Item* Item = Unknown08 + I;
            if (Item)
                memset(Item, 0, sizeof(Class_10C24440_Item));
        }
    }
}
