// Game/Options.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Options.h"

// FUNCTION: 0x10AB5AB0 ?Get@Options@@QAEHH@Z
int Options::Get(int Index)
{
    return Values[Index];
}

// FUNCTION: 0x10AB5AC0 ?GetResolution@Options@@QAEXPAH0@Z
void Options::GetResolution(int* Width, int* Height)
{
    int Index = Values[11];
    *Width = ResolutionWidths[Index];
    *Height = ResolutionHeights[Index];
}

// FUNCTION: 0x10AB6420 ?FUN_10ab6420@Options@@QAEXXZ
void Options::FUN_10ab6420()
{
    for (int i = 0; i < 0x15; i++)
        FUN_10ab5c60(i);
}

// FUNCTION: 0x10AB66E0 ?FUN_10ab66e0@Options@@QAEXXZ
void Options::FUN_10ab66e0()
{
    Save();
    Unknown59 = 0;
}
