// Game/Unsorted_10B4C0A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39870.h"
#include "Game/Struct_10B4C2C0.h"
#include "Game/Struct_10B48890.h"
#include "Game/Object_10B4CA50_A.h"

struct Struct_10B3AF40_Param;

struct Struct_10B48890;

class Class_10AA82D0
{
public:
    virtual void Virtual0();
    Class_10B39870* FUN_10aa82d0();
};

class Class_10E7E898 : public Class_10AA82D0
{
public:
    Struct_10B48890* FUN_10b3af40(Struct_10B3AF40_Param* A);
    virtual void FUN_10b4c2c0(Struct_10B3AF40_Param* A);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
};

class Object_10B4CA50_B
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(int A);
};

struct Struct_10AA3520
{
    char Unknown00[0x28];
    Object_10B4CA50_B* Unknown28;
    char Unknown2C[0x38];
    Object_10B4CA50_A* Unknown64;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E7EA00
{
public:
    virtual void __stdcall Virtual0();
    virtual void __stdcall Virtual1();
    virtual void __stdcall Virtual2();
    virtual void __stdcall FUN_10b4ca50();

    char Unknown04[0x43C];
    int Unknown440;
    int Unknown444;
    int Unknown448;
    int Unknown44C;
};

// FUNCTION: 0x10B4C2C0 ?FUN_10b4c2c0@Class_10E7E898@@UAEXPAUStruct_10B3AF40_Param@@@Z
void Class_10E7E898::FUN_10b4c2c0(Struct_10B3AF40_Param* A)
{
    Struct_10B4C2C0 Vec;
    FUN_10aa82d0()->FUN_10b39870(&Vec);
    Struct_10B48890* S = FUN_10b3af40(A);
    if (!S->FUN_10b83ee0(&Vec, 0))
        S->Unknown14 = Vec;
    Virtual4();
}

// FUNCTION: 0x10B4CA50 ?FUN_10b4ca50@Class_10E7EA00@@UAGXXZ
void __stdcall Class_10E7EA00::FUN_10b4ca50()
{
    Unknown44C = 0;
    if (Unknown440)
    {
        DAT_10f35dec->Unknown64->Virtual6(Unknown440);
        DAT_10f35dec->Unknown28->Virtual2(Unknown440);
    }
    Unknown440 = 0;
    if (Unknown444)
    {
        DAT_10f35dec->Unknown64->Virtual6(Unknown444);
        DAT_10f35dec->Unknown28->Virtual2(Unknown444);
    }
    Unknown444 = 0;
}
