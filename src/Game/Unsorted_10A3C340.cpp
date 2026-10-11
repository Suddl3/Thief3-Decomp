// Game/Unsorted_10A3C340.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Object_10A18FC0.h"
#include "Game/Entry_10C32C30.h"
#include "Game/Class_10905A90_Member.h"

class Class_10A3C3B0_Unknown08
{
public:
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10A3C3B0_Unknown28
{
public:
    char Unknown00[8];
    Class_10A3C3B0_Unknown08* Unknown08;
};

Object_10A18FC0* FUN_10a18fc0();

extern float DAT_10eafbdc;

class Class_10A3C3B0
{
public:
    void FUN_10a3c3b0();

    char Unknown00[0x24];
    int Unknown24;
    Class_10A3C3B0_Unknown28* Unknown28;
    bool Unknown2C;
    bool Unknown2D;
    float Unknown30;
    int Unknown34;
    int Unknown38;
};

struct Item_10BA14C0;

struct Group_10BA14C0
{
    int Count;
    int Unknown04;
    Item_10BA14C0* Data;
};

class Class_10C49740
{
public:
    bool FUN_10c49740(int* Key, Entry_10C32C30** Out);
};

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
    Class_109081E0() : Unknown00(0) {}
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

class Class_10A3C550
{
public:
    void FUN_10a3c550(Class_109081E0 Name);

    char Unknown00[0x4];
    Class_10C49740 Unknown04;
    char Unknown05[0x1B];
    int Unknown20;
    int Unknown24;
    Entry_10C32C30* Unknown28;
    bool Unknown2C;
    char Unknown2D;
    bool Unknown2E;
};

// FUNCTION: 0x10A3C3B0 ?FUN_10a3c3b0@Class_10A3C3B0@@QAEXXZ
void Class_10A3C3B0::FUN_10a3c3b0()
{
    Unknown2C = false;
    Unknown2D = false;
    if (Unknown28)
    {
        Object_10A18FC0* Obj = FUN_10a18fc0();
        Obj->Virtual6(Unknown28->Unknown08[Unknown24].Unknown04, Unknown28->Unknown08[Unknown24].Unknown08);
        return;
    }
    if (Unknown30 > DAT_10eafbdc || *(int*)&Unknown30 == 0xBF800000)
    {
        Object_10A18FC0* Obj = FUN_10a18fc0();
        Obj->Virtual6(Unknown34, Unknown38);
    }
}

// FUNCTION: 0x10A3C550 ?FUN_10a3c550@Class_10A3C550@@QAEXVClass_109081E0@@@Z
void Class_10A3C550::FUN_10a3c550(Class_109081E0 Name)
{
    if (!Unknown2C && Unknown2E)
    {
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown04.FUN_10c49740((int*)&Name, &Unknown28);
        if (Unknown28)
        {
            FUN_10a18fc0()->Virtual6(Unknown28->Data[Unknown24].Unknown04, (int)Unknown28->Data[Unknown24].Data);
        }
    }
}
