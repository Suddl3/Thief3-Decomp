// Game/Unsorted_109535B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10955C30.h"
#include "Game/cString.h"
#include "Game/Class_109535D0.h"

extern const char DAT_10e4a3c8[];

class Class_109535D0_Unknown18
{
public:
    char Pad00[0x30];
    int Unknown30;
};

// FUNCTION: 0x109535D0 ?FUN_109535d0@Class_109535D0@@QAEXXZ
void Class_109535D0::FUN_109535d0()
{
    bool Bad = false;
    bool Missing = false;
    int i = 0;
    do
    {
        if (Bad)
            break;
        if (Unknown90[i].Unknown0C)
        {
            Class_10955C30* Obj = &Unknown90[i];
            if (Obj->m_Handle == 0 || ((Class_109535D0_Unknown18*)Obj->m_Handle)->Unknown30 == 0)
            {
                if (!FUN_10939410(i))
                {
                    if (i != 1)
                        Bad = true;
                    else
                        Missing = true;
                }
            }
        }
        else
        {
            Unknown90[i].Destroy();
            if (Virtual7(i))
                Virtual9(i);
            Unknown30 &= ~(1 << i);
        }
        i++;
    } while (i < 9);
    if (Bad || Missing)
    {
        Unknown2C = 1;
        if (Bad)
        {
            ((cString*)Unknown90)->FUN_1090a590(DAT_10e4a3c8);
            FUN_10939410(0);
        }
    }
}
