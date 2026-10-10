// Game/Unsorted_10AACE80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6DA90.h"

// FUNCTION: 0x10AACE80 ?FUN_10aace80@Class_10E6DA90@@UAEHH@Z
int Class_10E6DA90::FUN_10aace80(int Kind)
{
    switch (Kind)
    {
    case 0:
    case 2:
        return 3;
    case 4:
        return 0xD;
    case 5:
        return 0xE;
    case 0xD:
        return 4;
    case 0xE:
        return 5;
    case 1:
    case 6:
        return 0;
    case 7:
        return 6;
    case 8:
        return 0xA;
    case 9:
        return 0xB;
    case 0xA:
        return 8;
    case 0xB:
        return 9;
    case 3:
    case 0xC:
        return 2;
    }
    return 1;
}
