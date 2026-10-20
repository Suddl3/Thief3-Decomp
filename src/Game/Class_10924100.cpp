// Game/Class_10924100.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <new>
#include "Game/Class_10924100.h"
#include "Game/Class_1092F130.h"
#include "Game/Class_10924100_Unknown44.h"
#include "Game/Class_109480B0.h"
#include "Game/Class_10924100_Unknown38.h"

extern int DAT_10f31960;

extern int DAT_10f31958;

extern int DAT_10f3195c;

// FUNCTION: 0x1091F5B0 ?Reset@Class_10924100@@QAEXXZ
void Class_10924100::Reset()
{
    for (int I = 0; I < Unknown30; I++)
    {
        Unknown38[I]->Unknown5C |= 1;
        Unknown38[I]->Virtual0(0);
    }
    for (int I = 0; I < Unknown3C; I++)
    {
        Unknown44[I]->Unknown5C |= 1;
        Unknown44[I]->Virtual0(0);
    }
    if (Unknown0C)
    {
        Unknown0C->Free();
        ::operator delete(Unknown0C);
    }
    if (DAT_10f31960)
    {
        ::operator delete((void*)DAT_10f31960);
    }
    if (DAT_10f31958)
    {
        ::operator delete((void*)DAT_10f31958);
    }
    if (DAT_10f3195c)
    {
        ::operator delete((void*)DAT_10f3195c);
    }
    if (Unknown10)
    {
        Unknown10->FUN_1092f130();
    }
    DAT_10f31960 = 0;
    DAT_10f3195c = 0;
    DAT_10f31958 = 0;
    Unknown0C = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = -1;
}
