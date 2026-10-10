// Game/Unsorted_10B24DD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10B1B8A0_List.h"
#include "Game/Class_10B1B8A0.h"

class Class_10B1B8A0;

Class_10B1B8A0* FUN_10b1b600();

struct Struct_10B1B8A0_Item
{
    char Unknown00[4];
    int Unknown04;
    int Unknown08;
};

class Class_10B255F0
{
public:
    int FUN_10b24f00();

    char Unknown00[4];
    int Unknown04;
    char Unknown08[8];
    int Unknown10;
};

// FUNCTION: 0x10B24F00 ?FUN_10b24f00@Class_10B255F0@@QAEHXZ
int Class_10B255F0::FUN_10b24f00()
{
    if (Unknown04)
    {
        if (Unknown10)
        {
            Class_10B1B8A0* List = FUN_10b1b600();
            Struct_10B1B8A0_List& Items = List->ListA;
            int Index = Unknown04;
            if (Index < Items.Count)
            {
                Struct_10B1B8A0_List& Entries = FUN_10b1b600()->ListA;
                return Entries.Data[Index].Unknown04;
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
                return Entries.Data[Index].Unknown04;
            }
        }
    }
    return 0;
}
