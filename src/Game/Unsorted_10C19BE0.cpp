// Game/Unsorted_10C19BE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10B9BDA0_Member.h"
#include "Game/Class_10FF667C.h"

extern Class_10FF667C* DAT_10ff667c;

struct Struct_10BBB620
{
public:
    char Unknown00[0xC];
    void* Unknown0C;
    char Unknown10[0x8];
    int Unknown18;
    int Unknown1C;
    int Unknown20;
};

// The object the third argument points at; the local one has the same type.
class Class_10C19E40_C
{
public:
    Class_10C19E40_C()
    {
        Unknown00 = 0;
        Unknown28 = 0;
        Unknown2C = -1;
        Unknown30 = -1;
        Unknown38 = 0;
        Unknown60 = 0;
        Unknown64 = -1;
        Unknown68 = -1;
    }

    int Unknown00;
    char Unknown04[0x24];
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    char Unknown34[0x4];
    int Unknown38;
    char Unknown3C[0x24];
    int Unknown60;
    int Unknown64;
    int Unknown68;
    int Unknown6C;
};

bool FUN_10a4abf0(Struct_10BBB620* A, void* B, void* C, unsigned int D, cIntArray* E);

// FUNCTION: 0x10C19E40 ?FUN_10c19e40@@YAHPAXPAUStruct_10BBB620@@H@Z
int __cdecl FUN_10c19e40(void* A, Struct_10BBB620* B, int C)
{
    DAT_10ff667c->Unknown14->Virtual7();

    unsigned int Flags = 0x10000000;
    if (B->Unknown18 & 1)
        Flags = 0x10000005;
    if (B->Unknown18 & 2)
        Flags |= 0x2;
    if (B->Unknown18 & 8)
        Flags |= 0x10;
    if (B->Unknown18 & 0x10)
        Flags |= 0x20;
    if (B->Unknown18 & 4)
        Flags |= 0x100;
    if (B->Unknown18 & 0x20)
        Flags |= 0x200;
    if (B->Unknown18 & 0x40)
        Flags |= 0x400;

    cIntArray Array;
    if (B->Unknown1C)
    {
        Array.SetCount(1);
        Array.Data[0] = B->Unknown1C;
    }
    if (B->Unknown20)
    {
        int Index = Array.Count;
        Array.SetCount(Index + 1);
        Array.Data[Index] = B->Unknown20;
    }

    int Result = 0;
    Class_10C19E40_C Local;
    Class_10C19E40_C* Target = C ? (Class_10C19E40_C*)C : &Local;

    if (FUN_10a4abf0(B, &B->Unknown0C, Target, Flags, &Array))
    {
        int Value = Target->Unknown38;
        if (Value)
            Result = Value;
    }
    return Result;
}
