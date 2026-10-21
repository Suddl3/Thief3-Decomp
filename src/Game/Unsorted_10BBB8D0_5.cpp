// Game/Unsorted_10BBB8D0_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

class Class_10BBBDD0_Unknown10
{
public:
    void FUN_10c291d0(int A);
};

// include/Game/Class_10BB85E0.h copied whole, with the fields this function uses added.
class Class_10BB85E0
{
public:
    bool FUN_10bb85e0();
    void FUN_10bb8ee0(int A);
    void FUN_10bbbdd0(int A);

    char Unknown00[0x10];
    Class_10BBBDD0_Unknown10* Unknown10;
    char Unknown14[0x200];
    cIntArray Unknown214;
    cIntArray Unknown220;
    char Unknown22C[0xA0];
    int Unknown2CC;
    char Unknown2D0[0x10];
    int Unknown2E0;
    char Unknown2E4[0xF];
    bool Unknown2F3;
    bool Unknown2F4;
    char Unknown2F5[0x7];
    int Unknown2FC;
    int Unknown300;
    char Unknown304[0x1C];
    int Unknown320;
    char Unknown324[0x4];
    cIntArray Unknown328;
};

// FUNCTION: 0x10BBBDD0 ?FUN_10bbbdd0@Class_10BB85E0@@QAEXH@Z
void Class_10BB85E0::FUN_10bbbdd0(int Item)
{
    if (Unknown2E0 == Item)
        Unknown2E0 = 0;
    if (Unknown2CC == Item)
        Unknown2CC = 0;
    if (Unknown320 == Item)
        Unknown320 = 0;

    cIntArray* List = &Unknown214;
    for (int Index = 0; Index < Unknown214.Count; Index++)
    {
        if (Item == Unknown214.Data[Index])
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
            Index--;
        }
    }

    List = &Unknown220;
    for (int Index = 0; Index < Unknown220.Count; Index++)
    {
        if (Item == Unknown220.Data[Index])
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
            Index--;
        }
    }

    List = &Unknown328;
    for (int Index = 0; Index < Unknown328.Count; Index++)
    {
        if (Item == Unknown328.Data[Index])
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
            Index--;
        }
    }

    Unknown10->FUN_10c291d0(Item);

    if (Item == Unknown300)
    {
        Unknown300 = 0;
        FUN_10bb8ee0(0);
    }
    if (Item == Unknown2FC)
    {
        Unknown2FC = 0;
        FUN_10bb8ee0(0);
    }
}
