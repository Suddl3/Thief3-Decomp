// Game/Unsorted_10B9D220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9E410_Item.h"
#include "Game/Class_10B9E410_Member.h"
#include "Game/Class_10BB8300.h"
#include "Game/Object_10B9CAC0.h"
#include "Game/Class_10B9E410.h"

Class_10905A90_Member* GetAllocator();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            GetAllocator()->Virtual5(Block);
        }
    }

    char* Unknown00;
};

class Class_10B9CAC0
{
public:
    void FUN_10b9d330(int A);

    char Unknown00[0xC];
    Class_10BB8300* Unknown0C;
    int Unknown10;
    char Unknown14[4];
    Object_10B9CAC0** Unknown18;
};

// FUNCTION: 0x10B9D330 ?FUN_10b9d330@Class_10B9CAC0@@QAEXH@Z
void Class_10B9CAC0::FUN_10b9d330(int A)
{
    if (Unknown0C->FUN_10bb8c00())
    {
        Class_109081E0 Name("+combatwitness:ally_killed");
        (Unknown10 == 0 ? 0 : Unknown18[Unknown10 - 1])->Virtual35(Name, 1);
    }
}

// FUNCTION: 0x10B9DC80 ?FUN_10b9dc80@Class_10B9E410@@QAEXH@Z
void Class_10B9E410::FUN_10b9dc80(int A)
{
    Class_10B9E410_Member* Obj = Unknown38;
    Class_10B9E410_Item* Top = m_Count == 0 ? 0 : m_Stack[m_Count - 1];
    int Key = Unknown0C;
    FUN_10b9d740(Obj->Virtual44(Key, Top, A));
}

// FUNCTION: 0x10B9DCC0 ?FUN_10b9dcc0@Class_10B9E410@@QAEXXZ
void Class_10B9E410::FUN_10b9dcc0()
{
    if (m_Count)
    {
        Class_10B9E410_Item* Top = m_Stack[m_Count - 1];
        if (Top && Top->Virtual3() == 7)
            FUN_10b9d8d0();
    }
}
