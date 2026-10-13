// Game/Class_10A37780.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A37780.h"
#include "Game/Struct_10A37780_Field20.h"

class APlayerPawn;

// FUNCTION: 0x10A37780 ?FUN_10a37780@Class_10A37780@@QAEXPAVAPlayerPawn@@_N@Z
void Class_10A37780::FUN_10a37780(APlayerPawn* A, bool B)
{
    Struct_10A37780_Field20* Item = 0;
    if (A)
        Item = Virtual11(A);
    if (B)
    {
        if (Unknown20)
        {
            delete Unknown20;
            Unknown20 = 0;
        }
        Unknown20 = Item;
    }
    else
    {
        if (Unknown20)
        {
            delete Unknown20;
            Unknown20 = 0;
        }
        if (Item)
        {
            if (Unknown28)
            {
                delete Unknown28;
                Unknown28 = 0;
            }
            Unknown28 = Item;
        }
    }
    Virtual5(-1, 0, -1.0f);
}
