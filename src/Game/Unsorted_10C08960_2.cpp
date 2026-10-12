// Game/Unsorted_10C08960_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CAC0.h"
#include "Game/cStateStack.h"
#include "Game/Class_10BAA8A0.h"
#include "Game/Class_10BABED0.h"
#include "Game/Class_10C08960.h"

class Class_10BAA6B0_Param;

class Class_10BAA8A0;

class Class_10BABED0;

class cStateStack;

class Class_10B9CAC0;

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* Param);

// FUNCTION: 0x10C08960 ?FUN_10c08960@Class_10C08960@@QAEXXZ
void Class_10C08960::FUN_10c08960()
{
    for (int i = 0; i < Unknown14; i++)
    {
        Class_10BAA6B0_Param* Item = Unknown1C[i];
        if (Item)
        {
            Class_10BABED0* A = FUN_10baa6b0(Item);
            if (A)
            {
                Class_10B9CAC0* B = A->FUN_10baa750();
                if (B)
                    B->FUN_10b9e690(Unknown04);
            }
        }
    }
    FUN_10c088b0();
}
