// Game/Unsorted_10BC21D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "AICore/AICoreClasses.h"
#include "Game/Class_10B0D530.h"
#include "Game/Struct_10BA91E0.h"

// The object the iterator hands out: a UObject with a location vector at 0x2C.
class Class_10BC21D0_Object : public UObject
{
public:
    Struct_10BA91E0 Location;
};

struct Struct_10A89290
{
    char Pad00[0x8];
    Class_10BC21D0_Object* Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

// Copied from include/Game/Class_1096BD50.h with the constructor's body the game inlines.
class Class_1096BD50
{
public:
    Class_1096BD50(UClass* InClass)
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);
};

// Copied from include/Game/Class_1096C8D0.h with the constructor and IsValid added.
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

float __cdecl Distance(const Struct_10BA91E0* A, const Struct_10BA91E0* B);

// FUNCTION: 0x10BC21D0 ?FUN_10bc21d0@@YAPAVClass_10BC21D0_Object@@PBUStruct_10BA91E0@@@Z
Class_10BC21D0_Object* FUN_10bc21d0(const Struct_10BA91E0* Point)
{
    float Best = 1e10f;
    Class_10BC21D0_Object* BestObject = 0;
    for (Class_1096C8D0 Iter(UObject::StaticClass()); Iter.IsValid(); Iter.FUN_1096c8d0())
    {
        UClass* PathPointClass = AAIPathPoint::StaticClass();
        Class_10BC21D0_Object* Obj = (Iter.Unknown04 == 0)
            ? (Class_10BC21D0_Object*)UObject::GObjObjects(Iter.Unknown08)
            : Iter.Unknown10->Unknown08;
        if (Obj->IsA(PathPointClass))
        {
            Class_10BC21D0_Object* Obj2 = (Iter.Unknown04 == 0)
                ? (Class_10BC21D0_Object*)UObject::GObjObjects(Iter.Unknown08)
                : Iter.Unknown10->Unknown08;
            float D = Distance(Point, &Obj2->Location);
            if (D < Best)
            {
                Best = D;
                BestObject = Obj2;
            }
        }
    }
    return BestObject;
}
