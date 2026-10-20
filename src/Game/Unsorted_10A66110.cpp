// Game/Unsorted_10A66110.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10A69170.h"
#include "Game/Class_10A6A140.h"
#include "Game/Class_10E6B978.h"
#include "Game/cVolumeManager.h"
#include "Game/Class_10E6BBCC.h"
#include "Game/Class_10E6BBE8.h"

extern void* DAT_10e4dd6c[];

extern void* DAT_10e6b5a0[];

extern int DAT_10f11380;

class Class_10E6B5A0
{
public:
    Class_10E6B5A0* Init();
    int GetSizeBytes();

    void* VTable;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    union
    {
        int m_Items;
        int Field14;
    };
    int Unknown18;
    int m_Entries;
};

typedef void (*VFunc)(void);

void FUN_10a4c5f0();

extern void* DAT_10e6b978;

extern void* DAT_10e6bbcc[];

extern void* DAT_10e6bbe8[];

// FUNCTION: 0x10A68B30 ?Init@Class_10E6B5A0@@QAEPAV1@XZ
Class_10E6B5A0* Class_10E6B5A0::Init()
{
    VTable = DAT_10e4dd6c;
    Unknown04 = 0x10;
    Unknown0C = 1;
    Unknown10 = DAT_10f11380++;
    VTable = DAT_10e6b5a0;
    m_Items = 0;
    Unknown18 = 0;
    m_Entries = 0;
    return this;
}

// FUNCTION: 0x10A68B70 ?GetSizeBytes@Class_10E6B5A0@@QAEHXZ
int Class_10E6B5A0::GetSizeBytes()
{
    return Field14 << 4;
}

// FUNCTION: 0x10A69170 ?FUN_10a69170@Class_10A69170@@QAEXXZ
void Class_10A69170::FUN_10a69170()
{
    VFunc* vtable = (VFunc*)*(VFunc**)this;
    vtable[7]();
}

// FUNCTION: 0x10A6A140 ?FUN_10a6a140@Class_10A6A140@@QAEXXZ
void Class_10A6A140::FUN_10a6a140()
{
    Field04 = 1;
}

// FUNCTION: 0x10A6ADF0 ?FUN_10a6adf0@@YAXXZ
void FUN_10a6adf0()
{
    FUN_10a4c5f0();
}

// FUNCTION: 0x10A6DA70 ?FUN_10a6da70@Class_10E6B978@@QAEXXZ
void Class_10E6B978::FUN_10a6da70() {
    *(void**)this = &DAT_10e6b978;
    FUN_10a4c5f0();
}

// FUNCTION: 0x10A74820 ?Init@Class_10E6BBCC@@QAEPAV1@XZ
Class_10E6BBCC* Class_10E6BBCC::Init()
{
    Field00 = DAT_10e6bbcc;
    return this;
}

// FUNCTION: 0x10A757A0 ?FUN_10a757a0@Class_10E6BBE8@@QAEXXZ
void Class_10E6BBE8::FUN_10a757a0()
{
    *(void**)this = (void*)DAT_10e6bbe8;
    FUN_10a4c5f0();
}
