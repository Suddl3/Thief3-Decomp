// Game/Unsorted_10A4B790.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"

class AActor
{
    DECLARE_CLASS(AActor, UObject, 0x800, Engine)
};

// The object the iterator walks: an UObject with a virtual at slot 22.
class Class_10A4BF00_Object
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
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void Virtual17();
    virtual void Virtual18();
    virtual void Virtual19();
    virtual void Virtual20();
    virtual void Virtual21();
    virtual int Virtual22(int A);

    char Unknown04[0x18];
    DWORD ObjectFlags;
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

    Class_10A4BF00_Object* GetObject()
    {
        if (Unknown04 == 0)
            return (Class_10A4BF00_Object*)UObject::GObjObjects(Unknown08);
        return (Class_10A4BF00_Object*)Unknown10->Unknown08;
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

// FUNCTION: 0x10A4BF00 ?FUN_10a4bf00@@YAPAVClass_10A4BF00_Object@@H@Z
Class_10A4BF00_Object* FUN_10a4bf00(int A)
{
    Class_1096C8D0 Iter(AActor::StaticClass());
    while (Iter.IsValid())
    {
        bool bOk = !((Iter.GetObject()->ObjectFlags >> 23) & 1);
        bool bRet = (Iter.GetObject()->Virtual22(A) == 1);
        if (bOk & bRet)
            return Iter.GetObject();
        Iter.FUN_1096c8d0();
    }
    return 0;
}
