// Game/Unsorted_10A51DF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AF7F80.h"

int FUN_10af36e0(const char* A, const char* B);

extern const char DAT_10e678f8[];

extern const char DAT_10e67f7c[];

extern const char DAT_10e67f74[];

extern const char DAT_10e67f6c[];

extern const char DAT_10e67f64[];

// FUNCTION: 0x10A51DF0 ?ParsePlacement@@YGHPAVClass_10AF7F80@@@Z
int __stdcall ParsePlacement(Class_10AF7F80* Placement)
{
    if (!FUN_10af36e0(Placement->FUN_10af7f80(), DAT_10e678f8))
        return 1;
    if (!FUN_10af36e0(Placement->FUN_10af7f80(), DAT_10e67f7c))
        return 2;
    if (!FUN_10af36e0(Placement->FUN_10af7f80(), DAT_10e67f74))
        return 3;
    if (!FUN_10af36e0(Placement->FUN_10af7f80(), DAT_10e67f6c))
        return 4;
    return FUN_10af36e0(Placement->FUN_10af7f80(), DAT_10e67f64) ? 0 : 5;
}
