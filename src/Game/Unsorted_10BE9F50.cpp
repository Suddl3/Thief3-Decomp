// Game/Unsorted_10BE9F50.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"

class APawn
{
public:
    void FUN_10a6ea30(int A, int B);
};

class Class_10BEA320_Unknown60
{
public:
    int Unknown00;
    APawn* Unknown04;
};

class Class_10BEA320
{
public:
    void FUN_10bea320(Class_10BEA320_Unknown60* Item);

    char Unknown00[0x54];
    cIntArray Unknown54;
    Class_10BEA320_Unknown60* Unknown60;
};

// FUNCTION: 0x10BEA320 ?FUN_10bea320@Class_10BEA320@@QAEXPAVClass_10BEA320_Unknown60@@@Z
void Class_10BEA320::FUN_10bea320(Class_10BEA320_Unknown60* Item)
{
    if (Unknown60)
    {
        if (Unknown60->Unknown04)
        {
            Unknown60->Unknown04->FUN_10a6ea30(0x800709, 0);
        }
        delete Unknown60;
        Unknown60 = 0;
    }
    Unknown60 = Item;
    if (Item)
    {
        int Count = Unknown54.Count;
        cIntArray* Set = &Unknown54;
        int Index = -1;
        for (int i = 0; i < Count; i++)
        {
            if (Set->Data[i] == (int)Item)
            {
                Index = i;
                break;
            }
        }
        if (Index == -1)
            return;
        int Last = Set->Count - 1;
        int Moved = Set->Data[Last];
        int Old = Set->Data[Index];
        Set->Data[Index] = Moved;
        Set->Data[Last] = Old;
        Set->SetCount(Set->Count - 1);
    }
}
