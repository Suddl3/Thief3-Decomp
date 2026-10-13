// Game/Unsorted_10ABB520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1092F270.h"
#include "Game/Class_10951900.h"

class Class_1098E0F0
{
public:
    void FUN_1098e0f0(int A);

    char Unknown00[0xB4];
    Class_1092F270* Unknown0B4;
};

class Class_10ABB520_Item
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual bool Virtual5(Class_1098E0F0* A);
};

class Class_10ABB520
{
public:
    void FUN_10abb520(Class_1098E0F0* A);

    char Unknown00[4];
    int Unknown04;
    char Unknown08[4];
    Class_10ABB520_Item** Unknown0C;
};

// FUNCTION: 0x10ABB520 ?FUN_10abb520@Class_10ABB520@@QAEXPAVClass_1098E0F0@@@Z
void Class_10ABB520::FUN_10abb520(Class_1098E0F0* A)
{
    for (int i = 0; i < Unknown04; i++)
    {
        if (Unknown0C[i]->Virtual5(A))
            return;
    }
    if (A)
    {
        if (A->Unknown0B4 && A->Unknown0B4->Unknown0B0)
            A->Unknown0B4->GetOrCreate(false)->Reset();
        A->FUN_1098e0f0(0);
    }
}
