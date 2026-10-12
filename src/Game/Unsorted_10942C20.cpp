// Game/Unsorted_10942C20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109434F0.h"
#include "Game/Class_10943520.h"
#include "Game/Class_109435A0.h"
#include "Game/cEntryArray.h"

Class_10905A90_Member* GetAllocator();

struct Struct_109434F0
{
    char Unknown00[0x20];
};

struct Entry_10946110;

class Class_10E4A668_Unknown130_Unknown04
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int Param);
};

class Class_10E4A668_Unknown130
{
public:
    int Unknown00;
    Class_10E4A668_Unknown130_Unknown04* Unknown04;
    char Unknown08[0x1C];
};

class Class_10E4A668
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
    virtual void Virtual22();
    virtual void Virtual23();
    virtual void Virtual24();
    virtual void Virtual25();
    virtual void Virtual26();
    virtual void Virtual27();
    virtual void FUN_10942c20(int Param);

    char Unknown04[0xEC];
    int Unknown0F0;
    char Unknown0F4[0x3C];
    Class_10E4A668_Unknown130* Unknown130;
};

// FUNCTION: 0x10942C20 ?FUN_10942c20@Class_10E4A668@@UAEXH@Z
void Class_10E4A668::FUN_10942c20(int Param)
{
    int Count = Unknown0F0;
    for (int i = 0; i < Count; i++)
    {
        if (!Unknown130)
            break;
        Class_10E4A668_Unknown130_Unknown04* Obj = Unknown130[i].Unknown04;
        if (Obj)
            Obj->Virtual6(Param);
    }
}

// FUNCTION: 0x10943160 ?Clear@Class_109435A0@@QAEXXZ
void Class_109435A0::Clear()
{
    Resize(0);
    if (m_CapacityBytes)
    {
        GetAllocator()->Virtual5(m_Items);
        m_Items = 0;
        m_CapacityBytes = 0;
    }
}

// FUNCTION: 0x109434F0 ?Append@Class_109434F0@@QAEHABUStruct_109434F0@@@Z
int Class_109434F0::Append(const Struct_109434F0& Item)
{
    int Index = Unknown00;
    FUN_10dcd540(Index + 1);
    Unknown08[Index] = Item;
    return Index;
}

// FUNCTION: 0x10943520 ?Clear@Class_10943520@@QAEXXZ
void Class_10943520::Clear()
{
    FUN_10943240(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10943560 ?Free@cEntryArray@@QAEXXZ
void cEntryArray::Free()
{
    Resize(0);
    if (m_Capacity)
    {
        GetAllocator()->Virtual5(m_Entries);
        m_Entries = 0;
        m_Capacity = 0;
    }
}
