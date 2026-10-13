// Game/Unsorted_10A16C20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A174E0.h"
#include "Game/Class_10E5D650.h"
#include "Game/Class_10E5D654.h"

extern Class_10A174E0* DAT_10f3987c;

// FUNCTION: 0x10A18E20 ?FUN_10a18e20@@YAXXZ
void FUN_10a18e20()
{
    if (DAT_10f3987c)
    {
        delete DAT_10f3987c;
        DAT_10f3987c = 0;
    }
}
