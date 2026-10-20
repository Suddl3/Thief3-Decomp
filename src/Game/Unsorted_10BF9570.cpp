// Game/Unsorted_10BF9570.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "AICore/AICoreClasses.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10BAA6B0_Param.h"
#include "Game/Class_10BABED0.h"
#include "Game/Class_10B9CDE0.h"

extern bool DAT_10ff669c;

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

// The argument: an object whose slot 9 the code calls and reads as a bool.
class Class_10BF9F90_Arg
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
    virtual bool Virtual9();
};

class Class_10BF9F90
{
public:
    void FUN_10bf9f90(Class_10BF9F90_Arg* A);
};

Class_10BABED0* FUN_10baa6b0(Class_10BAA6B0_Param* A);

// FUNCTION: 0x10BF9F90 ?FUN_10bf9f90@Class_10BF9F90@@QAEXPAVClass_10BF9F90_Arg@@@Z
void Class_10BF9F90::FUN_10bf9f90(Class_10BF9F90_Arg* A)
{
    if (A->Virtual9() && DAT_10ff669c)
    {
        for (Class_1096C8D0 Iter(AAIPawn::StaticClass()); Iter.IsValid(); Iter.FUN_1096c8d0())
        {
            Class_10BAA6B0_Param* Obj;
            if (Iter.Unknown04 == 0)
                Obj = (Class_10BAA6B0_Param*)UObject::GObjObjects(Iter.Unknown08);
            else
                Obj = (Class_10BAA6B0_Param*)Iter.Unknown10->Unknown08;
            if (Obj->Virtual85() != 1)
            {
                Class_10BAA6B0_Param* Obj2;
                if (Iter.Unknown04 == 0)
                    Obj2 = (Class_10BAA6B0_Param*)UObject::GObjObjects(Iter.Unknown08);
                else
                    Obj2 = (Class_10BAA6B0_Param*)Iter.Unknown10->Unknown08;
                if (Obj2->Virtual85() != 2)
                {
                    Class_10BAA6B0_Param* Obj3;
                    if (Iter.Unknown04 == 0)
                        Obj3 = (Class_10BAA6B0_Param*)UObject::GObjObjects(Iter.Unknown08);
                    else
                        Obj3 = (Class_10BAA6B0_Param*)Iter.Unknown10->Unknown08;
                    Class_10BABED0* Behavior = FUN_10baa6b0(Obj3);
                    if (Behavior)
                    {
                        Class_10B9CAC0* Stack = Behavior->FUN_10baa750();
                        ((Class_10B9CDE0*)Stack)->FUN_10b9ce20();
                    }
                }
            }
        }
        DAT_10ff669c = false;
    }
}
