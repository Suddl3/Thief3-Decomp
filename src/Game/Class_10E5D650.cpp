// Game/Class_10E5D650.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A16BC0.h"
#include "Game/Class_10E5D650.h"
#include "Game/Class_10F46DA0.h"
#include "Game/Class_10A174E0.h"
#include "Game/Class_10E5D654.h"

class Class_10E5D650;

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A17180 ??1Class_10E5D650@@QAE@XZ
Class_10E5D650::~Class_10E5D650()
{
    DAT_10f46da0->Virtual3(this, 0x5a, -1, -1);
}

// FUNCTION: 0x10A17200 ?FUN_10a17200@Class_10E5D650@@UAEXHHHH@Z
void Class_10E5D650::FUN_10a17200(int p1, int p2, int p3, int p4)
{
    if (p1 == 0x5b)
        FUN_10a17210();
}
