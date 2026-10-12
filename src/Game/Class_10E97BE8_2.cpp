// Game/Class_10E97BE8_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10C0A6F0.h"
#include "Game/Class_10C09B60.h"
#include "Game/Class_10E97BE8.h"

// FUNCTION: 0x10C0AA00 ?AddMatches@Class_10E97BE8@@QAEXHPAVcIntArray@@@Z
void Class_10E97BE8::AddMatches(int Arg, cIntArray* Src)
{
    for (int i = 0; i < Src->Unknown00; i++)
    {
        int Item = Src->Unknown08[i];
        int Found = FUN_10c09910(Item, Arg);
        if (Found != 0)
        {
            Class_10C09B60 Tmp;
            Tmp.m_Item = Item;
            Tmp.m_Found = Found;
            Class_10C0A6F0& Arr = m_Entries;
            int Index = Arr.m_Count;
            Arr.FUN_10c0a320(Index + 1);
            Class_10C09B60* Elem = (Class_10C09B60*)Arr.m_Data + Index;
            Elem->m_Item = Tmp.m_Item;
            Elem->m_Found = Tmp.m_Found;
            cIntArray& Dst = Elem->Unknown08;
            Dst.SetCount(Tmp.Unknown08.Unknown00);
            for (int j = 0; j < Dst.Unknown00; j++)
                Dst.Unknown08[j] = Tmp.Unknown08.Unknown08[j];
            cIntArray& Dst14 = Elem->Unknown14;
            Dst14.SetCount(Tmp.Unknown14.Unknown00);
            for (int j = 0; j < Dst14.Unknown00; j++)
                Dst14.Unknown08[j] = Tmp.Unknown14.Unknown08[j];
        }
    }
}
