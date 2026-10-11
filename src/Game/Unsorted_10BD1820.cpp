// Game/Unsorted_10BD1820.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/State_Search.h"

extern float DAT_10e6b950;

// FUNCTION: 0x10BD19B0 ?FUN_10bd19b0@@YAHH@Z
int FUN_10bd19b0(int Value)
{
    switch (Value % 11)
    {
    case 0:
        return 0x3fff;
    case 1:
        return 0xffffc001;
    case 2:
        return 0x2fff;
    case 3:
        return 0xffffd001;
    case 4:
        return 0x1fff;
    case 5:
        return 0xffffe001;
    case 6:
        return 0xfff;
    case 7:
        return 0xfffff001;
    case 9:
        return 0x7fff;
    case 10:
        return 0x5fff;
    case 11:
        return 0xffffa001;
    }
    return 0;
}

// FUNCTION: 0x10BD1A40 ?FUN_10bd1a40@State_Search@@UAEMXZ
float State_Search::FUN_10bd1a40()
{
    return DAT_10e6b950;
}
