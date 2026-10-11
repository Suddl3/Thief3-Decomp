// Game/Unsorted_10C09200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C08960.h"
#include "Game/Class_10C093C0.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_10913D70.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10C08E90.h"

// The field at 0x10 of the object: a flag at 0x24 is read through it.
class Class_10C08960_Unknown10
{
public:
    char Unknown00[0x24];
    bool Unknown24;
};

extern void* DAT_10e97bbc[];

struct Item_10C091A0
{
    Item_10C091A0() : Unknown00(DAT_10e97bbc), Unknown04(DAT_10e47660), Unknown0C(0), Unknown10(0), Unknown14(0), Unknown18(0), Unknown1C(0), Unknown20(0x11), Unknown24(false) {}

    void* Unknown00;
    Class_10E97B00 Unknown04;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    bool Unknown24;
};

class Class_10C08E30
{
public:
    void FUN_10c08e30(int A);
    void FUN_10c09200(int A, Class_10913D70* B, int C, int* D, int E);

    char Unknown00[0x8];
    Class_10C08E90 Unknown08;
};

// FUNCTION: 0x10C09200 ?FUN_10c09200@Class_10C08E30@@QAEXHPAVClass_10913D70@@HPAHH@Z
void Class_10C08E30::FUN_10c09200(int A, Class_10913D70* B, int C, int* D, int E)
{
    Item_10C091A0 Item;
    ((Class_10913D70*)&Item.Unknown04)->FUN_10913d70(B);
    Item.Unknown20 = E;
    Item.Unknown10 = C;
    Item.Unknown14 = D[0];
    Item.Unknown0C = A;
    Item.Unknown18 = D[1];
    Item.Unknown1C = D[2];
    Item.Unknown24 = false;
    Unknown08.FUN_10c091a0(&Item);
    FUN_10c08e30(A);
}

// FUNCTION: 0x10C093C0 ?FUN_10c093c0@Class_10C093C0@@QAEXXZ
void Class_10C093C0::FUN_10c093c0()
{
    if (Unknown04)
    {
        if (Unknown04->Unknown08 && !Unknown04->Unknown10->Unknown24)
            Unknown04->FUN_10c08960();
        if (Unknown04->Unknown20)
        {
            delete Unknown04;
            Unknown04 = 0;
        }
    }
}
