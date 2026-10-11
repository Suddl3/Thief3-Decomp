// Game/Class_10E97BE8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C0A6F0.h"
#include "Game/Class_10C09B60.h"
#include "Game/Class_10E97BE8.h"

// FUNCTION: 0x10C0AA00 ?FUN_10c0aa00@Class_10E97BE8@@QAEXHPAVClass_10BFBD70@@@Z
void Class_10E97BE8::FUN_10c0aa00(int Arg, Class_10BFBD70* Src)
{
    for (int i = 0; i < Src->Unknown00; i++)
    {
        int Item = Src->Unknown08[i];
        int Found = FUN_10c09910(Item, Arg);
        if (Found != 0)
        {
            Class_10C09B60 Tmp;
            Tmp.Unknown00 = Item;
            Tmp.Unknown04 = Found;
            Class_10C0A6F0& Arr = Unknown04;
            int Index = Arr.Unknown00;
            Arr.FUN_10c0a320(Index + 1);
            Class_10C09B60* Elem = (Class_10C09B60*)Arr.Unknown08 + Index;
            Elem->Unknown00 = Tmp.Unknown00;
            Elem->Unknown04 = Tmp.Unknown04;
            Class_10BFBD70& Dst = Elem->Unknown08;
            Dst.FUN_10bfbd70(Tmp.Unknown08.Unknown00);
            for (int j = 0; j < Dst.Unknown00; j++)
                Dst.Unknown08[j] = Tmp.Unknown08.Unknown08[j];
            Class_10BFBD70& Dst14 = Elem->Unknown14;
            Dst14.FUN_10bfbd70(Tmp.Unknown14.Unknown00);
            for (int j = 0; j < Dst14.Unknown00; j++)
                Dst14.Unknown08[j] = Tmp.Unknown14.Unknown08[j];
        }
    }
}
