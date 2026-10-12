// Game/Unsorted_10B87420.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B87530.h"
#include "Game/Class_10B8EC40.h"
#include "Game/Class_10B8F710.h"
#include "Game/Class_10E897F4.h"
#include "Game/Class_10E89800.h"
#include "Game/Class_10E8980C.h"
#include "Game/Class_10E89818.h"
#include "Game/Class_10E89824.h"

extern void* DAT_10e89384[];

extern void* DAT_10e896a8[];

void FUN_10b828c0();

class Class_10E896A8 {
public:
    void* Unknown00;
    void FUN_10b8c6c0();
};

extern int DAT_10ff6600;

extern void* DAT_10e6bf84[];

// Store global address to field at offset 0 and return this

extern void* DAT_10e897f4;

// Store global address to field at offset 0 and return this

extern void* DAT_10e89800;

// Store global address to field at offset 0 and return this

extern void* DAT_10e8980c;

extern void* DAT_10e6ca18[];

// Store global address to field at offset 0 and return this

extern void* DAT_10e89818;

extern void* DAT_10e89824[];

extern void* DAT_10e89a10[];

void FUN_10b92c50();

class Class_10E89A10 {
public:
    void* Unknown00;
    void FUN_10b92690();
};

// FUNCTION: 0x10B87530 ?Init@Class_10B87530@@QAEXXZ
void Class_10B87530::Init()
{
    Unknown00 = DAT_10e89384;
}

// FUNCTION: 0x10B8B820 ?FUN_10b8b820@@YGDHHHHH@Z
char __stdcall FUN_10b8b820(int p1, int p2, int p3, int p4, int p5)
{
    return 0;
}

// FUNCTION: 0x10B8C6C0 ?FUN_10b8c6c0@Class_10E896A8@@QAEXXZ
void Class_10E896A8::FUN_10b8c6c0()
{
    Unknown00 = DAT_10e896a8;
    FUN_10b828c0();
}

// FUNCTION: 0x10B8EC00 ?FUN_10b8ec00@@YAXXZ
void FUN_10b8ec00()
{
    DAT_10ff6600 = 0;
}

// FUNCTION: 0x10B8EC40 ?Init@Class_10B8EC40@@QAEXXZ
void Class_10B8EC40::Init()
{
    Unknown00 = DAT_10e6bf84;
}

// FUNCTION: 0x10B8EEB0 ?FUN_10b8eeb0@@YAHXZ
int FUN_10b8eeb0()
{
    return 0x31;
}

// FUNCTION: 0x10B8F6C0 ?FUN_10b8f6c0@@YAHXZ
int FUN_10b8f6c0()
{
    return 0x42;
}

// FUNCTION: 0x10B8F6D0 ?Init@Class_10E897F4@@QAEPAV1@XZ
Class_10E897F4* Class_10E897F4::Init()
{
    Unknown00 = &DAT_10e897f4;
    return this;
}

// FUNCTION: 0x10B8F6E0 ?FUN_10b8f6e0@@YAHXZ
int FUN_10b8f6e0()
{
    return 0x47;
}

// FUNCTION: 0x10B8F6F0 ?Init@Class_10E89800@@QAEPAV1@XZ
Class_10E89800* Class_10E89800::Init()
{
    Unknown00 = &DAT_10e89800;
    return this;
}

// FUNCTION: 0x10B8F700 ?Init@Class_10E8980C@@QAEPAV1@XZ
Class_10E8980C* Class_10E8980C::Init()
{
    Unknown00 = &DAT_10e8980c;
    return this;
}

// FUNCTION: 0x10B8F710 ?Init@Class_10B8F710@@QAEXXZ
void Class_10B8F710::Init()
{
    Unknown00 = DAT_10e6ca18;
}

// FUNCTION: 0x10B8FC70 ?FUN_10b8fc70@@YAHXZ
int FUN_10b8fc70()
{
    return 0x71;
}

// FUNCTION: 0x10B8FC80 ?Init@Class_10E89818@@QAEPAV1@XZ
Class_10E89818* Class_10E89818::Init()
{
    Unknown00 = &DAT_10e89818;
    return this;
}

// FUNCTION: 0x10B8FC90 ?FUN_10b8fc90@@YAHXZ
int FUN_10b8fc90()
{
    return 0x72;
}

// FUNCTION: 0x10B8FCA0 ?Init@Class_10E89824@@QAEPAV1@XZ
Class_10E89824* Class_10E89824::Init()
{
    *(void**)this = DAT_10e89824;
    return this;
}

// FUNCTION: 0x10B92690 ?FUN_10b92690@Class_10E89A10@@QAEXXZ
void Class_10E89A10::FUN_10b92690()
{
    Unknown00 = DAT_10e89a10;
    FUN_10b92c50();
}
