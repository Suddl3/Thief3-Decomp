// Game/Unsorted_10A6EA30.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A6F0C0.h"
#include "Game/Class_10E6BA40.h"

struct Struct_10A6F160
{
    char Unknown00[0xC];
    float Unknown0C;
};

// FUNCTION: 0x10A6F160 ?FUN_10a6f160@Class_10E6BA40@@UAEHHM@Z
int Class_10E6BA40::FUN_10a6f160(int Key, float Value)
{
    Struct_10A6F160* Entry;
    Unknown04.FUN_10a6f0c0(&Entry, &Key);
    if (Value - Entry->Unknown0C >= 1.0f)
    {
        Entry->Unknown0C = Value;
        return 1;
    }
    return 0;
}
