// Game/Unsorted_10AAE350_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/XBInputInterface.h"

extern "C" unsigned char DAT_10f3a288;

extern "C" unsigned char DAT_10f3a289;

extern "C" unsigned char DAT_10f3a28a;

extern "C" unsigned char DAT_10f3a28b;

extern "C" unsigned char DAT_10f3a28c;

extern "C" unsigned char DAT_10f3a28d;

extern "C" unsigned char DAT_10f3a28e;

extern "C" unsigned char DAT_10f3a28f;

extern "C" unsigned char DAT_10f3a290;

extern "C" unsigned char DAT_10f3a291;

extern "C" unsigned char DAT_10f3a292;

extern "C" unsigned char DAT_10f3a293;

extern "C" unsigned char DAT_10f3a294;

extern "C" unsigned char DAT_10f3a295;

extern "C" unsigned char DAT_10f3a296;

extern "C" unsigned char DAT_10f3a297;

extern "C" int DAT_10f3a278;

// FUNCTION: 0x10AAE350 ?FUN_10aae350@Class_10AAEB70@@QAEEH@Z
unsigned char XBInputInterface::FUN_10aae350(int A)
{
    if (!Pad810[0])
        return 0;

    switch (A)
    {
    case 0xC8:
        if (DAT_10f3a288)
            return 0xff;
        break;
    case 0xC9:
        if (DAT_10f3a289)
            return 0xff;
        break;
    case 0xCA:
        if (DAT_10f3a28a)
            return 0xff;
        break;
    case 0xCB:
        if (DAT_10f3a28b)
            return 0xff;
        break;
    case 0xCC:
        if (DAT_10f3a28c)
            return 0xff;
        break;
    case 0xCD:
        if (DAT_10f3a28d)
            return 0xff;
        break;
    case 0xCE:
        if (DAT_10f3a28e)
            return 0xff;
        break;
    case 0xCF:
        if (DAT_10f3a28f)
            return 0xff;
        break;
    case 0xD0:
        if (DAT_10f3a290)
            return 0xff;
        break;
    case 0xD1:
        if (DAT_10f3a291)
            return 0xff;
        break;
    case 0xD2:
        if (DAT_10f3a292)
            return 0xff;
        break;
    case 0xD3:
        if (DAT_10f3a293)
            return 0xff;
        break;
    case 0xD4:
        if (DAT_10f3a294)
            return 0xff;
        break;
    case 0xD5:
        if (DAT_10f3a295)
            return 0xff;
        break;
    case 0xD6:
        if (DAT_10f3a296)
            return 0xff;
        break;
    case 0xD7:
        if (DAT_10f3a297)
            return 0xff;
        break;
    case 0xF0:
        if (DAT_10f3a278 == 0 || DAT_10f3a278 == 0x1194 || DAT_10f3a278 == 0x7b0c)
            return 0xff;
        break;
    case 0xF1:
        if (DAT_10f3a278 == 0x4650 || DAT_10f3a278 == 0x34bc || DAT_10f3a278 == 0x57e4)
            return 0xff;
        break;
    case 0xF2:
        if (DAT_10f3a278 == 0x6978 || DAT_10f3a278 == 0x57e4 || DAT_10f3a278 == 0x7b0c)
            return 0xff;
        break;
    case 0xF3:
        if (DAT_10f3a278 == 0x2328 || DAT_10f3a278 == 0x1194 || DAT_10f3a278 == 0x34bc)
            return 0xff;
        break;
    }

    return 0;
}
