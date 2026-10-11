// Game/Unsorted_10B46D90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10B46D90.h"
#include "Game/Class_10B46E50.h"

extern void* DAT_10e7b558[];

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E68F8C
{
public:
    virtual void Virtual0(int A, int* B, float C);

    char Unknown04[0x3C];
};

class Class_10E7B558
{
public:
    Class_10E7B558()
    {
        Unknown04 = 1.0f;
        Unknown08 = 0;
        VTable = DAT_10e7b558;
    }

    void** VTable;
    float Unknown04;
    int Unknown08;
};

class Object_10B46D90 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

class Object_10B46E50 : public Class_10E7B558
{
public:
    Class_10E68F8C Unknown0C;
};

// FUNCTION: 0x10B46D90 ?FUN_10b46d90@Class_10B46D90@@QAEXXZ
void Class_10B46D90::FUN_10b46d90()
{
    Object_10B46D90* Obj = new(0, 0, 0, 0, 0) Object_10B46D90;
    char Buffer[12];
    int Value = Virtual6(Buffer);
    Obj->Unknown0C.Virtual0(Value, &Unknown10, 0.1f);
    Virtual77(Obj);
    for (int i = 0; i < Unknown0B8; i++)
    {
        Class_10B46D90* Elem = Unknown0C0[i];
        if (Elem && Elem->Virtual39() == 0x6c)
            Elem->FUN_10b46d90();
    }
}

// FUNCTION: 0x10B46E50 ?FUN_10b46e50@Class_10B46E50@@QAEXXZ
void Class_10B46E50::FUN_10b46e50()
{
    Object_10B46E50* Obj = new(0, 0, 0, 0, 0) Object_10B46E50;
    FVector Vector;
    int Result = Virtual6(&Vector);
    Obj->Unknown0C.Virtual0(Result, &Unknown154, 0.1f);
    Virtual77(Obj);
    for (int i = 0; i < Unknown0B8; i++)
    {
        Class_10B46E50* Item = Unknown0C0[i];
        if (Item && Item->Virtual39() == 0x6c)
            Item->FUN_10b46e50();
    }
}
