// Game/Unsorted_10A19380.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10A19380.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

// FUNCTION: 0x10A19380 ?FUN_10a19380@Class_10A19380@@QAEXH@Z
void Class_10A19380::FUN_10a19380(int Value)
{
    cIntArray* List = Unknown08;
    for (int Left = 0x42; Left != 0; Left--)
    {
        int Index = List->FindIndex(Value);
        if (Index != -1)
        {
            if (Index != List->Count - 1)
            {
                int From = Index + 1;
                int To = Index;
                int Count = List->Count - Index - 1;
                if (From != To && Count)
                    memmove(List->Data + To, List->Data + From, Count * sizeof(int));
            }
            List->SetCount(List->Count - 1);
        }
        List++;
    }
}
