// Game/Class_10E6BBD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1098E330.h"
#include "Game/Class_10E6BBD0.h"
#include "Game/Class_Field04.h"
#include "Game/Class_10AF7F80.h"
#include "Game/cString.h"
#include "Game/Class_10A74DF0_Unknown00.h"

void FUN_10a4bae0(Class_10A74DF0_Unknown00** Out, cString* Text, int A, int B);

class Class_10A75680_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();

    char Pad04[0x20];
    Class_10AF7F80 Unknown24;
    char Unknown30[0x10];
    int Unknown40;
    int Unknown44;
};

// Game/Class_10F46DA0.h copied whole, with Virtual5 taking the ints the caller passes.
class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

extern char DAT_10e6bbd8[];

int FUN_10af3690(const char* A, const char* B);

// FUNCTION: 0x10A74DF0 ?FUN_10a74df0@Class_10E6BBD0@@QAEXH@Z
void Class_10E6BBD0::FUN_10a74df0(int A)
{
    FString Name;
    ((Class_Field04*)A)->FUN_1098e290(0x402a6, &Name);
    if (Name.Len() != 0)
    {
        cString Text(((Class_10AF7F80*)&Name)->FUN_10af7f80());
        Class_10A74DF0_Unknown00* Out;
        FUN_10a4bae0(&Out, &Text, A, 1);
        if (Out)
        {
            Out->Virtual2();
        }
    }
}

// FUNCTION: 0x10A75560 ?FUN_10a75560@Class_10E6BBD0@@QAEXH_N@Z
void Class_10E6BBD0::FUN_10a75560(int A, bool B)
{
    int Flag = 0;
    if (!(((Class_1098E330*)A)->FUN_1098e330(0x80064b, &Flag) && Flag))
    {
        FUN_10a74df0(A);
        if (B)
            FUN_10a74ec0(A);
    }
}

// FUNCTION: 0x10A75680 ?FUN_10a75680@Class_10E6BBD0@@QAEXHHH@Z
void Class_10E6BBD0::FUN_10a75680(int A, int B, int C)
{
    Class_10A75680_Param* Obj = (Class_10A75680_Param*)B;
    Class_10AF7F80* Name = Obj->Unknown40 ? &Obj->Unknown24 : 0;
    Class_10AF7F80* Part = Obj->Unknown44 ? (Class_10AF7F80*)Obj->Unknown30 : 0;
    Obj->Virtual5();
    if (FUN_10af3690(Name->FUN_10af7f80(), DAT_10e6bbd8))
        return;
    FUN_10a755b0(Part, A);
    DAT_10f46da0->Virtual5(0x2d, A, B, C);
}

// FUNCTION: 0x10A756F0 ?HandleEvent@Class_10E6BBD0@@UAEXHHHH@Z
void Class_10E6BBD0::HandleEvent(int Event, int A, int B, int C)
{
    switch (Event)
    {
    case 42:
    case 43:
        FUN_10a75680(A, B, C);
        break;
    case 36:
    case 37:
        FUN_10a75560(A, Event == 36);
        break;
    case 39:
        FUN_10a74c10(A);
        break;
    case 1:
        FUN_10a75190(A, B, C);
        break;
    }
}
