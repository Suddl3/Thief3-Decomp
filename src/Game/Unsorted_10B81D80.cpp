// Game/Unsorted_10B81D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B822C0.h"
#include "Game/Struct_10B859B0_0C.h"
#include "Game/Struct_10B859B0_Vector.h"
#include "Game/Class_10B859B0.h"
#include "Game/Struct_10B859B0_Rotation.h"
#include "Game/Struct_10B859B0_Transform.h"
#include "Game/Allocator_10FFA700.h"
#include "Core/Core.h"
#include "Core/CoreClasses.h"

typedef unsigned char BYTE;

class Class_10B822C0_Member
{
public:
    char Unknown00[0x28];
    unsigned int Unknown28;
};

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B83820
{
public:
    void FreeBuffer();

    void* m_Buffer;
    int m_Count;
    unsigned m_Capacity : 31;
    unsigned Unknown08Flag : 1;
};

extern float DAT_11006e34;

struct Struct_10B81F40_Src
{
    FPlane Unknown00[3];
    FVector Unknown30;
    unsigned char Unknown3C;
    unsigned char Unknown3D;
    char Unknown3E[2];
    int Unknown40;
    int Unknown44;
    char Unknown48[8];
    FVector Unknown50;
};

struct Struct_10B81F40_Src2
{
    char Unknown00[0x30];
    int Unknown30;
    int Unknown34;
    int Unknown38;
    unsigned char Unknown3C;
    unsigned char Unknown3D;
    char Unknown3E[6];
    unsigned char Unknown44;
    char Unknown45[0xB];
    FVector Unknown50;
};

struct Struct_10B81F40_Dst
{
    FVector Unknown00[3];
    FVector Unknown24;
    int Unknown30;
    int Unknown34;
    unsigned char Unknown38;
    unsigned char Unknown39;
    FVector Unknown3C;
    unsigned char Unknown48;
    char Unknown49[3];
    int Unknown4C;
    int Unknown50;
    int Unknown54;
};

// FUNCTION: 0x10B81F40 ?FUN_10b81f40@@YAXPAUStruct_10B81F40_Src@@PAUStruct_10B81F40_Dst@@PAUStruct_10B81F40_Src2@@@Z
void FUN_10b81f40(Struct_10B81F40_Src* Src, Struct_10B81F40_Dst* Dst, Struct_10B81F40_Src2* Src2)
{
    Dst->Unknown00[0] = FVector(Src->Unknown00[0].X, Src->Unknown00[0].Y, Src->Unknown00[0].Z) * DAT_11006e34;
    Dst->Unknown00[1] = FVector(Src->Unknown00[1].X, Src->Unknown00[1].Y, Src->Unknown00[1].Z) * DAT_11006e34;
    Dst->Unknown00[2] = FVector(Src->Unknown00[2].X, Src->Unknown00[2].Y, Src->Unknown00[2].Z) * DAT_11006e34;
    Dst->Unknown24 = FVector(Src->Unknown30.X, Src->Unknown30.Y, Src->Unknown30.Z);
    Dst->Unknown30 = Src->Unknown40;
    Dst->Unknown34 = Src->Unknown44;
    Dst->Unknown38 = Src2->Unknown3D;
    Dst->Unknown39 = Src2->Unknown44;
    Dst->Unknown3C = FVector(Src2->Unknown50.X, Src2->Unknown50.Y, Src2->Unknown50.Z);
    Dst->Unknown48 = Src2->Unknown3C;
    Dst->Unknown4C = Src2->Unknown30;
    Dst->Unknown50 = Src2->Unknown34;
    Dst->Unknown54 = Src2->Unknown38;
}

// FUNCTION: 0x10B822C0 ?FUN_10b822c0@Class_10B822C0@@QAEHXZ
int Class_10B822C0::FUN_10b822c0()
{
    if (Unknown8C)
        return Unknown8C->Unknown28 & 0x1F;
    return 0;
}

// FUNCTION: 0x10B83820 ?FreeBuffer@Class_10B83820@@QAEXXZ
void Class_10B83820::FreeBuffer()
{
    if (!Unknown08Flag)
    {
        Allocator_10FFA700* Allocator = DAT_10ffa700;
        Allocator->Free(m_Buffer, m_Capacity * 16, 0x11);
    }
}

// FUNCTION: 0x10B859B0 ?Reset@Class_10B859B0@@QAEPAV1@XZ
Class_10B859B0* Class_10B859B0::Reset()
{
    Unknown0C.Struct_10B859B0_0C::Struct_10B859B0_0C();
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    m_Transform.SetIdentity();
    return this;
}
