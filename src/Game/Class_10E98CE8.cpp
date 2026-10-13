// Game/Class_10E98CE8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C7D570.h"
#include "Game/Class_10BAC050.h"
#include "Game/Class_10E98CE8.h"
#include "Game/Class_10C1A560.h"
#include "Game/Class_10E98CE0.h"
#include "Game/Class_10E98CE4.h"

extern void* DAT_10e98ce8[];

// FUNCTION: 0x10C1A3A0 ?FUN_10c1a3a0@Class_10E98CE8@@UAE_NH@Z
bool Class_10E98CE8::FUN_10c1a3a0(int Param)
{
    if (Param == (int)Unknown04->FUN_10c7d570())
        return false;
    return Unknown04->FUN_10baac90(Param) == Unknown08;
}

// FUNCTION: 0x10C1A540 ??0Class_10E98CE8@@QAE@HH@Z
Class_10E98CE8::Class_10E98CE8(int p1, int p2)
{
    *(void***)this = DAT_10e98ce8;
    Unknown04 = (Class_10BAC050*)p1;
    Unknown08 = p2;
}
