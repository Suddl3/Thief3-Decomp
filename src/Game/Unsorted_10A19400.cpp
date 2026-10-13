// Game/Unsorted_10A19400.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10A4DD60.h"
#include "Game/Class_10A19400.h"

Class_10A4DD60* __stdcall FUN_10a4f900();

// FUNCTION: 0x10A19400 ?FUN_10a19400@Class_10A19400@@QAEXHH@Z
void Class_10A19400::FUN_10a19400(int Item, int Mode)
{
    int Eff = FUN_10a4f900()->GetEffectiveValue(Item);
    if (Eff != 0x40)
    {
        int Index = Unknown320[Eff].FindIndex(Item);
        if (Index != -1)
        {
            if (Mode == 3)
                Unknown320[Eff].RemoveAt(Index);
            return;
        }
        if (Mode != 3)
        {
            cIntArray* Arr = &Unknown320[Eff];
            int Count = Arr->Count;
            Arr->SetCount(Count + 1);
            Arr->Data[Count] = Item;
        }
    }
}
