// Game/Unsorted_10AB8730_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AB8E30.h"
#include "Game/cIntArray.h"

// FUNCTION: 0x10AB8E30 ?FUN_10ab8e30@Class_10AB8E30@@QAEXH@Z
void Class_10AB8E30::FUN_10ab8e30(int Item)
{
    int Index = Unknown18.FindIndex(Item);
    if (Index != -1)
    {
        Unknown18.RemoveAt(Index);
        Unknown24.RemoveAt(Index);
        if (Unknown24.Count > 0)
            Unknown0C = Unknown24.Data[Unknown24.Count - 1];
    }
}
