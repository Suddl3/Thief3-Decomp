// Game/Unsorted_10B87610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10B87610.h"

extern void* DAT_10e89384[];

extern void* DAT_10e893b0[];

// The root: its destructor only restores its vtable (0x10B87530).
class Class_10E89384
{
public:
    Class_10E89384(int A) : Unknown04(A), Unknown08(0) {}
    ~Class_10E89384() { Unknown00 = DAT_10e89384; }

    void** Unknown00;
    int Unknown04;
    int Unknown08;
};

// The base this constructor builds first (state 0); its implicit destructor is the same code as
// ~Class_10E89384, which the linker folded into 0x10B87530.
class Class_10E893B0 : public Class_10E89384
{
public:
    Class_10E893B0(int A) : Class_10E89384(A)
    {
        Unknown00 = DAT_10e893b0;
        Unknown0C = 7;
        Unknown10 = 0;
        Unknown14 = 0;
        Unknown18 = 0;
        Unknown1C = 0;
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown28 = 0;
        Unknown2C = 0;
        Unknown30 = 0;
        Unknown34 = 0;
        Unknown38 = 0;
        Unknown3C = 0;
    }

    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
};

// Two arrays (0x18 bytes): FUN_10da91b0 zeroes them, FUN_10da91d0 empties both.
class Class_10DA91B0
{
public:
    Class_10DA91B0();
    ~Class_10DA91B0();

    void FUN_10da91d0();

    int Unknown00[6];
};

class Class_10B87610 : public Class_10E893B0
{
public:
    Class_10B87610(int A);

    Struct_10B87610 Unknown40;
    Class_10DA91B0 Unknown4C;
    Struct_10B87610 Unknown64;
    int Unknown70;
    int Unknown74;
    int Unknown78;
};

// FUNCTION: 0x10B87610 ??0Class_10B87610@@QAE@H@Z
Class_10B87610::Class_10B87610(int A) : Class_10E893B0(A), Unknown70(0), Unknown74(0), Unknown78(0)
{
    Unknown4C.FUN_10da91d0();
}
