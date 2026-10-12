// Game/Unsorted_10C592A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5B990.h"
#include "Game/Class_10C5F360.h"
#include "Game/Class_10C5F490.h"
#include "Game/Class_10C603D0.h"
#include "Game/Class_10C60D70.h"
#include "Game/Class_10C613E0.h"
#include "Game/Class_10C61E30.h"
#include "Game/Class_10C61E40.h"
#include "Game/Class_10C62A80.h"
#include "Game/Class_10C62D20.h"
#include "Game/Class_10C63A50.h"
#include "Game/Class_10C63AE0.h"
#include "Game/Class_10C63E90.h"
#include "Game/Class_10C63ED0.h"
#include "Game/Class_10C64AD0.h"
#include "Game/Class_10C663E0.h"
#include "Game/Class_10C664F0.h"
#include "Game/Class_10C66500.h"
#include "Game/Class_10C66510.h"
#include "Game/Class_10C66560.h"
#include "Game/Class_10C66590.h"
#include "Game/Class_10C665D0.h"
#include "Game/Class_10C665E0.h"
#include "Game/Class_10E5BEC4.h"
#include "Game/Class_10E74F70.h"
#include "Game/Class_10E9C828.h"
#include "Game/Class_10c665a0.h"
#include "Game/Class_10c665b0.h"
#include "Game/Class_Field00.h"
#include "Game/InnerClassAE0.h"
#include "Game/InnerClass_10c58e90.h"
#include "Game/InnerClass_10c5b910.h"
#include "Game/Struct_10C63E90.h"

class Class_10C592A0
{
public:
    char Unknown00[0xc];
    InnerClass_10c58e90 inner;

    void FUN_10c592a0();
};

extern void* DAT_10e9c828[];

void FUN_10d4e090();

extern void* DAT_10e65558[];

extern void* DAT_10ff7118;

class Class_10C63A50Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3(int A, int B);
};

void FUN_10c810a0();

void FUN_10c80ba0();

struct Data_10C63E90
{
    char Unknown00[0x24];
    Struct_10C63E90 Unknown24;
};

extern void* DAT_10ffc7a0;

extern void* DAT_10ffc7a4;

extern void* DAT_10f35f68;

extern void* DAT_10e9ce68;

void FUN_10c67f90();

void FUN_109f1460();

// FUNCTION: 0x10C5B990 ?FUN_10c5b990@Class_10C5B990@@QAEXXZ
void Class_10C5B990::FUN_10c5b990()
{
    inner.FUN_10c5b910();
}

// FUNCTION: 0x10C5CBC0 ?FUN_10c5cbc0@Class_10E9C828@@QAEXXZ
void Class_10E9C828::FUN_10c5cbc0()
{
    Field00 = (void*)DAT_10e9c828;
    FUN_10d4e090();
}

// FUNCTION: 0x10C5DB40 ?FUN_10c5db40@Class_10E5BEC4@@QAEEXZ
unsigned char Class_10E5BEC4::FUN_10c5db40()
{
    return Field0d;
}

// FUNCTION: 0x10C5F360 ?FUN_10c5f360@Class_10C5F360@@QAEXXZ
void Class_10C5F360::FUN_10c5f360()
{
    Field00 = (void*)DAT_10e65558;
}

// FUNCTION: 0x10C5F490 ?FUN_10c5f490@Class_10C5F490@@QAEHXZ
int Class_10C5F490::FUN_10c5f490()
{
    return *Field00;
}

// FUNCTION: 0x10C603D0 ?FUN_10c603d0@Class_10C603D0@@QAEXXZ
void Class_10C603D0::FUN_10c603d0()
{
    Field00->FUN_10c5fb90();
}

// FUNCTION: 0x10C60D70 ?FUN_10c60d70@Class_10C60D70@@QAEXH@Z
void Class_10C60D70::FUN_10c60d70(int p1)
{
    Field114 = 0;
}

// FUNCTION: 0x10C613E0 ?FUN_10c613e0@Class_10C613E0@@QAEPAXXZ
void* Class_10C613E0::FUN_10c613e0()
{
    return &unknown_138;
}

// FUNCTION: 0x10C61E30 ?FUN_10c61e30@Class_10C61E30@@QAEHXZ
int Class_10C61E30::FUN_10c61e30()
{
    return Field0FC;
}

// FUNCTION: 0x10C61E40 ?FUN_10c61e40@Class_10C61E40@@QAEHXZ
int Class_10C61E40::FUN_10c61e40()
{
    return Field104;
}

