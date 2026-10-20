// Game/Class_10E9B088.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E9B020.h"
#include "Game/Class_10E9B088.h"
#include "Game/Class_10E9B0F8.h"
#include "Game/FArchive.h"

class Class_10E9B088_Unknown2C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Data);

// FUNCTION: 0x10C3D360 ??1Class_10E9B088@@UAE@XZ
Class_10E9B088::~Class_10E9B088()
{
    if (Unknown2C)
        Unknown2C->Virtual2();
}

// FUNCTION: 0x10C3D3D0 ?FUN_10c3d3d0@Class_10E9B088@@UAEPAHPAH@Z
int* Class_10E9B088::FUN_10c3d3d0(int* p1)
{
    *p1 = Unknown30;
    return p1;
}

// FUNCTION: 0x10C3D410 ?FUN_10c3d410@Class_10E9B088@@UAEXE@Z
void Class_10E9B088::FUN_10c3d410(unsigned char Value)
{
    Unknown29 = Value;
}

// FUNCTION: 0x10C3D540 ??_GClass_10E9B088@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10C3D360's definition in this unit.

// FUNCTION: 0x10C3DA10 ?FUN_10c3da10@Class_10E9B088@@QAEXH@Z
void Class_10E9B088::FUN_10c3da10(int A)
{
    FArchive& Ar = *(FArchive*)A;
    Ar.Serialize(&Unknown04, 4);
    Ar.Serialize(&Unknown08, 4);
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 4);
    Ar.Serialize(&Unknown18, 4);
    Ar.Serialize(&Unknown20, 4);
    Ar.Serialize(&m_Handle, 4);
    Ar.Serialize(&Unknown28, 1);
    Ar.Serialize(&Unknown29, 1);
    Ar.Serialize(&Unknown2A, 1);
    Ar.Serialize(&Unknown2B, 1);
    Virtual26(&Unknown2C, Ar);
    Ar.Virtual7(&Unknown30);
    Ar.Virtual6(&m_Manager);
    FUN_10b052a0(Ar, &Unknown38);
    if (Ar.Unknown0C >= 0x5b)
        Ar.Serialize(&Unknown1C, 4);
}
