// Game/Unsorted_10A76260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A7EF00.h"
#include "Game/Class_10A81FD0.h"
#include "Game/Class_10E6BD60.h"
#include "Game/Class_10E6BE98.h"
#include "Game/Class_10E6C050.h"
#include "Game/Class_10E6C1F0.h"
#include "Game/Class_10E6C390.h"

extern void* DAT_10e6bc44[];

void FUN_10a4c5f0();

class Class_10E6BC44
{
public:
    void* Field00;
public:
    void FUN_10a76750();
};

extern void* DAT_10e6bd60[];

extern void* DAT_10e6be98[];

extern int DAT_10e6becc;

extern void* DAT_10e6c050[];

class Member {
public:
    virtual void F0() = 0;
    virtual void F1() = 0;
    virtual void F2() = 0;
    virtual void F3() = 0;
    virtual void F4() = 0;
};

// FUNCTION: 0x10A76750 ?FUN_10a76750@Class_10E6BC44@@QAEXXZ
void Class_10E6BC44::FUN_10a76750()
{
    Field00 = (void*)DAT_10e6bc44;
    FUN_10a4c5f0();
}

// FUNCTION: 0x10A797F0 ?FUN_10a797f0@Class_10E6BD60@@QAEXXZ
void Class_10E6BD60::FUN_10a797f0()
{
    Field00 = (void*)DAT_10e6bd60;
}

// FUNCTION: 0x10A7D9B0 ?FUN_10a7d9b0@Class_10E6BE98@@QAEPAV1@XZ
Class_10E6BE98* Class_10E6BE98::FUN_10a7d9b0()
{
    *(void**)this = DAT_10e6be98;
    return this;
}

// FUNCTION: 0x10A7DD70 ?FUN_10a7dd70@@YAPAXXZ
void* FUN_10a7dd70()
{
    return (void*)&DAT_10e6becc;
}

// FUNCTION: 0x10A7EF00 ?FUN_10a7ef00@Class_10A7EF00@@QAEEXZ
unsigned char Class_10A7EF00::FUN_10a7ef00()
{
    return Field07;
}

// FUNCTION: 0x10A80B90 ?FUN_10a80b90@Class_10E6C050@@QAEXXZ
void Class_10E6C050::FUN_10a80b90()
{
    Field00 = (void*)DAT_10e6c050;
}

// FUNCTION: 0x10A80C70 ?FUN_10a80c70@Class_10E6C1F0@@QAEXE@Z
void Class_10E6C1F0::FUN_10a80c70(unsigned char param)
{
    Field4c = param;
}

// FUNCTION: 0x10A80C80 ?FUN_10a80c80@Class_10E6C1F0@@QAEXXZ
void Class_10E6C1F0::FUN_10a80c80()
{
    Field10->F4();
}

// FUNCTION: 0x10A81FD0 ?FUN_10a81fd0@Class_10A81FD0@@QAEPAXXZ
void* Class_10A81FD0::FUN_10a81fd0()
{
    return &unknown_34;
}

// FUNCTION: 0x10A84E50 ?FUN_10a84e50@Class_10E6C390@@QAEXXZ
void Class_10E6C390::FUN_10a84e50()
{
    Field14 = 1;
}
