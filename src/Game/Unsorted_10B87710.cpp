// Game/Unsorted_10B87710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B90750_Item.h"
#include "Game/Struct_10B90750_Vec.h"

struct Struct_10D9E5E0_Param;

struct Struct_10B7C170;

class Class_10CAFD00;

class Class_10DA0870;

class Class_10DA91B0;

class Class_10DA91B0
{
public:
    Class_10DA91B0();
    ~Class_10DA91B0();

    void FUN_10da91d0();

    int Unknown00[6];
    Struct_10B90750_Vec Unknown18;
    char Pad24[0x8];
};

class Class_10D9B090
{
public:
    void FUN_10d9e5e0(Struct_10D9E5E0_Param* A);
    void FUN_10d9e490(Struct_10D9E5E0_Param* A);
    int FUN_10d9d640(int A, int B, int C, Struct_10B7C170* Out, int D);
    void FUN_10d9b090();
    void FUN_10d9b100();
    void FUN_10d9b1e0();
    void FUN_10d9d270(Class_10DA0870* A, Class_10DA91B0* B);

    char Unknown00[4];
    Class_10CAFD00* Unknown04;
    char Pad08[0xb0];
    bool UnknownB8;
};

Class_10D9B090* FUN_10d9dcb0();

class Class_10B87710
{
public:
    void FUN_10b87710();

    char Unknown00[0x10];
    Class_10B90750_Item* Unknown10;
    char Pad14[0x38];
    Class_10DA91B0 Unknown4C;
};

// FUNCTION: 0x10B87710 ?FUN_10b87710@Class_10B87710@@QAEXXZ
void Class_10B87710::FUN_10b87710()
{
    char Buffer[0x30];
    Struct_10B90750_Vec Pos = *Unknown10->FUN_10da0840(Buffer);
    Struct_10B90750_Vec* Dest = &Unknown4C.Unknown18;
    if (Pos.X != Dest->X || Pos.Y != Dest->Y || Pos.Z != Dest->Z)
    {
        Unknown4C.FUN_10da91d0();
        FUN_10d9dcb0()->FUN_10d9d270((Class_10DA0870*)Unknown10, &Unknown4C);
        *Dest = Pos;
    }
}