// FUNCTION: 0x10C62A80 ?FUN_10c62a80@Class_10C62A80@@QAEEXZ
unsigned char Class_10C62A80::FUN_10c62a80()
{
    return Field3c;
}

// FUNCTION: 0x10C62CB0 ?FUN_10c62cb0@@YAPAXXZ
void* FUN_10c62cb0()
{
    return *(void**)&DAT_10ff7118;
}

// FUNCTION: 0x10C62D20 ?FUN_10c62d20@Class_10C62D20@@QAEPAXXZ
void* Class_10C62D20::FUN_10c62d20() {
    return &unknown_38;
}

// FUNCTION: 0x10C63A50 ?FUN_10c63a50@Class_10C63A50@@QAEXHH@Z
void Class_10C63A50::FUN_10c63a50(int A, int B)
{
    Unknown08->Virtual3(A, B);
    Unknown2C = 0;
}

// FUNCTION: 0x10C63AE0 ?FUN_10c63ae0@Class_10C63AE0@@QAEXXZ
void Class_10C63AE0::FUN_10c63ae0()
{
    inner.FUN_10c5fb50();
}

// FUNCTION: 0x10C63D10 ?FUN_10c63d10@@YAXXZ
void FUN_10c63d10()
{
    FUN_10c810a0();
}

// FUNCTION: 0x10C63D40 ?FUN_10c63d40@@YAXXZ
void FUN_10c63d40()
{
    FUN_10c80ba0();
}

// FUNCTION: 0x10C63E90 ?FUN_10c63e90@Class_10C63E90@@QAE?AUStruct_10C63E90@@XZ
Struct_10C63E90 Class_10C63E90::FUN_10c63e90()
{
    return Unknown08->Unknown24;
}

// FUNCTION: 0x10C63ED0 ?FUN_10c63ed0@Class_10C63ED0@@QAEXH@Z
void Class_10C63ED0::FUN_10c63ed0(int Value)
{
    Field08->Class_10E74F70::FUN_10bfbb90(Value);
}

// FUNCTION: 0x10C663E0 ?FUN_10c663e0@Class_10C663E0@@QAEEXZ
unsigned char Class_10C663E0::FUN_10c663e0()
{
    return Field74;
}

// FUNCTION: 0x10C664F0 ?FUN_10c664f0@Class_10C664F0@@UAEMXZ
float Class_10C664F0::FUN_10c664f0()
{
    return Field4C;
}

// FUNCTION: 0x10C66500 ?FUN_10c66500@Class_10C66500@@UAEMXZ
float Class_10C66500::FUN_10c66500()
{
    return Field50;
}

// FUNCTION: 0x10C66510 ?FUN_10c66510@Class_10C66510@@QAEHXZ
int Class_10C66510::FUN_10c66510()
{
    return Field5c;
}

// FUNCTION: 0x10C66560 ?FUN_10c66560@Class_10C66560@@QAEHXZ
int Class_10C66560::FUN_10c66560()
{
    return Field68;
}

// FUNCTION: 0x10C66590 ?FUN_10c66590@Class_10C66590@@QAEHXZ
int Class_10C66590::FUN_10c66590()
{
    return Field6c;
}

// FUNCTION: 0x10C665A0 ?FUN_10c665a0@Class_10c665a0@@QAEPAXXZ
void* Class_10c665a0::FUN_10c665a0()
{
    return Field70;
}

// FUNCTION: 0x10C665B0 ?FUN_10c665b0@Class_10c665b0@@QAEPAXXZ
void* Class_10c665b0::FUN_10c665b0()
{
    return Field88;
}

// FUNCTION: 0x10C665D0 ?DecRef@Class_10C665D0@@QAEXXZ
void Class_10C665D0::DecRef()
{
    Field04--;
}

// FUNCTION: 0x10C665E0 ?FUN_10c665e0@Class_10C665E0@@QAEXXZ
void Class_10C665E0::FUN_10c665e0()
{
    Field00 = &DAT_10e9ce68;
    FUN_10d4e090();
}

// FUNCTION: 0x10C68060 ?FUN_10c68060@@YAXXZ
void FUN_10c68060()
{
    FUN_10c67f90();
}

// FUNCTION: 0x10C68B10 ?FUN_10c68b10@@YAXXZ
void FUN_10c68b10()
{
    FUN_109f1460();
}
