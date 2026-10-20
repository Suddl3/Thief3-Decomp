// Game/Unsorted_10C13640_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10B0D530.h"
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

bool FUN_1090f010(const int* A, const int* B);

class Class_10C13640_Object;

// Game/Class_1096BD50.h copied whole, with the constructor's body the game inlines.
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

// Game/Class_1096C8D0.h copied whole, with the constructor and the accessors added.
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

    Class_10C13640_Object* GetObject()
    {
        if (Unknown04 == 0)
            return (Class_10C13640_Object*)UObject::GObjObjects(Unknown08);
        return (Class_10C13640_Object*)Unknown10->Unknown08;
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

// The objects the iterator walks: classes, with the name at slot 25.
class Class_10C13640_Object
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
    virtual int Virtual22(Class_10C13640_Object* A);
    virtual void Virtual23();
    virtual void Virtual24();
    virtual char* Virtual25(char** Out);
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
};

// The class whose vtable holds this function at slot 4.
class Class_10E8C4A4
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
    virtual Class_10C13640_Object* Virtual14();

    int Unknown04;
    Class_10C13640_Object* Unknown08;

    UBOOL FUN_10c13640(const char* Name);
};

// FUNCTION: 0x10C13640 ?FUN_10c13640@Class_10E8C4A4@@QAEHPBD@Z
UBOOL Class_10E8C4A4::FUN_10c13640(const char* Name)
{
    Class_1096C8D0 Iter(UClass::StaticClass());
    while (Iter.IsValid())
    {
        if (Iter.GetObject()->Virtual22(this->Virtual14()) && Iter.GetObject() != this->Virtual14())
        {
            char* ObjName;
            char* ObjName2 = Iter.GetObject()->Virtual25(&ObjName);
            bool bMatch = FUN_1090f010((const int*)ObjName2, (const int*)Name);
            if (ObjName)
            {
                char* Block = ObjName - 4;
                GetAllocator()->Virtual5(Block);
                ObjName = 0;
            }
            if (bMatch)
            {
                Unknown08 = Iter.GetObject();
                return true;
            }
        }
        Iter.FUN_1096c8d0();
    }
    return false;
}
