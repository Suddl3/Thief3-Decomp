// Game/Unsorted_10AC8840_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "T3Game/T3GameClasses.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10B0D530.h"

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
        Struct_10A89290* Current = Unknown0C->Unknown1C;
        return !(Unknown10 == Current && Unknown24 == 0);
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

// Copied from src/Game/Unsorted_10AC87D0.cpp: the fields the game reads sit at 0xC4.
class Class_Field04
{
public:
    int FUN_1098e290(int Id, FString* Out);

    char Unknown00[0xC4];
    FString UnknownC4;
    FString UnknownD0;
};

// FUNCTION: 0x10AC8840 ?FUN_10ac8840@@YGXHH@Z
void __stdcall FUN_10ac8840(int A, int B)
{
    int Result = 0;
    {
        Class_1096C8D0 Iter(AExitMissionInfo::StaticClass());
        while (Iter.IsValid())
        {
            int Obj;
            if (Iter.Unknown04 == 0)
                Obj = (int)UObject::GObjObjects(Iter.Unknown08);
            else
                Obj = Iter.Unknown10->Unknown08;
            int Value = 0;
            if (((Class_1098E330*)Obj)->GetPropertyValue(0x80081b, &Value) == 0)
                Value = ((AExitMissionInfo*)Obj)->EntryMapObjectFlag;
            if (Value)
            {
                if (Iter.Unknown04 == 0)
                    Result = (int)UObject::GObjObjects(Iter.Unknown08);
                else
                    Result = Iter.Unknown10->Unknown08;
            }
            Iter.FUN_1096c8d0();
        }
    }
    if (Result)
    {
        Class_Field04* Info = (Class_Field04*)Result;
        FString* First = (FString*)A;
        FString* Second = (FString*)B;
        if (!Info->FUN_1098e290(0x4081C, First))
            *First = Info->UnknownC4;
        if (!Info->FUN_1098e290(0x4081D, Second))
            *Second = Info->UnknownD0;
    }
}
