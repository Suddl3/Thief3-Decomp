// Game/Unsorted_10BED970.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10FF667C.h"
#include "Game/Class_10BED970.h"
#include "Game/Class_10BFFF60.h"

class Class_10BFFF00_Src;

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

int FUN_10af3a20();

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BED970 ?FUN_10bed970@Class_10BED970@@QAEXPAVClass_10BFFF00_Src@@@Z
void Class_10BED970::FUN_10bed970(Class_10BFFF00_Src* Src)
{
    cIntArray* List = &Unknown58;
    DAT_10ff667c->Unknown0C->AppendSourceArray(Src, List);
    int Count = List->Count;
    while (Count > 1)
    {
        int Index = FUN_10af3a20() % Count;
        if (Index != List->Count - 1)
        {
            int From = Index + 1;
            int To = Index;
            int Size = List->Count - Index - 1;
            if (From != To && Size)
                memmove(List->Data + To, List->Data + From, Size * sizeof(int));
        }
        List->SetCount(List->Count - 1);
        Count = List->Count;
    }
}
