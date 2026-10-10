// Game/Unsorted_10924A00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10925410.h"
#include "Game/Class_10925440.h"
#include "Game/Class_10925470.h"
#include "Game/Class_109254A0.h"
#include "Game/Class_109254D0.h"
#include "Game/Class_10925D50.h"
#include "Game/Class_10BFBD70.h"

struct Entry_10925410
{
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x34];
};

struct Entry_10925440
{
    char Unknown00[0x34];
    int Unknown34;
    char Unknown38[0xC];
};

struct Entry_10925470
{
    char Unknown00[0x34];
    int Unknown34;
    char Unknown38[0xC];
};

struct Entry_109254A0
{
    char Unknown00[0x38];
    int Unknown38;
    char Unknown3C[8];
};

struct Entry_109254D0
{
    char Unknown00[0x3C];
    char Unknown3C;
    char Unknown3D[7];
};

// FUNCTION: 0x10925410 ?FUN_10925410@Class_10925410@@QAEHH@Z
int Class_10925410::FUN_10925410(int Index)
{
    if (Index >= 0 && Index < UnknownDC)
        return UnknownE4[Index].Unknown0C;
    return 0;
}

// FUNCTION: 0x10925440 ?FUN_10925440@Class_10925440@@QAEHH@Z
int Class_10925440::FUN_10925440(int Index)
{
    if (Index >= 0 && Index < UnknownDC)
        return UnknownE4[Index].Unknown34;
    return -1;
}

// FUNCTION: 0x10925470 ?FUN_10925470@Class_10925470@@QAEXHH@Z
void Class_10925470::FUN_10925470(int Index, int Value)
{
    if (Index >= 0 && Index < UnknownDC)
        UnknownE4[Index].Unknown34 = Value;
}

// FUNCTION: 0x109254A0 ?FUN_109254a0@Class_109254A0@@QAEXHH@Z
void Class_109254A0::FUN_109254a0(int Index, int Value)
{
    if (Index >= 0 && Index < UnknownDC)
        UnknownE4[Index].Unknown38 = Value;
}

// FUNCTION: 0x109254D0 ?FUN_109254d0@Class_109254D0@@QAEXHD@Z
void Class_109254D0::FUN_109254d0(int Index, char Value)
{
    if (Index >= 0 && Index < Unknown0DC)
        Unknown0E4[Index].Unknown3C = Value;
}

// FUNCTION: 0x10925D50 ?FUN_10925d50@Class_10925D50@@QAEXH@Z
void Class_10925D50::FUN_10925d50(int Value)
{
    Class_10BFBD70* Array = &Unknown68;
    int Index = Array->Unknown00;
    Array->FUN_10bfbd70(Index + 1);
    Array->Unknown08[Index] = Value;
}
