// Game/Class_10E5B2AC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10E5B2AC.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109E2A90.h"
#include "Game/Class_109E2AE0.h"
#include "Game/Class_109E2BD0.h"
#include "Game/Struct_109E2A90_Node.h"

class Class_1096BD50
{
public:
    Class_1096BD50(UClass* InClass)
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);
};

struct Struct_10A89290
{
    char Pad00[0x8];
    int Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

class Class_1096C8D0 : public Class_1096BD50
{
public:
    Class_1096C8D0(UClass* InClass) : Class_1096BD50(InClass)
    {
    }

    UBOOL IsValid()
    {
        if (Unknown04 == 0)
            return Unknown08 < UObject::GObjObjects.Num();
        return !(Unknown10 == Unknown0C->Unknown1C && Unknown24 == 0);
    }

    void FUN_1096c8d0();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xf];
    int Unknown24;
};

class Class_10E5B2AC;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E5B2AC* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x109E32B0 ?SendMessages@Class_10E5B2AC@@QAEXXZ
void Class_10E5B2AC::SendMessages()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x24, -1, -1);
        DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
        DAT_10f46da0->Virtual1(this, 5, -1, -1);
    }
}

// FUNCTION: 0x109E3420 ?FUN_109e3420@Class_10E5B2AC@@QAEXHHH@Z
void Class_10E5B2AC::FUN_109e3420(int A, int B, int C)
{
    UObject* Obj = (UObject*)A;
    if (Obj->IsA(AActor::StaticClass()))
    {
        if (Obj)
            Obj->IsA(AActor::StaticClass());
        FUN_109e3320(A, B, C);
    }
}

// FUNCTION: 0x109E3560 ?IterateActors@Class_10E5B2AC@@QAEXXZ
void Class_10E5B2AC::IterateActors()
{
    Class_1096C8D0 Iter(AActor::StaticClass());
    while (Iter.IsValid())
    {
        int Obj;
        if (Iter.Unknown04 == 0)
            Obj = (int)UObject::GObjObjects(Iter.Unknown08);
        else
            Obj = Iter.Unknown10->Unknown08;
        FUN_109e3320(Obj, -1, 0);
        Iter.FUN_1096c8d0();
    }
}
