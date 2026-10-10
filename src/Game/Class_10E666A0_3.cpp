// Game/Unsorted_10A39A00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E666A0.h"
#include "Game/Object_10A37820.h"
#include "Game/Object_10A37860.h"
#include "Game/Struct_10A37860.h"

extern float DAT_10eafbdc;

// FUNCTION: 0x10A39A00 ?FUN_10a39a00@Class_10E666A0@@UAE_NXZ
bool Class_10E666A0::FUN_10a39a00()
{
    Object_10A37820* First = Virtual12();
    if (First)
    {
        Object_10A37860* Second = First->Virtual1();
        if (Second)
        {
            Struct_10A37860* Third = Second->Virtual4();
            if (Third)
            {
                if (Third->Unknown30 == DAT_10eafbdc && Third->Unknown0C == 3)
                    return true;
                return false;
            }
        }
    }
    return true;
}
