// Game/Unsorted_10C27410.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C27410.h"
#include "Game/Class_10E99350.h"

class Class_10C27460_Param
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* p1, int p2);
};

class Class_10C27410_Unknown10
{
public:
    virtual bool Virtual0(int A);
    virtual int Virtual1();
};

// FUNCTION: 0x10C27410 ?FUN_10c27410@Class_10C27410@@QAEXH@Z
void Class_10C27410::FUN_10c27410(int A)
{
    for (int i = 0; i < Unknown08; i++)
    {
        Class_10C27410_Unknown10* Item = Unknown10[i];
        if (Item->Virtual0(A) == 1)
            Unknown04 |= 1 << Item->Virtual1();
    }
}

// FUNCTION: 0x10C27460 ?Serialize@Class_10E99350@@UAEXPAVClass_10C27460_Param@@@Z
void Class_10E99350::Serialize(Class_10C27460_Param* p1)
{
    p1->Virtual1(&Unknown04, 4);
}
