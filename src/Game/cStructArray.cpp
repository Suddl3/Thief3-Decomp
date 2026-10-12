// Game/cStructArray.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cStructArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

extern void* DAT_10e8d7c4[];

struct Struct_10BAEC40_Unknown08
{
    void** Unknown00;
    int Unknown04;
    int Unknown08;
    bool Unknown0C;
};

// FUNCTION: 0x10BF7AD0 ?MoveRange@cStructArray@@QAEXHHH@Z
void cStructArray::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(m_Items + To, m_Items + From, Count * sizeof(Struct_10BAEC40_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Struct_10BAEC40_Unknown08* Item = m_Items + I;
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
                Struct_10BAEC40_Unknown08* Item = m_Items + I;
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
