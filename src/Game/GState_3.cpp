// Game/GState_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B39870.h"

extern float DAT_10eafbdc;

struct Struct_10B4C2C0
{
    float X;
    float Y;
    float Z;
};

struct Struct_10B48890
{
public:
    bool FUN_10b83ee0(Struct_10B4C2C0* A, int B);

    char Unknown00[0x14];
    Struct_10B4C2C0 Unknown14;
    char Pad20[0xc];
    FVector Unknown2C;
    char Unknown38[4];
    float Unknown3C;
    char Pad40[0xc8];
    FVector Unknown108;
    bool Unknown114;
    char Pad115[0x3];
};

class Class_10B3AF60_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Struct_10B48890* Virtual6();
};

class Class_10B3AF60_A
{
public:
    char Unknown00[0xb0];
    Class_10B3AF60_Unknown0B0* Unknown0B0;
};

class GState
{
public:
    virtual void Virtual0();
    virtual void Update(int p1);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();

    bool ApplyAnimMotion(int A);

    char Pad04[0x8];
    Class_10B39870* Unknown0C;
};

// FUNCTION: 0x10B3AF60 ?ApplyAnimMotion@GState@@QAE_NH@Z
bool GState::ApplyAnimMotion(int A)
{
    Struct_10B48890* Result = ((Class_10B3AF60_A*)A)->Unknown0B0->Virtual6();
    Struct_10B4C2C0 Vec;
    Unknown0C->FUN_10b39870(&Vec);
    if (Vec.X == DAT_10eafbdc && Vec.Y == DAT_10eafbdc && Vec.Z == DAT_10eafbdc)
        return true;
    if (Result->FUN_10b83ee0(&Vec, 0))
    {
        Struct_10B4C2C0 Zero = { 0.0f, 0.0f, 0.0f };
        Result->Unknown14 = Zero;
        return false;
    }
    Result->Unknown14 = Vec;
    return true;
}
