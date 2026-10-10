// Game/Unsorted_1091CB40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10919C40.h"
#include "Game/Class_1091CB20.h"

// FUNCTION: 0x1091CB40 ?FUN_1091cb40@Class_1091CB20@@QAEHXZ
int Class_1091CB20::FUN_1091cb40()
{
    if (!Unknown0C)
        FUN_1091be70();
    int Index = Unknown1C;
    Class_10919C40* Item = Unknown20;
    int Value = (int)(Item->FUN_10919c40(Index) * Item->Unknown14);
    return (int)(Unknown18 / Value);
}
