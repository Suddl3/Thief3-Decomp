// Game/Class_10E96D98_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C7D570.h"

struct Struct_10BC4240_Param;

class Class_10BE9720_Unknown40
{
public:
    char Unknown00[0x2C];
    FVector Unknown2C;
};

struct Struct_10BE9720_Target
{
    char Unknown00[0x2C];
    FVector Unknown2C;
};

class Class_10E96D98
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
    virtual void FUN_10be9720();

    void FUN_10be94c0();
    void FUN_10bc5b50();
    Struct_10BC4240_Param* FUN_10bca700();
    void FUN_10bc4240(Struct_10BC4240_Param* Param, bool A);
    Struct_10BC4240_Param* FUN_10bc58f0(int A, int B, int C);

    Class_10BBB410* Unknown04;
    char Unknown08[0x38];
    Class_10BE9720_Unknown40* Unknown40;
};

// FUNCTION: 0x10BE9720 ?FUN_10be9720@Class_10E96D98@@UAEXXZ
void Class_10E96D98::FUN_10be9720()
{
    if (Unknown40 == 0)
    {
        FUN_10bc5b50();
        return;
    }
    FUN_10be94c0();
    Struct_10BC4240_Param* P = 0;
    Class_10BFF460* Obj = Unknown04->FUN_10bbb410();
    Class_10BE9720_Unknown40* O = Unknown40;
    if (Obj && O != Obj->FUN_10bff2a0())
    {
        Struct_10BE9720_Target* T = (Struct_10BE9720_Target*)Unknown04->Unknown08->FUN_10c7d570();
        FVector Delta = T->Unknown2C - O->Unknown2C;
        float R = Unknown04->Unknown08->FUN_10dbd510(0x10069a)->FUN_10bbdb40() * 16.0f;
        if (Delta.X * Delta.X + Delta.Y * Delta.Y + Delta.Z * Delta.Z <= R * R)
            P = FUN_10bc58f0(0, 0, 1);
    }
    if (!P)
    {
        P = FUN_10bca700();
        if (!P)
            return;
    }
    FUN_10bc4240(P, false);
}
