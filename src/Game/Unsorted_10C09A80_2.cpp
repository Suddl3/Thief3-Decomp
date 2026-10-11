// Game/Unsorted_10C09A80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Struct_10AA3520.h"
#include "Game/Class_10AAAEB0.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C80360.h"

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10C09AF0 ?FUN_10c09af0@@YGXPAVClass_10BFBD70@@@Z
void __stdcall FUN_10c09af0(Class_10BFBD70* Out)
{
    Class_10AAAEB0* Obj = (Class_10AAAEB0*)DAT_10f35dec->UnknownA4;
    int i = 0;
    if (0 < ((Class_10BFBD70*)Obj->FUN_10aaaeb0())->Count)
    {
        do
        {
            Class_10C80360* Item = (Class_10C80360*)((Class_10BFBD70*)Obj->FUN_10aaaeb0())->Data[i];
            if (Item && (Item->FUN_10c80360() & 8))
            {
                int Index = Out->Count;
                Out->FUN_10bfbd70(Index + 1);
                Out->Data[Index] = (int)Item;
            }
            i++;
        } while (i < ((Class_10BFBD70*)Obj->FUN_10aaaeb0())->Count);
    }
}
