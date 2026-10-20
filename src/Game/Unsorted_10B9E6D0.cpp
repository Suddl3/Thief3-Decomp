// Game/Unsorted_10B9E6D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/cStateStack.h"
#include "Game/Class_10BA9FD0.h"
#include "Game/Class_10BB7580.h"

// include/Game/Class_10BC4220.h copied whole: the virtual methods are added,
// the vtable pointer of the item sits at 0x00.
class Class_10BC4220
{
public:
    int TakeValue();

    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();

    char Unknown00[0x1C];
    int Unknown1C;
};

// include/Game/Class_10B9E410_Item.h copied whole: the base class
// Class_10BC4220 is added, the item takes its value from it.
class Class_10B9E410_Item : public Class_10BC4220
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual int Virtual3();
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
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void Virtual28();
    virtual void Virtual29();
    virtual void Virtual30();
    virtual void Virtual31();
    virtual void Virtual32();
    virtual void Virtual33();
    virtual void Virtual34();
    void FUN_10bd1550(int A, int B, int C, int D);
};

// include/Game/Class_10B9E410_Unknown0C.h copied whole: the member at 0x08
// is the object the stack asks for its value.
struct Class_10B9E410_Unknown0C
{
    char Unknown00[8];
    Class_10BA9FD0* Unknown08;
};

// The value TakeValue() hands back: two virtuals are called on it and it is
// deleted at the end.
class Class_10B9EA00_Value
{
public:
    virtual int Virtual0();
    virtual int Virtual1();
};

// include/Game/Class_10B9F200.h copied whole: the base class cStateStack
// (the item stack and the state methods) and the method FUN_10b9d7e0 are
// added.
class Class_10B9F200 : public cStateStack
{
public:
    void FUN_10b9f200();
    void FUN_10b9d2b0();
    void FUN_10b9ea00(int A);
    void FUN_10b9d660();
    void FUN_10b9d7e0(int A, int B);

    cIntArray Unknown3C;
};

// FUNCTION: 0x10B9EA00 ?FUN_10b9ea00@Class_10B9F200@@QAEXH@Z
void Class_10B9F200::FUN_10b9ea00(int A)
{
    Class_10B9E410_Item* Item = Top();
    if (Unknown3C.FindIndex(Item->Virtual3()) != -1)
        return;
    int Value = Item->Virtual3();
    // The array is used through a reference: its address stays in a register.
    cIntArray& Arr = Unknown3C;
    int Index = Arr.Count;
    Arr.SetCount(Index + 1);
    Arr.Data[Index] = Value;
    Item->Virtual2();
    if (!((Class_10BB7580*)Unknown0C->Unknown08->FUN_10ba9fd0())->FUN_10bb7580())
        return;
    Class_10B9EA00_Value* Obj = (Class_10B9EA00_Value*)Item->TakeValue();
    if (Obj == 0)
    {
        Item->Virtual8();
        if (Item == Top())
        {
            Obj = (Class_10B9EA00_Value*)Item->TakeValue();
            if (Obj == 0)
                return;
        }
        else
        {
            if (m_Count != 0)
                Top()->Virtual3();
            return;
        }
    }
    switch (Obj->Virtual1())
    {
    case 0:
        if (Obj->Virtual0())
            FUN_10b9d7e0(Obj->Virtual0(), 0);
        break;
    case 1:
        if (Obj->Virtual0())
            ApplyNextState(Obj->Virtual0());
        break;
    case 2:
        FUN_10b9d8d0();
        break;
    }
    if (A < 5)
        FUN_10b9ea00(A + 1);
    delete Obj;
}
