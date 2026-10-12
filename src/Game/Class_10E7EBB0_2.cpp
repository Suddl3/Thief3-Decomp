// Game/Class_10E7EBB0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include "Game/Class_109B6D50.h"
#include "Game/Class_10B39530.h"
#include "Game/Class_10B396B0.h"
#include "Game/Class_10B398B0.h"

extern const char DAT_10e7a624[];

class Class_10B39870;

struct Struct_10B21820_Object;

// Copied from include/Game/Class_10AA82D0.h with the return type the symbol has.
class Class_10AA82D0
{
public:
    virtual void Virtual0();

    Class_10B39870* FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10B21820
{
public:
    Struct_10B21820_Object* FUN_10991e10();

    char Unknown00[0x37C];
    int Unknown37C;
    char Unknown380[0x1CE];
    bool Unknown54E;
};

class Class_10E7EBB0 : public Class_10AA82D0
{
public:
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void FUN_10b4e380(Class_10B21820* A);

    char Unknown10;
};

// FUNCTION: 0x10B4E380 ?FUN_10b4e380@Class_10E7EBB0@@UAEXPAVClass_10B21820@@@Z
void Class_10E7EBB0::FUN_10b4e380(Class_10B21820* A)
{
    A->Unknown54E = false;
    if (Unknown08 != 0x101)
    {
        ((Class_10B396B0*)FUN_10aa82d0())->FUN_10b396b0(Unknown08);
        Unknown08 = 0x101;
    }
    ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(0x60 + (Unknown10 == 10), -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    ((Class_10B398B0*)FUN_10aa82d0())->FUN_10b398b0(0);
    Struct_10B21820_Object* Obj = A->FUN_10991e10();
    {
        cString Name(DAT_10e7a624);
        ((Class_109B6D50*)Obj)->FUN_109c33f0(A->Unknown37C, Name);
    }
    Unknown08 = 0x101;
}
