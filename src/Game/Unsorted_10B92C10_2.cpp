// Game/Unsorted_10B92C10_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E52230.h"
#include "Game/Class_10E89AF8.h"
#include "Game/Class_10E89C78.h"
#include "Game/Class_10E89DF8.h"

enum EInternal { EC_Internal };

inline void* operator new(unsigned int, EInternal* Mem)
{
    return Mem;
}

class UAI
{
public:
    UAI();
};

extern void* DAT_10e89af8[];

extern void* DAT_10e89c78[];

extern void* DAT_10e89df8[];

extern void* DAT_10e89f78[];

class Class_10E70A50
{
public:
    void** Unknown00;
};

class AActor : public Class_10E70A50
{
public:
    AActor* FUN_1098cf10();
};

class Class_10E89F78 : public AActor
{
public:
    Class_10E89F78* Construct();
};

extern void* DAT_10e8a0f0[];

class Class_10E8A0F0 : public AActor
{
public:
    Class_10E8A0F0* Construct();
};

extern void* DAT_10e8a268[];

class Class_10E8A268 : public AActor
{
public:
    Class_10E8A268* Construct();
};

// FUNCTION: 0x10B93400 ?ConstructUAI@@YAXPAX@Z
void ConstructUAI(void* Memory)
{
    new ((EInternal*)Memory) UAI();
}

// FUNCTION: 0x10B93410 ?Construct@Class_10E89AF8@@QAEPAV1@XZ
Class_10E89AF8* Class_10E89AF8::Construct()
{
    FUN_10994280();
    Unknown00 = DAT_10e89af8;
    return this;
}

// FUNCTION: 0x10B934B0 ?Construct@Class_10E89C78@@QAEPAV1@XZ
Class_10E89C78* Class_10E89C78::Construct()
{
    FUN_10994280();
    Unknown00 = DAT_10e89c78;
    return this;
}

// FUNCTION: 0x10B93550 ?Construct@Class_10E89DF8@@QAEPAV1@XZ
Class_10E89DF8* Class_10E89DF8::Construct()
{
    FUN_10994280();
    Unknown00 = DAT_10e89df8;
    return this;
}

// FUNCTION: 0x10B935F0 ?Construct@Class_10E89F78@@QAEPAV1@XZ
Class_10E89F78* Class_10E89F78::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e89f78;
    return this;
}

// FUNCTION: 0x10B93690 ?Construct@Class_10E8A0F0@@QAEPAV1@XZ
Class_10E8A0F0* Class_10E8A0F0::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e8a0f0;
    return this;
}

// FUNCTION: 0x10B93730 ?Construct@Class_10E8A268@@QAEPAV1@XZ
Class_10E8A268* Class_10E8A268::Construct()
{
    FUN_1098cf10();
    Unknown00 = DAT_10e8a268;
    return this;
}
