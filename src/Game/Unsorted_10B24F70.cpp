// Game/Unsorted_10B24F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B1B8A0.h"
#include "Game/Struct_10B1B8A0_Item.h"
#include "Game/Struct_10B1B8A0_List.h"

class Class_10B1B8A0;

Class_10B1B8A0* FUN_10b1b600();

class Class_10B255F0
{
public:
    void* FUN_10b24f70();

    char Unknown00[4];
    int Unknown04;
    char Unknown08[8];
    int Unknown10;
};

// FUNCTION: 0x10B24F70 ?FUN_10b24f70@Class_10B255F0@@QAEPAXXZ
void* Class_10B255F0::FUN_10b24f70()
{
    if (!Unknown04)
        return 0;
    void* Result = 0;
    if (Unknown10)
    {
        Class_10B1B8A0* List = FUN_10b1b600();
        Struct_10B1B8A0_List& Items = List->ListA;
        int Index = Unknown04;
        if (Index < Items.Count)
        {
            Struct_10B1B8A0_List& Entries = FUN_10b1b600()->ListA;
            if (Entries.Data[Index].Unknown00)
            {
                int Key = Unknown04;
                Struct_10B1B8A0_List& Final = FUN_10b1b600()->ListA;
                Result = Final.Data[Key].Unknown00;
            }
        }
    }
    else
    {
        Class_10B1B8A0* List = FUN_10b1b600();
        Struct_10B1B8A0_List& Items = List->ListB;
        int Index = Unknown04;
        if (Index < Items.Count)
        {
            Struct_10B1B8A0_List& Entries = FUN_10b1b600()->ListB;
            if (Entries.Data[Index].Unknown00)
            {
                int Key = Unknown04;
                Struct_10B1B8A0_List& Final = FUN_10b1b600()->ListB;
                Result = Final.Data[Key].Unknown00;
            }
        }
    }
    return Result;
}
