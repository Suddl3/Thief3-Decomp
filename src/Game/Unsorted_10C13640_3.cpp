// Game/Unsorted_10C13640_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B0D530.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's tagged new.
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// The object the iterator hands out: a UObject whose slot 22 takes and returns one.
class Class_10C137E0_Target
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
    virtual Class_10C137E0_Target* Virtual22(Class_10C137E0_Target* A);
};

struct Struct_10A89290
{
    char Pad00[0x8];
    Class_10C137E0_Target* Unknown08;
};

class Class_1096C8D0_Field0C
{
public:
    char Pad00[0x1c];
    Struct_10A89290* Unknown1C;
};

// Copied from include/Game/Class_1096C8D0.h with IsValid added.
class Class_1096C8D0
{
public:
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

// Copied from include/Game/Class_1096BD50.h with the constructor's body the game inlines.
class Class_1096BD50 : public Class_1096C8D0
{
public:
    Class_1096BD50(UClass* InClass) throw()
    {
        FUN_1096bd50(InClass);
    }

    Class_1096BD50* FUN_1096bd50(UClass* InClass);
};

class Class_10E8C4A4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void FUN_10c137e0();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual Class_10C137E0_Target* Virtual14();

    Class_1096BD50* Unknown04;
};

// FUNCTION: 0x10C137E0 ?FUN_10c137e0@Class_10E8C4A4@@UAEXXZ
void Class_10E8C4A4::FUN_10c137e0()
{
    if (Unknown04)
    {
        delete Unknown04;
        Unknown04 = 0;
    }

    GetAllocator()->Virtual8(0, 0);
    Unknown04 = new(0, 0, 0, 0, 0) Class_1096BD50(UClass::StaticClass());
    GetAllocator()->Virtual9();

    while (Unknown04->IsValid())
    {
        Class_10C137E0_Target* Obj;
        if (Unknown04->Unknown04 == 0)
            Obj = (Class_10C137E0_Target*)UObject::GObjObjects(Unknown04->Unknown08);
        else
            Obj = Unknown04->Unknown10->Unknown08;

        if (Obj->Virtual22(Virtual14()))
        {
            Class_10C137E0_Target* Obj2;
            if (Unknown04->Unknown04 == 0)
                Obj2 = (Class_10C137E0_Target*)UObject::GObjObjects(Unknown04->Unknown08);
            else
                Obj2 = Unknown04->Unknown10->Unknown08;
            if (Obj2 != Virtual14())
                break;
        }
        Unknown04->FUN_1096c8d0();
    }
}
