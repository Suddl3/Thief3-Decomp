// Game/Class_10E6BD68_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10E6BD68.h"

// FUNCTION: 0x10A79D70 ?FUN_10a79d70@Class_10E6BD68@@UAEXH@Z
void Class_10E6BD68::FUN_10a79d70(int Item)
{
    int Count = Unknown28.Unknown00;
    Class_10BFBD70* Set = &Unknown28;
    int Index = -1;
    for (int i = 0; i < Count; i++)
    {
        if (Set->Unknown08[i] == Item)
        {
            Index = i;
            break;
        }
    }
    if (Index < 0)
        return;

    int Last = Set->Unknown00 - 1;
    int Moved = Set->Unknown08[Last];
    int Old = Set->Unknown08[Index];
    Set->Unknown08[Index] = Moved;
    Set->Unknown08[Last] = Old;
    Set->FUN_10bfbd70(Set->Unknown00 - 1);
}
