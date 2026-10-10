// Game/Unsorted_10C06FA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C07070.h"

// FUNCTION: 0x10C06FA0 ?FUN_10c06fa0@@YAHH@Z
int FUN_10c06fa0(int Value)
{
    switch (Value)
    {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 4;
    case 3:
        return 8;
    case 4:
        return 0x10;
    }
    return 0;
}

// FUNCTION: 0x10C07070 ?FUN_10c07070@Class_10C07070@@QAEHXZ
int Class_10C07070::FUN_10c07070()
{
    int Total = Unknown38 + Unknown2C + Unknown20 + Unknown14 + Unknown08;
    int Used = Unknown4C + Unknown4A + Unknown48 + Unknown46 + Unknown44;
    if (Total >= 0 && Used >= 0 && Total >= Used)
        return Total - Used;
    return 0;
}
