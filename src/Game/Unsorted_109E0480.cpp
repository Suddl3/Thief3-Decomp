// Game/Unsorted_109E0480.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

void FUN_109e0630();

extern int DAT_10f35da0;

extern int DAT_10f35b44;

extern cString* DAT_10f35da8;

// FUNCTION: 0x109E1360 ?FUN_109e1360@@YAXAAVcString@@@Z
void FUN_109e1360(cString& Out)
{
    if (!DAT_10f35da0)
    {
        FUN_109e0630();
    }
    if (DAT_10f35b44 < DAT_10f35da0)
    {
        Out = DAT_10f35da8[DAT_10f35b44];
        return;
    }
    Out.operator=(cString(DAT_10e47660));
}
