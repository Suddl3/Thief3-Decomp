// Game/Unsorted_10BA0220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BA1270.h"
#include "Game/Class_10BA12F0.h"
#include "Game/Class_10C084A0.h"
#include "Game/Class_10E8C118.h"
#include "Game/FArchive.h"

extern Class_10BA1270* DAT_10ff6680;

struct Struct_10BA12F0
{
    char Unknown00[0xC];
    int Count;
    char Unknown10[4];
    void** Items;
};

class Class_10C074F0
{
public:
    void FUN_10c074f0(FArchive& Ar);
};

// FUNCTION: 0x10BA0DA0 ?FUN_10ba0da0@Class_10E8C118@@UAEXAAVFArchive@@@Z
void Class_10E8C118::FUN_10ba0da0(FArchive& Ar)
{
    if (Ar.Unknown0C >= 0x5E)
        Unknown2C->FUN_10c084a0(Ar);
    if (Ar.Unknown0C >= 0x66)
        Ar.Serialize(&UnknownB0, 1);
    if (Ar.Unknown0C >= 0x74)
        Unknown30->FUN_10c074f0(Ar);
}

// FUNCTION: 0x10BA1270 ?FUN_10ba1270@@YAXXZ
void FUN_10ba1270()
{
    if (DAT_10ff6680)
    {
        delete DAT_10ff6680;
        DAT_10ff6680 = 0;
    }
}

// FUNCTION: 0x10BA12F0 ?FUN_10ba12f0@Class_10BA12F0@@QAEXXZ
void Class_10BA12F0::FUN_10ba12f0()
{
    Index = -1;
    Current = 0;
    do {
        Index++;
        if (Index >= Container->Count) {
            Index = -1;
            return;
        }
        Current = Container->Items[Index];
    } while (Current == 0);
}
