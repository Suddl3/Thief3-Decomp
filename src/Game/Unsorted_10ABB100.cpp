// Game/Unsorted_10ABB100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10ABB580.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABB200.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10ABB200_Unknown08
{
public:
    void* Unknown00;
    bool Unknown04;
    int Unknown08;
    int Unknown0C;
    bool Unknown10;
};

// FUNCTION: 0x10ABB200 ?MoveRange@Class_10ABB200@@QAEXHHH@Z
void Class_10ABB200::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(m_Elements + To, m_Elements + From, Count * sizeof(Class_10ABB200_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10ABB200_Unknown08* Item = m_Elements + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown10 = true;
                    Item->Unknown04 = false;
                    Item->Unknown08 = 0;
                    Item->Unknown0C = 2;
                }
            }
            return;
        }
        int Start = To + Count;
        int End = From + Count;
        if (Start < End)
        {
            for (int I = Start; I < End; I++)
            {
                Class_10ABB200_Unknown08* Item = m_Elements + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown10 = true;
                    Item->Unknown04 = false;
                    Item->Unknown08 = 0;
                    Item->Unknown0C = 2;
                }
            }
        }
    }
}
