// Game/Unsorted_10BAAC90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned Count);

class Class_10BABA40
{
public:
    void RemoveItem(int Item);

    char Unknown00[0xD8];
    cIntArray UnknownD8;
};

// FUNCTION: 0x10BABA40 ?RemoveItem@Class_10BABA40@@QAEXH@Z
void Class_10BABA40::RemoveItem(int Item)
{
    cIntArray* List = &UnknownD8;
    for (int i = 0; i < UnknownD8.Count; i++)
    {
        if (UnknownD8.Data[i] == Item)
        {
            int Index = i;
            if (Index != List->Count - 1)
            {
                int From = Index + 1;
                int To = Index;
                int Count = List->Count - Index - 1;
                if (From != To && Count)
                    memmove(List->Data + To, List->Data + From, Count * sizeof(int));
            }
            List->SetCount(List->Count - 1);
            return;
        }
    }
}
