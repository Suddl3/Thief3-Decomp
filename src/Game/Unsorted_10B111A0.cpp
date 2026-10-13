// Game/Unsorted_10B111A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B116B0.h"
#include "Game/Class_10B11600.h"
#include "Game/Class_10E782A0.h"
#include "Game/Class_10B111A0_Unknown0C.h"
#include "Game/Class_10B111A0_Unknown10.h"
#include "Game/Struct_10B111A0_Node.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10B11600_Unknown08
{
public:
    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

// FUNCTION: 0x10B11600 ?MoveRange@Class_10B11600@@QAEXHHH@Z
void Class_10B11600::MoveRange(int From, int To, int Count)
{
    if (From != To && Count != 0)
    {
        memmove(m_Elements + To, m_Elements + From, Count * sizeof(Class_10B11600_Unknown08));
        if (From < To)
        {
            for (int I = From; I < To; I++)
            {
                Class_10B11600_Unknown08* Item = m_Elements + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
        else
        {
            for (int I = To + Count; I < From + Count; I++)
            {
                Class_10B11600_Unknown08* Item = m_Elements + I;
                if (Item)
                {
                    Item->Unknown00 = 0;
                    Item->Unknown04 = 0;
                    Item->Unknown08 = 0;
                }
            }
        }
    }
}
