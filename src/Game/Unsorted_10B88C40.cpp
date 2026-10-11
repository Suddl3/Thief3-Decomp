// Game/Unsorted_10B88C40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_1098E3D0.h"
#include "Game/Class_109A6AA0.h"
#include "Game/Class_10E89458.h"
#include "Game/Class_10E89478.h"
#include "Game/Class_10C49740.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"

struct Struct_10E89478_Unknown08
{
    char Unknown00[4];
    Class_1098E3D0* Unknown04;
};

struct Struct_10B89760_Param
{
    FVector Unknown00;
    FVector Unknown0C;
    FVector Unknown18;
    INT Unknown24;
    INT Unknown28;
    INT Unknown2C;
    INT Unknown30;
    INT Unknown34;
};

Class_10905A90_Member* FUN_10905aa0();

extern const char DAT_10e47660[];

extern bool DAT_10ffc854;

extern "C" char* _strlwr(char* String);

int FUN_10d39b30();

void FUN_10d39510(const char* Text, int Code, int Value);

class Class_1091ABB0
{
public:
    Class_109081E0 FUN_1091abb0();
};

class Class_10B89070 : public Class_10C49740
{
public:
    Entry_10C32C30* FUN_10b88e80(Class_1091ABB0* Arg);
    Entry_10C32C30* FUN_10b89070(Class_1091ABB0* Arg);
};

// FUNCTION: 0x10B89070 ?FUN_10b89070@Class_10B89070@@QAEPAUEntry_10C32C30@@PAVClass_1091ABB0@@@Z
Entry_10C32C30* Class_10B89070::FUN_10b89070(Class_1091ABB0* Arg)
{
    Entry_10C32C30* Found = 0;
    {
        Class_109081E0 Name = Arg->FUN_1091abb0();
        if (Name.Unknown00)
        {
            _strlwr(Name.Unknown00);
        }
        if (FUN_10c49740((int*)&Name, &Found))
        {
            if (DAT_10ffc854)
            {
                int Result = FUN_10d39b30();
                FUN_10d39510(*Name, 6, Result);
            }
        }
        else
        {
            return FUN_10b88e80(Arg);
        }
    }
    return Found;
}

// FUNCTION: 0x10B89280 ?FUN_10b89280@Class_10E89458@@UAE_NPAV1@@Z
bool Class_10E89458::FUN_10b89280(Class_10E89458* Other)
{
    FVector A = Unknown10;
    FVector B = Other->Unknown10;
    Class_109A6AA0 D;
    D.Unknown00 = B.X - A.X;
    D.Unknown04 = B.Y - A.Y;
    D.Unknown08 = B.Z - A.Z;
    return D.FUN_109a6aa0() != 0;
}

// FUNCTION: 0x10B89760 ?FUN_10b89760@Class_10E89478@@UAEXXZ
void Class_10E89478::FUN_10b89760()
{
    Struct_10B89760_Param Param;
    Param.Unknown00 = FVector(-1.0f, -1.0f, -1.0f);
    if (Unknown0C > 0)
        Param.Unknown00 = Unknown14[0];
    Param.Unknown0C = Unknown18;
    Param.Unknown18 = Unknown24;
    Param.Unknown24 = Unknown30;
    Param.Unknown28 = Unknown34;
    Param.Unknown2C = Unknown38;
    Param.Unknown30 = Unknown3C;
    Param.Unknown34 = Unknown40;
    Unknown08->Unknown04->FUN_1098e3d0(0x80706, &Param);
}
