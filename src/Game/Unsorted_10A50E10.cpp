// Game/Unsorted_10A50E10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A50E10.h"
#include "Game/Class_10C66590.h"
#include "Game/Object_10A50E10.h"
#include "Game/Object_10C66590.h"

class Class_10C66590;

// FUNCTION: 0x10A50E10 ?FUN_10a50e10@Class_10A50E10@@QAEXXZ
void Class_10A50E10::FUN_10a50e10()
{
    Class_10C66590* Owner = Unknown11C;
    if (Owner)
    {
        Object_10C66590* Item = (Object_10C66590*)Owner->FUN_10c66590();
        if (Item)
        {
            Object_10A50E10* Target = Item->Virtual38(Unknown11C);
            if (Target)
                Target->Virtual58();
        }
    }
}
