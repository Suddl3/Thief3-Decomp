// Game/Unsorted_10C296E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BB67F0.h"

class Class_10BB48E0;

Class_10BB48E0* FUN_10bb5660();

// FUNCTION: 0x10C29930 ?FUN_10c29930@@YA_NPAXPAVcIntArray@@H@Z
bool FUN_10c29930(void* A, cIntArray* List, int Value)
{
    for (int i = 0; i < List->Count; i++)
    {
        int Entry = List->Data[i];
        if (((Class_10BB67F0*)FUN_10bb5660())->FUN_10bb4590(Entry, Value, 0) == true)
            return true;
    }
    int Item = (int)((Class_10BB67F0*)FUN_10bb5660())->FUN_10bb67f0(Value, 0, 0);
    if (Item != 0)
    {
        if (List->FindIndex(Item) == -1)
        {
            int Index = List->Count;
            List->SetCount(Index + 1);
            List->Data[Index] = Item;
        }
        return true;
    }
    return false;
}
