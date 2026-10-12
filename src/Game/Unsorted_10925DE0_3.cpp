// Game/Unsorted_10925DE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10925E40.h"

class cIntArray
{
public:
    void SetCount(int NewCount);

    void Append(int Item)
    {
        int Index = Unknown00;
        SetCount(Index + 1);
        Unknown08[Index] = Item;
    }

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10925E40_Unknown0E4
{
public:
    char Unknown00[0x1C];
    cIntArray Unknown1C;
    char Unknown28[0x1C];
};

// FUNCTION: 0x10925E40 ?FUN_10925e40@Class_10925E40@@QAEXHH@Z
void Class_10925E40::FUN_10925e40(int Index, int Item)
{
    Class_10925E40_Unknown0E4* Element = &Unknown0E4[Index];
    if (Item)
    {
        for (int i = 0; i < Element->Unknown1C.Unknown00; i++)
        {
            if (Element->Unknown1C.Unknown08[i] == Item)
                return;
        }
        Element->Unknown1C.Append(Item);
    }
}
