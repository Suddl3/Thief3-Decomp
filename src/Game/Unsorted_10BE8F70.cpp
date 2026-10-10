// Game/Unsorted_10BE8F70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BE9140.h"
#include "Game/Class_10BEF120.h"
#include "Game/Class_10BF6BD0.h"

class Class_Field00_10be90e0
{
public:
    char Unknown00[0x114];
    void (*Field114)();
};

class Class_10E96D98
{
public:
    Class_Field00_10be90e0* Field00;
    void FUN_10be90e0();
};

extern void* DAT_10e96eb0[];

void FUN_10bc6a80();

class Class_10E96EB0
{
public:
    void* Field00;
    void FUN_10be91a0();
};

void FUN_10befed0();

// FUNCTION: 0x10BE90E0 ?FUN_10be90e0@Class_10E96D98@@QAEXXZ
void Class_10E96D98::FUN_10be90e0()
{
    Field00->Field114();
}

// FUNCTION: 0x10BE9140 ?FUN_10be9140@Class_10BE9140@@QAEXXZ
void Class_10BE9140::FUN_10be9140()
{
    Field44 = 1.5f;
}

// FUNCTION: 0x10BE9150 ?FUN_10be9150@@YAPAXXZ
void* FUN_10be9150()
{
    return (void*)(0x100351);
}

// FUNCTION: 0x10BE91A0 ?FUN_10be91a0@Class_10E96EB0@@QAEXXZ
void Class_10E96EB0::FUN_10be91a0()
{
    Field00 = (void*)DAT_10e96eb0;
    FUN_10bc6a80();
}

// FUNCTION: 0x10BE9210 ?FUN_10be9210@@YAHXZ
int FUN_10be9210()
{
    return 0x1006d0;
}

// FUNCTION: 0x10BE9AB0 ?FUN_10be9ab0@@YAHXZ
int FUN_10be9ab0()
{
    return 0x100350;
}

// FUNCTION: 0x10BE9BB0 ?FUN_10be9bb0@@YAHXZ
int FUN_10be9bb0()
{
    return 0x28;
}

// FUNCTION: 0x10BE9BC0 ?FUN_10be9bc0@@YAHXZ
int FUN_10be9bc0()
{
    return 0x1006ce;
}

// FUNCTION: 0x10BECFF0 ?FUN_10becff0@@YAHXZ
int FUN_10becff0()
{
    return 0x100353;
}

// FUNCTION: 0x10BED050 ?FUN_10bed050@@YAHXZ
int FUN_10bed050()
{
    return 0x100354;
}

// FUNCTION: 0x10BED0C0 ?FUN_10bed0c0@@YAHXZ
int FUN_10bed0c0()
{
    return 0x100355;
}

// FUNCTION: 0x10BED150 ?FUN_10bed150@@YAHXZ
int FUN_10bed150()
{
    return 0x100356;
}

// FUNCTION: 0x10BEF070 ?FUN_10bef070@@YAHXZ
int FUN_10bef070()
{
    return 0x35;
}

// FUNCTION: 0x10BEF120 ?FUN_10bef120@Class_10BEF120@@QAEXH@Z
void Class_10BEF120::FUN_10bef120(int Value)
{
    if (Value != Unknown160)
    {
        Unknown160 = Value;
        Unknown1FC = 0;
        Unknown16C = 0;
        Unknown164 = 0;
    }
}

// FUNCTION: 0x10BF0D60 ?FUN_10bf0d60@@YAXXZ
void FUN_10bf0d60()
{
    FUN_10befed0();
}

// FUNCTION: 0x10BF6A60 ?FUN_10bf6a60@@YAHXZ
int FUN_10bf6a60()
{
    return 0x34;
}

// FUNCTION: 0x10BF6BD0 ?FUN_10bf6bd0@Class_10BF6BD0@@QAEXXZ
void Class_10BF6BD0::FUN_10bf6bd0()
{
    Field60 = 1;
}
