// Game/Unsorted_10BDBDB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10AA82D0.h"
#include "Game/Class_10BBB410.h"
#include "Game/Class_10BC4160.h"
#include "Game/Class_10BFF460.h"
#include "Game/Class_10C2EB70.h"

class Class_10B47720;

struct Struct_10B4C2C0;

// Game/Class_10B39870.h copied whole, with the virtual slot the call site shows (slot 9, an int).
class Class_10B39870
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
    virtual void Virtual8();
    virtual int Virtual9();

    int FUN_10b39870(int A);
    int FUN_10b39870(Struct_10B4C2C0* A);

    char Unknown00[0xC];
    Class_10B47720* Unknown0C;
};

class Class_10BDC1F0
{
public:
    bool FUN_10bdc1f0();

    char Unknown00[0x4];
    Class_10BBB410* Unknown04;
};

// FUNCTION: 0x10BDC1F0 ?FUN_10bdc1f0@Class_10BDC1F0@@QAE_NXZ
bool Class_10BDC1F0::FUN_10bdc1f0()
{
    Class_10B39870* Linked = (Class_10B39870*)((Class_10AA82D0*)((Class_10BC4160*)this)->FUN_10bc4160())->GetLinkedObject();
    if (Linked && Linked->Virtual9() == 4)
    {
        FVector Out;
        ((Class_10C2EB70*)Linked)->FUN_10c2eb70((Struct_10C2EB70*)&Out);
        Class_10BFF460* Obj = Unknown04->GetCurrent();
        if (Obj)
        {
            FVector Vec = Obj->FUN_10bff360();
            if ((Vec.Z - Out.Z) * (Vec.Z - Out.Z) + (Vec.Y - Out.Y) * (Vec.Y - Out.Y) + (Vec.X - Out.X) * (Vec.X - Out.X) < 1024.0f)
                return true;
        }
    }
    return false;
}
