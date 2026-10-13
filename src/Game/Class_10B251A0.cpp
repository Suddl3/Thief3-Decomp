// Game/Class_10B251A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

// Declarations first.
#include "Game/Class_10B251A0.h"

struct Struct_10B25080_Item
{
    int Unknown00;
    int Count;
    int Unknown08;
};

struct Struct_10B25080_List
{
    int Count;
    int Unknown04;
    Struct_10B25080_Item* Data;

    int Num() const { return Count; }
    Struct_10B25080_Item& operator[](int Index) const { return Data[Index]; }
};

class Class_10B1B8A0
{
public:
    char Unknown00[0x1C];
    Struct_10B25080_List Unknown1C;
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B25080 ?FUN_10b25080@Class_10B251A0@@QAEHXZ
int Class_10B251A0::FUN_10b25080()
{
    if (Unknown2C > 0)
    {
        for (int i = Unknown2C - 1; i >= 0; i--)
        {
            if (FUN_10b1b600()->Unknown1C[i].Count > 0)
                return i;
        }
    }
    for (int i = FUN_10b1b600()->Unknown1C.Num() - 1; i > Unknown2C; i--)
    {
        if (FUN_10b1b600()->Unknown1C[i].Count > 0)
            return i;
    }
    return 0;
}
