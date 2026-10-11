// Game/Class_10E9CB00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9CB00.h"

struct Struct_10C60E60 {};

// FUNCTION: 0x10C60E60 ?ReleaseData@Class_10E9CB00@@UAEXXZ
void Class_10E9CB00::ReleaseData()
{
    if (UnknownF8)
        Unknown10 -= UnknownFC;
    delete UnknownF8;
    UnknownF8 = 0;
    delete Unknown130;
    Unknown130 = 0;
}
