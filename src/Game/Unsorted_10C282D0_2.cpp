// Game/Unsorted_10C282D0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first.
#include "Game/Class_10BBB410.h"
#include "Game/Class_10E9925C.h"
#include "Game/Class_10C28570.h"

// FUNCTION: 0x10C283F0 ?FUN_10c283f0@Class_10C28570@@QAEXXZ
void Class_10C28570::FUN_10c283f0()
{
    if (Unknown20)
    {
        Unknown00->RemoveItem((int)Unknown20);
        delete Unknown20;
        Unknown20 = 0;
    }
    if (Unknown24)
    {
        Unknown00->RemoveItem((int)Unknown24);
        delete Unknown24;
        Unknown24 = 0;
    }
    if (Unknown28)
    {
        Unknown00->RemoveItem((int)Unknown28);
        delete Unknown28;
        Unknown28 = 0;
    }
}
