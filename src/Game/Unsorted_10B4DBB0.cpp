// Game/Unsorted_10B4DBB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include <math.h>
#include "Game/Class_10971570.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"
#include "Game/Class_10E7E898.h"
#include "Game/Struct_10B4C2C0.h"

class AGarrett;

class Class_10B39870;

struct Struct_10B3AF40_Param;

class Class_10B4DDC0_Unknown460
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

// Game/Struct_10B48890.h with Pad20 named: the vector the target zeroes.
struct Struct_10B48890
{
public:
    bool FUN_10b83ee0(Struct_10B4C2C0* A, int B);

    char Unknown00[0x14];
    Struct_10B4C2C0 Unknown14;
    FVector Unknown20;
    FVector Unknown2C;
    char Unknown38[4];
    float Unknown3C;
    char Pad40[0xc8];
    FVector Unknown108;
    bool Unknown114;
    char Pad115[0x3];
};

class AGarrett
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
    char Unknown38[0xC];
    FVector Unknown44;
    char Unknown50[0x2F4];
    int Unknown344;
    int Unknown348;
    int Unknown34C;
    FVector Unknown350;
    int Unknown35C;
    char Unknown360[0xE0];
    Class_10971570* Unknown440;
    char Unknown444[0x1C];
    Class_10B4DDC0_Unknown460* Unknown460;
    char Unknown464[0xEA];
    BYTE Unknown54E;
    BYTE Unknown54F;
    BYTE Unknown550;
};

class Class_10E7E970
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void FUN_10b4ddc0(AGarrett* Garrett);

    char Unknown04[4];
    int Unknown08;
    char Unknown0C[4];
    bool Unknown10;
    bool Unknown11;
};

int __cdecl WrapAngle(int Angle);

// FUNCTION: 0x10B4DDC0 ?FUN_10b4ddc0@Class_10E7E970@@UAEXPAVAGarrett@@@Z
void Class_10E7E970::FUN_10b4ddc0(AGarrett* Garrett)
{
    if (Garrett->Unknown440)
        Garrett->Unknown440->FUN_10971570(0x20000bd, &Unknown10);

    ((Class_10B396B0*)((Class_10AA82D0*)this)->GetLinkedObject())->ResetHandler(0x60 + (Unknown10 == 10));

    Unknown08 = 0x101;

    Struct_10B48890* S = ((Class_10E7E898*)this)->FUN_10b3af40((Struct_10B3AF40_Param*)Garrett);
    S->Unknown20 = FVector(0.0f, 0.0f, 0.0f);
    S->Unknown2C = FVector(0.0f, 0.0f, 0.0f);
    Garrett->Unknown44 = FVector(0.0f, 0.0f, 0.0f);

    ((Class_10B39530*)((Class_10AA82D0*)this)->GetLinkedObject())->Play(0, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);

    Garrett->Unknown54E = 2;
    Unknown11 = false;
    if (Unknown10 == 10)
    {
        Class_10B4DDC0_Unknown460* Other = Garrett->Unknown460;
        Garrett->Unknown550 = 1;
        FVector Dir;
        Dir.X = Other->Unknown2C.X - Garrett->Unknown2C.X;
        Dir.Y = Other->Unknown2C.Y - Garrett->Unknown2C.Y;
        Dir.Z = Other->Unknown2C.Z - Garrett->Unknown2C.Z;
        Dir.Normalize();
        Garrett->Unknown348 = 0;
        Garrett->Unknown344 = 0;
        Garrett->Unknown350 = FVector(-Dir.X, -Dir.Y, -Dir.Z) * 48.0f + Other->Unknown2C;
        Garrett->Unknown35C = WrapAngle((int)(atan2(Dir.Y, Dir.X) * 10430.060040584269));
    }
    else
    {
        Garrett->Unknown550 = 2;
    }
}
