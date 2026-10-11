// Game/Unsorted_10A6FF00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A70B80.h"
#include "Game/Class_10E6BA58.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10E6BA88_Entry
{
    int Unknown00;
    int Unknown04;
};

class Class_10E6BA88
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual bool FUN_10a70b40(int Key, int* Out);

    int Unknown04;
    char Unknown08[4];
    Struct_10E6BA88_Entry* Unknown0C;
};

class Class_10E6BA58;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E6BA58* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

// FUNCTION: 0x10A6FF00 ??0Class_10E6BA58@@QAE@XZ
Class_10E6BA58::Class_10E6BA58()
    : Unknown04(false), Unknown08(-1.0f), Unknown0C(-1.0f), Unknown10(-1)
{
    DAT_10f46da0->Virtual1(this, 6, -1, -1);
    DAT_10f46da0->Virtual1(this, 0xc, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
}

// FUNCTION: 0x10A70B40 ?FUN_10a70b40@Class_10E6BA88@@UAE_NHPAH@Z
bool Class_10E6BA88::FUN_10a70b40(int Key, int* Out)
{
    *Out = 0;
    for (int i = 0; i < Unknown04; i++)
    {
        Struct_10E6BA88_Entry* Item = &Unknown0C[i];
        if (Item->Unknown00 == Key)
        {
            *Out = Item->Unknown04;
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10A70B80 ?FUN_10a70b80@Class_10A70B80@@QAEXXZ
void Class_10A70B80::FUN_10a70b80()
{
    FUN_10dd4d40(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
