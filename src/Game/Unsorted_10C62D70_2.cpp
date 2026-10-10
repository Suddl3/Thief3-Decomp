// Game/Unsorted_10C62D70_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9CC20.h"

// FUNCTION: 0x10C62D70 ?FUN_10c62d70@Class_10E9CC20@@UAEPAHH@Z
int* Class_10E9CC20::FUN_10c62d70(int Index)
{
    if (Index < 0 || Index >= 6)
        Index = 0;
    return &Unknown08[Index];
}
