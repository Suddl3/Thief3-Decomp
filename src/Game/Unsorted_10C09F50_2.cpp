// Game/Unsorted_10C09F50_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>
#include "Game/cIntArray.h"

extern "C" void* memmove(void* Dest, const void* Src, unsigned int Count);

class Class_10C0A0B0_Unknown18
{
public:
    int Unknown00;
    char Pad04[8];
    int Unknown0C;
};

struct Struct_10C0A6B0
{
    int Unknown00;
    int Unknown04;
    cIntArray Unknown08;
    cIntArray Unknown14;
};

// include/Game/Class_10C0A6B0.h copied whole, with the fields this function reads added.
class Class_10C0A6B0
{
public:
    void RemoveItem(Struct_10C0A6B0* A, int Item);
    void FUN_10c0a0b0(Struct_10C0A6B0* A, int Index);

    int Unknown00;
    char Unknown04[0xC];
    int Unknown10;
    int Unknown14;
    Class_10C0A0B0_Unknown18* Unknown18;
    cIntArray Unknown1C;
};

// FUNCTION: 0x10C0A0B0 ?FUN_10c0a0b0@Class_10C0A6B0@@QAEXPAUStruct_10C0A6B0@@H@Z
void Class_10C0A6B0::FUN_10c0a0b0(Struct_10C0A6B0* A, int Index)
{
    if (Index == 0)
    {
        int Count = Unknown10;
        for (int I = 0; I < Count; I++)
        {
            Class_10C0A0B0_Unknown18* Entry = &Unknown18[I];
            if (Entry->Unknown00 == A->Unknown04)
                Entry->Unknown0C = A->Unknown08.Data[0];
        }
    }
    cIntArray* First = &A->Unknown08;
    if (Index != First->Count - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = First->Count - Index - 1;
        if (From != To && Count)
            memmove(First->Data + To, First->Data + From, Count * sizeof(int));
    }
    First->SetCount(First->Count - 1);
    cIntArray* Second = &A->Unknown14;
    if (Index != Second->Count - 1)
    {
        int From = Index + 1;
        int To = Index;
        int Count = Second->Count - Index - 1;
        if (From != To && Count)
            memmove(Second->Data + To, Second->Data + From, Count * sizeof(int));
    }
    Second->SetCount(Second->Count - 1);
    if (First->Count == 0)
    {
        for (int I = 0; I < Unknown1C.Count; I++)
        {
            if (Unknown1C.Data[I] == (int)A)
            {
                cIntArray* List = &Unknown1C;
                int Last = List->Count - 1;
                int Tmp = List->Data[I];
                List->Data[I] = List->Data[Last];
                List->Data[Last] = Tmp;
                List->SetCount(List->Count - 1);
                break;
            }
        }
    }
}
