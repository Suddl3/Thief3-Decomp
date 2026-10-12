// Game/Unsorted_10AC8840.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_1098E330.h"
#include "T3Game/T3GameClasses.h"

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

// FUNCTION: 0x10AC89C0 ?FindExitMissionInfo@@YAPAXXZ
void* FindExitMissionInfo()
{
    int Result = 0;
    Class_1096C8D0 Iter(AExitMissionInfo::StaticClass());
    while (Iter.IsValid())
    {
        int Obj;
        if (Iter.Unknown04 == 0)
            Obj = (int)UObject::GObjObjects(Iter.Unknown08);
        else
            Obj = Iter.Unknown10->Unknown08;
        int Value = 0;
        int Flag;
        if (((Class_1098E330*)Obj)->FUN_1098e330(0x80081b, &Value) == 0)
            Flag = ((AExitMissionInfo*)Obj)->EntryMapObjectFlag;
        else
            Flag = Value;
        if (Flag == 0)
        {
            if (Iter.Unknown04 == 0)
                Result = (int)UObject::GObjObjects(Iter.Unknown08);
            else
                Result = Iter.Unknown10->Unknown08;
        }
        Iter.FUN_1096c8d0();
    }
    return (void*)Result;
}
