// Game/Unsorted_10C0BE50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C0C150.h"
#include "Game/Item_10C0C150.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C0BF20.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10C0BF20_Unknown08
{
public:
    void* Unknown00;
    char Unknown04[0x8];
};

// FUNCTION: 0x10C0BF20 ?MoveRange@Class_10C0BF20@@QAEXHHH@Z
void Class_10C0BF20::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(m_Data + To, m_Data + From, Count * sizeof(Class_10C0BF20_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10C0BF20_Unknown08* Item = m_Data + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Class_10C0BF20_Unknown08* Item = m_Data + I;
                if (Item)
                    Item->Unknown00 = 0;
            }
        }
    }
}
