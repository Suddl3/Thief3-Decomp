// Game/Unsorted_1094B640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1094C3F0.h"
#include "Game/Struct_1094C6E0.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10E499F4 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Struct_1094C6E0 FUN_1094c6e0();

    char Unknown04[0x30];
    Struct_1094C6E0 Unknown34;
};

// The element: 8 bytes, an int and a byte; the loops clear both.
class Class_1094B640_Unknown08
{
public:
    int Unknown00;
    char Unknown04;
};

// FUNCTION: 0x1094B640 ?FUN_1094b640@Class_1094C3F0@@QAEXH@Z
void Class_1094C3F0::FUN_1094b640(int NewCount)
{
    int OldCount = Unknown00;
    int Capacity = !Unknown08 ? 0 : Unknown04 / sizeof(Class_1094B640_Unknown08);
    for (int i = NewCount; i < OldCount; i++)
    {
        Class_1094B640_Unknown08* Element = (Class_1094B640_Unknown08*)((char*)Unknown08 + i * sizeof(Class_1094B640_Unknown08));
        Element->Unknown00 = 0;
        Element->Unknown04 = 0;
    }
    FUN_10905aa0()->Virtual8(0, 0);
    if (NewCount > Capacity)
    {
        int NewCapacity = NewCount;
        if (Capacity)
            NewCapacity = (NewCount & ~15) + 16;
        void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_1094B640_Unknown08), 0, 0, 0, 0);
        Unknown04 = NewCapacity * sizeof(Class_1094B640_Unknown08);
        Unknown08 = Block;
    }
    else if (NewCount <= Capacity - 16)
    {
        if (NewCount == 0)
        {
            FUN_10905aa0()->Virtual5(Unknown08);
            Unknown08 = 0;
            Unknown04 = 0;
        }
        else
        {
            int NewCapacity = (NewCount & ~15) + 16;
            void* Block = FUN_10905aa0()->Virtual3(Unknown08, NewCapacity * sizeof(Class_1094B640_Unknown08), 0, 0, 0, 0);
            Unknown04 = NewCapacity * sizeof(Class_1094B640_Unknown08);
            Unknown08 = Block;
        }
    }
    for (int j = OldCount; j < NewCount; j++)
    {
        Class_1094B640_Unknown08* Element = (Class_1094B640_Unknown08*)((char*)Unknown08 + j * sizeof(Class_1094B640_Unknown08));
        if (Element)
        {
            Element->Unknown00 = 0;
            Element->Unknown04 = 0;
        }
    }
    FUN_10905aa0()->Virtual9();
    Unknown00 = NewCount;
}

// FUNCTION: 0x1094C3F0 ?FUN_1094c3f0@Class_1094C3F0@@QAEXXZ
void Class_1094C3F0::FUN_1094c3f0()
{
    FUN_1094b640(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x1094C6E0 ?FUN_1094c6e0@Class_10E499F4@@UAE?AUStruct_1094C6E0@@XZ
Struct_1094C6E0 Class_10E499F4::FUN_1094c6e0()
{
    return Unknown34;
}
