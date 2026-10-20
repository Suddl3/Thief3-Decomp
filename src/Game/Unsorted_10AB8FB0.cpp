// Game/Unsorted_10AB8FB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB8FB0.h"
#include "Game/Class_10AB8BE0.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10AB8FB0 ?MoveRange@Class_10AB8FB0@@QAEXHHH@Z
void Class_10AB8FB0::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        if (From < To)
        {
            for (int I = From + Count; I < To + Count; I++)
            {
                Class_10AB8BE0* Item = Unknown08 + I;
                Item->~Class_10AB8BE0();
            }
        }
        else if (To < From)
        {
            for (int I = To; I < From; I++)
            {
                Class_10AB8BE0* Item = Unknown08 + I;
                Item->~Class_10AB8BE0();
            }
        }
        memmove(Unknown08 + To, Unknown08 + From, Count * sizeof(Class_10AB8BE0));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10AB8BE0* Item = Unknown08 + I;
                if (Item)
                {
                    Item->Unknown18.Count = 0;
                    Item->Unknown18.m_CapacityBytes = 0;
                    Item->Unknown18.Data = 0;
                    Item->Unknown24.Count = 0;
                    Item->Unknown24.m_CapacityBytes = 0;
                    Item->Unknown24.Data = 0;
                    Item->Unknown00 = 0;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                    Item->Unknown0C = 0;
                    Item->Unknown10 = -1;
                }
            }
            return;
        }
        for (int I = To + Count; I < From + Count; I++)
        {
            Class_10AB8BE0* Item = Unknown08 + I;
            if (Item)
            {
                Item->Unknown18.Count = 0;
                Item->Unknown18.m_CapacityBytes = 0;
                Item->Unknown18.Data = 0;
                Item->Unknown24.Count = 0;
                Item->Unknown24.m_CapacityBytes = 0;
                Item->Unknown24.Data = 0;
                Item->Unknown00 = 0;
                Item->Unknown04 = 0;
                Item->Unknown08 = 0;
                Item->Unknown0C = 0;
                Item->Unknown10 = -1;
            }
        }
    }
}
