// Game/Class_10E7C3EC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B1B8A0.h"
#include "Game/Class_10E7C3EC.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_10B26930.h"
#include "Game/Class_10B27FD0.h"
#include "Game/Class_10B32D60.h"
#include "Game/Class_10E7AD44.h"
#include "Game/Class_10E7B89C.h"
#include "Game/Class_10E7BB2C.h"
#include "Game/cT3ReadBookWindow.h"
#include "Game/Class_10E7C380.h"
#include "Game/Class_10E7C38C.h"
#include "Game/Class_10E7C398.h"
#include "Game/Class_10E7C3B0.h"
#include "Game/Class_10E7C3BC.h"
#include "Game/Class_10E7C3C8.h"
#include "Game/Class_10E7C3D4.h"
#include "Game/Class_10E7C3E0.h"
#include "Game/Class_10E7C404.h"
#include "Game/Class_10E7C410.h"
#include "Game/Class_10E7C41C.h"
#include "Game/Class_10E7C3F8.h"

Class_10B1B8A0* FUN_10b1b600();

extern void* DAT_10e7c3ec[];

// FUNCTION: 0x10B36390 ?Construct@Class_10E7C3EC@@QAEPAV1@XZ
Class_10E7C3EC* Class_10E7C3EC::Construct()
{
    *(void**)this = DAT_10e7c3ec;
    return this;
}

// FUNCTION: 0x10B363B0 ?FUN_10b363b0@Class_10E7C3EC@@UAEHHHH@Z
int Class_10E7C3EC::FUN_10b363b0(int p1, int p2, int p3)
{
    FUN_10b1b600()->FUN_10b1ac30();
    return 1;
}
