// Game/Unsorted_10918260_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10924100.h"
#include "Game/Class_10924E80.h"

extern Class_10924E80* DAT_10f2c734;

extern Class_10924100* DAT_10f2c740;

extern int DAT_10efef54;

extern char DAT_10f2c724;

void FreeItems();

// FUNCTION: 0x10918260 ?DestroyState@@YAXXZ
void DestroyState()
{
    if (DAT_10f2c734)
        DAT_10f2c734->FUN_10925060();
    DAT_10efef54 = -1;
    DAT_10f2c724 = 0;
    if (DAT_10f2c740)
    {
        delete DAT_10f2c740;
        DAT_10f2c740 = 0;
    }
    FreeItems();
}
