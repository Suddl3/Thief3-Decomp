// Game/Unsorted_10A551C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1090C880.h"
#include "Game/Class_10C4EDA0.h"
#include "Game/Class_109081E0.h"

class FVector
{
public:
    float X, Y, Z;
};

extern float DAT_10eafbdc;

extern float DAT_10e49684;

struct Struct_10A55380
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

struct Item_10A55380
{
    Struct_10A55380 Unknown00;
    float Unknown0C;
    int Unknown10;
};

class Class_10E684A8
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void SetLocation(FVector* A);

    void SetNameByIndex(int A);

    char Unknown04[0x18];
    FVector m_Location;
    char Unknown28[0xF8];
    bool m_Dirty;
    char Unknown121[3];
    Class_109081E0 m_Name;
    Class_1090C880 m_Names;
    int Unknown134;
};

// FUNCTION: 0x10A551C0 ?SetLocation@Class_10E684A8@@UAEXPAVFVector@@@Z
void Class_10E684A8::SetLocation(FVector* A)
{
    FVector* Current = &m_Location;
    if (A->X != Current->X || A->Y != Current->Y || A->Z != Current->Z)
        m_Dirty = true;
    *Current = *A;
}

// FUNCTION: 0x10A55380 ?FUN_10a55380@Class_10C4EDA0@@QAEXABUStruct_10A55380@@@Z
void Class_10C4EDA0::FUN_10a55380(const Struct_10A55380& A)
{
    Item_10A55380 Item;
    Item.Unknown00 = A;
    if (A.Unknown08 != DAT_10eafbdc)
        Item.Unknown0C = DAT_10e49684 / A.Unknown08;
    else
        Item.Unknown0C = 0.0f;
    int Index = Unknown00;
    Item.Unknown10 = Unknown14;
    FUN_10a550b0(Index + 1);
    Unknown08[Index] = Item;
}

// FUNCTION: 0x10A556F0 ?SetNameByIndex@Class_10E684A8@@QAEXH@Z
void Class_10E684A8::SetNameByIndex(int A)
{
    m_Name = m_Names.FUN_1090c880(A);
    Unknown134 = 0;
    m_Dirty = true;
}
