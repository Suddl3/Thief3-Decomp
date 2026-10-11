// Game/Unsorted_10BF79D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAEC40.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

extern void* DAT_10e8d7c4[];

struct Struct_10BAEC40_Unknown08
{
    void** Unknown00;
    int Unknown04;
    int Unknown08;
    bool Unknown0C;
};

// FUNCTION: 0x10BF7AD0 ?FUN_10bf7ad0@Class_10BAEC40@@QAEXHHH@Z
void Class_10BAEC40::FUN_10bf7ad0(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Struct_10BAEC40_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Struct_10BAEC40_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = DAT_10e8d7c4;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Struct_10BAEC40_Unknown08* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown00 = DAT_10e8d7c4;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
    }
}
