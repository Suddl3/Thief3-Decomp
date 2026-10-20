// Game/Unsorted_10B2A8A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

Class_10905A90_Member* GetAllocator();

// The element: a block pointer, freed from four bytes before its start.
class Class_10B2A9D0_Unknown08
{
public:
    ~Class_10B2A9D0_Unknown08()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10B2A9D0
{
public:
    void FUN_10b2a9d0(int From, int To, int Count);

    int Unknown00;
    int Unknown04;
    Class_10B2A9D0_Unknown08* Unknown08;
};

// FUNCTION: 0x10B2A9D0 ?FUN_10b2a9d0@Class_10B2A9D0@@QAEXHHH@Z
void Class_10B2A9D0::FUN_10b2a9d0(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        if (From < To)
        {
            for (int I = From + Count; I < To + Count; I++)
            {
                Class_10B2A9D0_Unknown08* Item = Unknown08 + I;
                Item->~Class_10B2A9D0_Unknown08();
            }
        }
        else if (To < From)
        {
            for (int I = To; I < From; I++)
            {
                Class_10B2A9D0_Unknown08* Item = Unknown08 + I;
                Item->~Class_10B2A9D0_Unknown08();
            }
        }
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10B2A9D0_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10B2A9D0_Unknown08* Item = Unknown08 + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
            return;
        }
        for (int I = To + Count; I < From + Count; I++)
        {
            Class_10B2A9D0_Unknown08* Item = Unknown08 + I;
            if (Item)
                Item->Unknown00 = 0;
        }
    }
}
