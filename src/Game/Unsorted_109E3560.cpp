// Game/Unsorted_109E3560.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

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

class Class_10E5B2AC
{
public:
    virtual void FUN_109e3510(int Msg, int A, int B, int C);

    Class_10E5B2AC();

    void FUN_109e32b0();
    void FUN_109e3320(int A, int B, int C);
    void FUN_109e3420(int A, int B, int C);
    void FUN_109e3560();
};

// FUNCTION: 0x109E3560 ?FUN_109e3560@Class_10E5B2AC@@QAEXXZ
void Class_10E5B2AC::FUN_109e3560()
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
