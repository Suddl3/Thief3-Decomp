// Game/Unsorted_10952740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10939570.h"
#include "Game/Class_10953590.h"
#include "Game/Struct_109528B0.h"

extern int DAT_10f3419c;

extern int DAT_10f341a0;

class Class_10955C30
{
public:
    void FUN_10955c30();
    void FUN_10956110(int A);

    char Unknown00[0x18];
};

class Class_109528B0
{
public:
    void FUN_109528b0();

    char Unknown00[0x90];
    Class_10955C30 Unknown90;
    Struct_109528B0* UnknownA8;
};

class Class_10953590;

extern Class_10939570* DAT_10f323fc;

// FUNCTION: 0x109528B0 ?FUN_109528b0@Class_109528B0@@QAEXXZ
void Class_109528B0::FUN_109528b0()
{
    int Type = UnknownA8->Unknown30;
    if (Type == DAT_10f3419c || Type == DAT_10f341a0)
    {
        Unknown90.FUN_10955c30();
        Unknown90.FUN_10956110(0);
    }
}

// FUNCTION: 0x10953590 ?FUN_10953590@Class_10953590@@QAEXXZ
void Class_10953590::FUN_10953590()
{
    DAT_10f323fc->FUN_1093bce0(this);
    Virtual11();
}
