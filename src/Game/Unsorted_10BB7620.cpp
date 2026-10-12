// Game/Unsorted_10BB7620.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CAC0.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10BB7620.h"
#include "Game/Class_10BC9D40.h"

// FUNCTION: 0x10BB7620 ?FUN_10bb7620@Class_10BB7620@@QAE_NXZ
bool Class_10BB7620::FUN_10bb7620()
{
    if (Unknown04 == 3)
        return false;
    if (Unknown04 == 0)
        return true;
    if (Unknown0C)
    {
        Class_10B9CAC0* P = Unknown0C->FUN_10baa750();
        if (P)
        {
            if (P->GetCurrent())
            {
                if (P->GetCurrent()->Virtual3() == 1)
                    return false;
            }
        }
    }
    return true;
}
