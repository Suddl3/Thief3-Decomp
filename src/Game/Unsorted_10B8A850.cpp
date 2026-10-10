// Game/Unsorted_10B8A850.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8A850.h"
#include "Game/Class_10CAFD00.h"
#include "Game/Class_10D9B090.h"

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B8A850 ?FUN_10b8a850@Class_10B8A850@@QAEXXZ
void Class_10B8A850::FUN_10b8a850()
{
    Class_10D9B090* Mgr = FUN_10d9dcb0();
    Mgr->Unknown04->FUN_10cafd00(Unknown50);
    int Arg = Unknown10;
    Mgr = FUN_10d9dcb0();
    Mgr->Unknown04->FUN_10cb1b90(Arg);
}
