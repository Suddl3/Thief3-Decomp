// Game/Unsorted_10A301D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"

// The engine's absolute value, as the game writes it.
inline float Abs(float V)
{
    return V >= 0.0f ? V : -V;
}

// The objects the iterator walks: an actor-like class whose location is at 0x2C.
class Class_10A30330_Object
{
public:
    char Pad00[0x2C];
    FVector Location;
};

// The class this function belongs to: its position is at 0x10.
class Class_10A30330
{
public:
    Class_10A30330_Object* FUN_10a30330();

    char Pad00[0x10];
    FVector Location;
};

// Class_1096BD50 copied from include/Game/Class_1096BD50.h with the constructor's body the game inlines.
class Class_1096BD50
{
public:
    Class_1096BD50(UClass* InClass)
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);

    int Unknown00;
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

// Class_1096C8D0 copied from include/Game/Class_1096C8D0.h with the constructor and the accessors added.
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

    Class_10A30330_Object* GetObject()
    {
        if (Unknown04 == 0)
            return (Class_10A30330_Object*)UObject::GObjObjects(Unknown08);
        return (Class_10A30330_Object*)Unknown10->Unknown08;
    }

    void FUN_1096c8d0();

    int Unknown04;
    int Unknown08;
    Class_1096C8D0_Field0C* Unknown0C;
    Struct_10A89290* Unknown10;
    Class_10B0D530 Unknown14;
    char Pad15[0xf];
    int Unknown24;
};

// The UClass of the objects the iterator walks, and the engine's two helpers
// that build it.
extern UClass* DAT_10f349c0;

UClass* FUN_1098ef10(const char* Package);

void FUN_10993690();

// FUNCTION: 0x10A30330 ?FUN_10a30330@Class_10A30330@@QAEPAVClass_10A30330_Object@@XZ
Class_10A30330_Object* Class_10A30330::FUN_10a30330()
{
    if (!DAT_10f349c0)
    {
        DAT_10f349c0 = FUN_1098ef10("Engine");
        FUN_10993690();
    }
    Class_1096C8D0 Iter(DAT_10f349c0);
    while (Iter.IsValid())
    {
        Class_10A30330_Object* Obj = Iter.GetObject();
        FVector Delta;
        Delta.X = Obj->Location.X - Location.X;
        Delta.Y = Obj->Location.Y - Location.Y;
        Delta.Z = Obj->Location.Z - Location.Z;
        if (Abs(Delta.X) < 0.0001 && Abs(Delta.Y) < 0.0001 && Abs(Delta.Z) < 0.0001)
            return Iter.GetObject();
        Iter.FUN_1096c8d0();
    }
    return 0;
}
