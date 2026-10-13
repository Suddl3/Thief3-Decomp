// Game/Unsorted_10A37A70_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A37F30.h"
#include "Game/Class_1090A780.h"
#include "Game/cString.h"

extern const char DAT_10e47660[];

// FUNCTION: 0x10A38F00 ?FUN_10a38f00@Class_10A37F30@@QAE?AVcString@@XZ
cString Class_10A37F30::FUN_10a38f00()
{
    if (!Unknown59C)
        return cString(DAT_10e47660);
    return *Unknown5A4;
}
