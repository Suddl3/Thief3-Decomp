// Game/Class_10E9313C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cString.h"
#include "Game/Class_10E9313C.h"
#include "Game/Class_10E97B00.h"
#include "Game/Class_10BD0960.h"
#include "Game/Class_10C1A690.h"
#include "Game/Object_10BFBD00.h"
#include "Game/FArchive.h"

void FUN_10c11ff0(FArchive& Ar, int* Value);

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

void* FUN_10b232e0(void* A, void* B);

class Class_10FF667C
{
public:
    char Unknown00[0x18];
    Object_10BFBD00* Unknown18;
};

extern Class_10FF667C* DAT_10ff667c;

// FUNCTION: 0x10BD0190 ?ClearIfEqual@Class_10E9313C@@UAEXH@Z
void Class_10E9313C::ClearIfEqual(int p1)
{
    if (p1 == Unknown1c)
        Unknown1c = 0;
}

// FUNCTION: 0x10BD06A0 ??0Class_10E9313C@@QAE@XZ
Class_10E9313C::Class_10E9313C()
    : Unknown04(0), Unknown08(DAT_10e47660), Unknown10(0.0f, 0.0f, 0.0f), Unknown1C(0), Unknown20(0), Unknown24(0.5f),
      Unknown28(20), Unknown2C(1), Unknown30(false), Unknown34(DAT_10e47660), Unknown38(false)
{
}

// FUNCTION: 0x10BD0B10 ??0Class_10E9313C@@QAE@ABV0@@Z
Class_10E9313C::Class_10E9313C(const Class_10E9313C& Other)
    : Unknown04(Other.Unknown04), Unknown08(Other.Unknown08), Unknown10(Other.Unknown10), Unknown1C(Other.Unknown1C),
      Unknown20(Other.Unknown20), Unknown24(Other.Unknown24), Unknown28(Other.Unknown28), Unknown2C(Other.Unknown2C),
      Unknown30(Other.Unknown30), Unknown34(Other.Unknown34), Unknown38(Other.Unknown38)
{
}

// FUNCTION: 0x10BD1240 ?Serialize@Class_10E9313C@@UAEXAAVFArchive@@@Z
void Class_10E9313C::Serialize(FArchive& Ar)
{
    FUN_10c11ff0(Ar, &Unknown04);
    Unknown08.Serialize(&Ar);
    FUN_10b052a0(Ar, &Unknown10);
    DAT_10ff667c->Unknown18->Virtual1(Ar, &Unknown1C);
    BYTE Flag = Unknown20;
    Ar.Serialize(&Flag, 1);
    if (Ar.Unknown14)
        Unknown20 = Flag;
    Ar.Serialize(&Unknown24, 4);
    BYTE Flag2 = Unknown28;
    Ar.Serialize(&Flag2, 1);
    if (Ar.Unknown14)
        Unknown28 = Flag2;
    Ar.Serialize(&Unknown2C, 4);
    Ar.Serialize(&Unknown30, 1);
    FUN_10b232e0(&Ar, &Unknown34);
    if (Ar.Unknown0C >= 0x65)
        Ar.Serialize(&Unknown38, 1);
}
