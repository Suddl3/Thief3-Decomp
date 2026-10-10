// Game/Unsorted_10C00A60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C00B40.h"
#include "Game/Class_10C00B40_Field18.h"

unsigned int FUN_1090e9b0(const void* Data, int Length);

// FUNCTION: 0x10C00B40 ?FUN_10c00b40@Class_10C00B40@@QAEIABH@Z
unsigned int Class_10C00B40::FUN_10c00b40(const int& Key)
{
    const void* Data;
    int Length;
    Unknown18.Virtual0(Key, &Data, &Length);
    return FUN_1090e9b0(Data, Length) & ((1 << Unknown08) - 1);
}
