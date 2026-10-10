// Game/Unsorted_10B9D220_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410.h"
#include "Game/Class_10B9E410_Member.h"

class Class_10B9E410_Item;

// FUNCTION: 0x10B9DC40 ?FUN_10b9dc40@Class_10B9E410@@QAEXH@Z
void Class_10B9E410::FUN_10b9dc40(int A)
{
    Class_10B9E410_Member* Obj = Unknown38;
    Class_10B9E410_Item* Top = Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1];
    int Key = Unknown0C;
    FUN_10b9d740(Obj->Virtual43(Key, Top, A));
}
