// Game/Unsorted_10BBB8D0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB10.h"
#include "Game/cIntArray.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C26E80.h"
#include "Game/Class_10C28570.h"
#include "Game/Class_10DBD510.h"

class Class_10BFD710
{
public:
    void FUN_10bfd710();
    void FUN_10bfcd40(void* P);

    char Pad00[0x64];
};

class Class_10C276C0
{
public:
    void FUN_10c276c0();

    char Pad00[0x17C];
};

class Class_10C29540
{
public:
    void FUN_10c29540();
};

class Class_10BBB410
{
public:
    void FUN_10bb9f60(int A, int B);
    Class_10BFF460* FUN_10bbb410();
    void FUN_10bbb330();
    void FUN_10bbb540(int Item);
    int FUN_10bbb730();
    void FUN_10bb7c10();
    void FUN_10bb9260();
    void FUN_10bb88a0();
    void FUN_10bbc590();
    void FUN_10bbb8d0();
    void FUN_10bb8ae0();
    void FUN_10bba260();
    void FUN_10bb8740();
    void FUN_10bbd0a0();

    char Unknown00[8];
    Class_10DBD510* Unknown08;
    char Unknown0C[4];
    Class_10C29540* Unknown10;
    cIntArray Unknown14;
    char Unknown20[0xC];
    Class_10C28570* Unknown2C;
    Class_10BFD710 Unknown30;
    Class_10C276C0 Unknown94;
    Class_10BFF460* Unknown210;
};

// FUNCTION: 0x10BBD0A0 ?FUN_10bbd0a0@Class_10BBB410@@QAEXXZ
void Class_10BBB410::FUN_10bbd0a0()
{
    if (((Class_10BBDB10*)Unknown08->FUN_10dbd510())->FUN_10bbdb10(0x40800544) == 0)
    {
        Unknown30.FUN_10bfd710();
        Unknown94.FUN_10c276c0();
        FUN_10bb7c10();
    }
    Unknown2C->FUN_10c28570();
    FUN_10bb9260();
    if (Unknown210)
    {
        if (Unknown210->FUN_10bff460() != 1)
            FUN_10bbb330();
    }
    Class_10BFF460* Obj = Unknown210;
    if (Obj && !Obj->FUN_10bff460())
    {
        void* P = Obj->FUN_10bff2a0();
        if (P)
            Unknown30.FUN_10bfcd40(P);
    }
    for (int i = 0; i < Unknown14.Count; i++)
        ((Class_10C26E80*)Unknown14.Data[i])->FUN_10c26e80();
    FUN_10bb88a0();
    FUN_10bbc590();
    Unknown10->FUN_10c29540();
    FUN_10bbb8d0();
    FUN_10bb8ae0();
    FUN_10bba260();
    FUN_10bb8740();
}
