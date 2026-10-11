// Game/Class_10E67938_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10BFBD70.h"

class cUObjectLinkManager
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(int A, int B, int C, Class_10BFBD70& D);
};

cUObjectLinkManager* FUN_10b0b2b0();

struct Struct_10A4C940_Owner;

// The header's Class_10E67938 copied whole, with slot 2's real signature (it takes an int and returns the object it finds).
class Class_10E67938
{
public:
    // Slot 0 is FUN_10a4c470 and slot 1 the deleting destructor (0x10A4C720), as the game's vtable has them.
    virtual void FUN_10a4c470(int A, int B, int C, int D);
    virtual ~Class_10E67938();
    virtual UObject* Virtual2(int A);
    virtual void Virtual3(int A, int B);
    virtual void Virtual4(int A, int B);
    virtual void Virtual5();
    virtual bool FUN_10a4c4d0(int A);
    virtual void Virtual7(int A);
    virtual void Virtual8(int A, int B, int C);
    virtual void FUN_10a4c500(Class_10BFBD70* Array);
    virtual Struct_10A4C940_Owner* FUN_10a4c940(unsigned int Key);
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void Virtual14(int* Out, int A);
    virtual void Virtual15(int A, int B, int C);
    virtual void Virtual16(int A, int B, int C);

    Class_10E67938();

    void FUN_10aa6180();
};

// FUNCTION: 0x10A4C230 ?Virtual2@Class_10E67938@@UAEPAVUObject@@H@Z
UObject* Class_10E67938::Virtual2(int A)
{
    Class_10BFBD70 Items;
    FUN_10b0b2b0()->Virtual4(A, 0, 0x2F186B8, Items);
    if (Items.Count)
    {
        UObject* Obj = (UObject*)((Class_10AAB5C0*)Items.Data[0])->FUN_10aab5c0();
        if (!Obj || !Obj->IsA(AActor::StaticClass()))
            Obj = 0;
        return Obj;
    }
    return 0;
}
