// Game/Unsorted_10C39220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10C3D050.h"
#include "Game/Class_10C3D0D0.h"
#include "Game/Class_10C3D340.h"
#include "Game/Class_10C3D350.h"
#include "Game/Class_10C3D3B0.h"
#include "Game/Class_10C3D3C0.h"
#include "Game/Class_10C3D3E0.h"
#include "Game/Class_10C3D3F0.h"
#include "Game/Class_10C3D420.h"
#include "Game/Class_10C3D440.h"
#include "Game/Class_10C3D560.h"
#include "Game/Class_10C3DD60.h"
#include "Game/Class_10C3DFE0.h"
#include "Game/Class_10C3F170.h"
#include "Game/Class_10E9B580.h"
#include "Game/CadenceManager.h"
#include "Game/Class_10C3E140.h"

extern void* DAT_10e9b020[];

extern void* DAT_10e9afd0[];

void FUN_10c3dee0();

extern int DAT_10ff70a4;

extern void* DAT_10e9b580[];

void GetCadenceManager();

void FUN_10c42440();

void FUN_10c43060();

extern void* DAT_10e9bb5c[];

struct Info_10C47FC0
{
    void* Unknown00;
    int Unknown04;
};

class Class_10E9BBC0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8(Info_10C47FC0* Info);
};

class CadenceFactory
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void FUN_10c47fc0(int Value);

    int FUN_10c47ea0();

    char Unknown04[0xC];
    Class_10E9BBC0 Unknown10;
    char Pad14[0x68];
    int Field7C;
};

// FUNCTION: 0x10C3D050 ?FUN_10c3d050@Class_10C3D050@@QAEXXZ
void Class_10C3D050::FUN_10c3d050()
{
    Field00 = (void*)DAT_10e9b020;
}

// FUNCTION: 0x10C3D0D0 ?FUN_10c3d0d0@Class_10C3D0D0@@QAEEXZ
unsigned char Class_10C3D0D0::FUN_10c3d0d0()
{
    return Field2c;
}

// FUNCTION: 0x10C3D340 ?FUN_10c3d340@Class_10C3D340@@QAEXXZ
void Class_10C3D340::FUN_10c3d340()
{
    Field18 = 1;
}

// FUNCTION: 0x10C3D350 ?FUN_10c3d350@Class_10C3D350@@QAEXXZ
void Class_10C3D350::FUN_10c3d350()
{
    Field18 = 0;
}

// FUNCTION: 0x10C3D3B0 ?FUN_10c3d3b0@Class_10C3D3B0@@UAEMXZ
float Class_10C3D3B0::FUN_10c3d3b0()
{
    return Field00;
}

// FUNCTION: 0x10C3D3C0 ?FUN_10c3d3c0@Class_10C3D3C0@@UAEMXZ
float Class_10C3D3C0::FUN_10c3d3c0()
{
    return Field04;
}

// FUNCTION: 0x10C3D3E0 ?FUN_10c3d3e0@Class_10C3D3E0@@UAEMXZ
float Class_10C3D3E0::FUN_10c3d3e0()
{
    return Field10;
}

// FUNCTION: 0x10C3D3F0 ?FUN_10c3d3f0@Class_10C3D3F0@@UAEMXZ
float Class_10C3D3F0::FUN_10c3d3f0()
{
    return Field14;
}

// FUNCTION: 0x10C3D420 ?FUN_10c3d420@Class_10C3D420@@QAEEXZ
unsigned char Class_10C3D420::FUN_10c3d420()
{
    return Field29;
}

// FUNCTION: 0x10C3D440 ?FUN_10c3d440@Class_10C3D440@@QAEEXZ
unsigned char Class_10C3D440::FUN_10c3d440()
{
    return Field2a;
}

// FUNCTION: 0x10C3D560 ?FUN_10c3d560@Class_10C3D560@@QAEXXZ
void Class_10C3D560::FUN_10c3d560()
{
    Field00 = (void*)DAT_10e9afd0;
}

// FUNCTION: 0x10C3DD60 ?FUN_10c3dd60@Class_10C3DD60@@UAEMXZ
float Class_10C3DD60::FUN_10c3dd60()
{
    return Field24;
}

// FUNCTION: 0x10C3DFE0 ?FUN_10c3dfe0@Class_10C3DFE0@@UAEMXZ
float Class_10C3DFE0::FUN_10c3dfe0()
{
    return Field30;
}

// FUNCTION: 0x10C3E120 ?FUN_10c3e120@@YAXXZ
void FUN_10c3e120()
{
    FUN_10c3dee0();
}

// FUNCTION: 0x10C3E140 ?IsActive@Class_10C3E140@@QAEEXZ
unsigned char Class_10C3E140::IsActive()
{
    return Field18;
}

// FUNCTION: 0x10C3E9E0 ?FUN_10c3e9e0@@YAHXZ
int FUN_10c3e9e0()
{
    return DAT_10ff70a4;
}

// FUNCTION: 0x10C3EFC0 ?FUN_10c3efc0@Class_10E9B580@@QAEXXZ
void Class_10E9B580::FUN_10c3efc0()
{
    Field00 = (void*)DAT_10e9b580;
}

// FUNCTION: 0x10C3F170 ?FUN_10c3f170@Class_10C3F170@@QAEEXZ
unsigned char Class_10C3F170::FUN_10c3f170()
{
    return Field20;
}

// FUNCTION: 0x10C3FBD0 ?FUN_10c3fbd0@@YAXXZ
void FUN_10c3fbd0()
{
    GetCadenceManager();
}

// FUNCTION: 0x10C42DD0 ?FUN_10c42dd0@@YAXXZ
void FUN_10c42dd0()
{
    FUN_10c42440();
}

// FUNCTION: 0x10C44930 ?FUN_10c44930@@YAXXZ
void FUN_10c44930()
{
    FUN_10c43060();
}

// FUNCTION: 0x10C47EA0 ?FUN_10c47ea0@CadenceFactory@@QAEHXZ
int CadenceFactory::FUN_10c47ea0()
{
    return Field7C;
}

// FUNCTION: 0x10C47FC0 ?FUN_10c47fc0@CadenceFactory@@UAEXH@Z
void CadenceFactory::FUN_10c47fc0(int Value)
{
    Info_10C47FC0 Info;
    Info.Unknown04 = Value;
    Info.Unknown00 = DAT_10e9bb5c;
    Class_10E9BBC0* Target = &Unknown10;
    Target->Virtual8(&Info);
}

// FUNCTION: 0x10C481F0 ?FUN_10c481f0@@YGHHHHH@Z
int __stdcall FUN_10c481f0(int p1, int p2, int p3, int p4)
{
    return 3;
}
