// Game/Unsorted_10AB5AE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AC14F0.h"
#include "Game/Class_10AC2600.h"
#include "Game/Class_10AC3BF0.h"
#include "Game/Class_10E6F388.h"
#include "Game/Class_10E6F4B4.h"
#include "Game/Object_10AB5B20.h"
#include "Game/Struct_10AC1830.h"
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10AC1830.h"

void FUN_10dd3d40();

extern void* DAT_10e6f388[];

extern void* DAT_10e6f47c[];

void FUN_10abb760();

class Class_10E6F47C
{
public:
    void* Field00;
    void FUN_10abb8f0();
};

extern void* DAT_10e6f4b4[];

extern void* DAT_10f3a3e4;

class Class_10E6F910
{
public:
    char Unknown00[1536];
    void* Unknown600;
    void* FUN_10ac1490();
};

void FUN_10ac2fb0();

// FUNCTION: 0x10AB5B20 ?FUN_10ab5b20@Class_10AB5B20@@QAE?AV1@XZ
Class_10AB5B20 Class_10AB5B20::FUN_10ab5b20()
{
    return *this;
}

// FUNCTION: 0x10ABA160 ?FUN_10aba160@@YAXXZ
void FUN_10aba160()
{
    FUN_10dd3d40();
}

// FUNCTION: 0x10ABA190 ?FUN_10aba190@Class_10E6F388@@QAEXXZ
void Class_10E6F388::FUN_10aba190()
{
    Field00 = (void*)DAT_10e6f388;
}

// FUNCTION: 0x10ABB8F0 ?FUN_10abb8f0@Class_10E6F47C@@QAEXXZ
void Class_10E6F47C::FUN_10abb8f0()
{
    Field00 = (void*)DAT_10e6f47c;
    FUN_10abb760();
}

// FUNCTION: 0x10ABB9D0 ?FUN_10abb9d0@Class_10E6F4B4@@QAEXXZ
void Class_10E6F4B4::FUN_10abb9d0()
{
    Field00 = (void*)DAT_10e6f4b4;
    FUN_10abb760();
}

// FUNCTION: 0x10ABC120 ?FUN_10abc120@@YAPAXXZ
void* FUN_10abc120()
{
    return DAT_10f3a3e4;
}

// FUNCTION: 0x10ABC130 ?FUN_10abc130@@YAXPAX@Z
void FUN_10abc130(void* p)
{
    DAT_10f3a3e4 = p;
}

// FUNCTION: 0x10AC1490 ?FUN_10ac1490@Class_10E6F910@@QAEPAXXZ
void* Class_10E6F910::FUN_10ac1490()
{
    return Unknown600;
}

// FUNCTION: 0x10AC14F0 ?FUN_10ac14f0@Class_10AC14F0@@QAEXHHH_N@Z
void Class_10AC14F0::FUN_10ac14f0(int A, int B, int C, bool D)
{
    Unknown608 = A;
    Unknown60C = B;
    Unknown610 = C;
    Unknown614 = D;
    Unknown615 = true;
    Unknown604 = Unknown44;
}

// FUNCTION: 0x10AC1830 ?FUN_10ac1830@Class_10AC1830@@QAE?AUStruct_10AC1830@@XZ
Struct_10AC1830 Class_10AC1830::FUN_10ac1830()
{
    return UnknownE0;
}

// FUNCTION: 0x10AC2600 ?FUN_10ac2600@Class_10AC2600@@QAEEXZ
unsigned char Class_10AC2600::FUN_10ac2600()
{
    return Field14;
}

// FUNCTION: 0x10AC3BF0 ?FUN_10ac3bf0@Class_10AC3BF0@@QAEEXZ
unsigned char Class_10AC3BF0::FUN_10ac3bf0()
{
    return Field40;
}

// FUNCTION: 0x10AC44B0 ?FUN_10ac44b0@@YAXXZ
void FUN_10ac44b0()
{
    FUN_10ac2fb0();
}
