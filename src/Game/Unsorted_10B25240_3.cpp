// Game/Unsorted_10B25240_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B25D90.h"
#include "Game/Class_10B25D60.h"

struct Struct_10B1B8A0_Item
{
    int Unknown00;
    int Count;
    int Unknown08;
};

struct Struct_10B1B8A0_List
{
    int Count;
    int Unknown04;
    Struct_10B1B8A0_Item* Data;

    int Num() const { return Count; }
    Struct_10B1B8A0_Item& operator[](int Index) const { return Data[Index]; }
};

class Class_10B1B8A0
{
public:
    char Unknown00[4];
    Struct_10B1B8A0_List ListA;
    Struct_10B1B8A0_List ListB;
    char Pad1C[0x48];
};

Class_10B1B8A0* FUN_10b1b600();

// FUNCTION: 0x10B25240 ?FUN_10b25240@Class_10B25D90@@QAEHPAH@Z
int Class_10B25D90::FUN_10b25240(int* A)
{
    *A = 1;
    if (Unknown04 > 0)
    {
        for (int Index = Unknown04 - 1; Index >= 0; Index--)
        {
            if (FUN_10b1b600()->ListA[Index].Count > 0)
                return Index;
        }
    }
    *A = 0;
    for (int Index = FUN_10b1b600()->ListB.Num() - 1; Index > 0; Index--)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    *A = 1;
    for (int Index = FUN_10b1b600()->ListA.Num() - 1; Index > Unknown04; Index--)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    return 0;
}

// FUNCTION: 0x10B25310 ?FUN_10b25310@Class_10B25D90@@QAEHPAH@Z
int Class_10B25D90::FUN_10b25310(int* A)
{
    *A = 0;
    if (Unknown04 > 0)
    {
        for (int Index = Unknown04 - 1; Index > 0; Index--)
        {
            if (FUN_10b1b600()->ListB[Index].Count > 0)
                return Index;
        }
    }
    *A = 1;
    for (int Index = FUN_10b1b600()->ListA.Num() - 1; Index >= 0; Index--)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    *A = 0;
    for (int Index = FUN_10b1b600()->ListB.Num() - 1; Index > Unknown04; Index--)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    return 0;
}

// FUNCTION: 0x10B253E0 ?FUN_10b253e0@Class_10B25D60@@QAEHPAH@Z
int Class_10B25D60::FUN_10b253e0(int* A)
{
    *A = 1;
    if (Unknown04 < FUN_10b1b600()->ListA.Num() - 1)
    {
        for (int Index = Unknown04 + 1; Index < FUN_10b1b600()->ListA.Num(); Index++)
        {
            if (FUN_10b1b600()->ListA[Index].Count > 0)
                return Index;
        }
    }
    *A = 0;
    for (int Index = 1; Index < FUN_10b1b600()->ListB.Num(); Index++)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    *A = 1;
    for (int Index = 0; Index < Unknown04; Index++)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    return 0;
}

// FUNCTION: 0x10B254F0 ?FUN_10b254f0@Class_10B25D60@@QAEHPAH@Z
int Class_10B25D60::FUN_10b254f0(int* A)
{
    *A = 0;
    if (Unknown04 < FUN_10b1b600()->ListB.Num() - 1)
    {
        for (int Index = Unknown04 + 1; Index < FUN_10b1b600()->ListB.Num(); Index++)
        {
            if (FUN_10b1b600()->ListB[Index].Count > 0)
                return Index;
        }
    }
    *A = 1;
    for (int Index = 0; Index < FUN_10b1b600()->ListA.Num(); Index++)
    {
        if (FUN_10b1b600()->ListA[Index].Count > 0)
            return Index;
    }
    *A = 0;
    for (int Index = 1; Index < Unknown04; Index++)
    {
        if (FUN_10b1b600()->ListB[Index].Count > 0)
            return Index;
    }
    return 0;
}
