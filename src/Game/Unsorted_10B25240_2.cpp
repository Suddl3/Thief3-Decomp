// Game/Unsorted_10B25240_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B255F0.h"
#include "Game/Struct_10B256A0_Entry.h"

struct Struct_10B256A0_Array
{
    int Count;
    int Unknown04;
    Struct_10B256A0_Entry* Data;

    int Num() const { return Count; }
    Struct_10B256A0_Entry& operator[](int Index) const { return Data[Index]; }
};

class Class_10B1B8A0
{
public:
    char Unknown00[0x1C];
    Struct_10B256A0_Array Unknown1C;
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B256A0 ?FUN_10b256a0@Class_10B255F0@@QAEHXZ
int Class_10B255F0::FUN_10b256a0()
{
    int Result = 1;
    int Index = 0;
    if (FUN_10b1b600()->Unknown1C.Num() > 0)
    {
        do
        {
            if (FUN_10b1b600()->Unknown1C[Index].Count > 0 && FUN_10b1b600()->Unknown1C[Index].Unknown00 != 0)
                Result++;
            Index++;
        } while (Index < FUN_10b1b600()->Unknown1C.Num());
    }
    return Result;
}
