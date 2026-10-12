// Game/Unsorted_10B9CA00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9CA00.h"
#include "Game/Class_10BB85E0.h"

class Class_10E5D360
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual int IsEqual(Class_10E5D360* Other);

    int Unknown04;
};

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10E662C0
{
public:
    virtual void Virtual0();
};

class Class_10E8BF90 : public Class_10E662C0
{
public:
    Class_10E8BF90(int Value) : Unknown04(Value) {}

    virtual Class_10E8BF90* Clone();

    int Unknown04;
};

// FUNCTION: 0x10B9CA00 ?FUN_10b9ca00@Class_10B9CA00@@QAEXXZ
void Class_10B9CA00::FUN_10b9ca00()
{
    if (Unknown0C->FUN_10bb85e0())
        Unknown0C->FUN_10bb8ee0(0);
}

// FUNCTION: 0x10B9CA60 ?Clone@Class_10E8BF90@@UAEPAV1@XZ
Class_10E8BF90* Class_10E8BF90::Clone()
{
    return new(0, 0, 0, 0, 0) Class_10E8BF90(Unknown04);
}

// FUNCTION: 0x10B9CAA0 ?IsEqual@Class_10E5D360@@UAEHPAV1@@Z
int Class_10E5D360::IsEqual(Class_10E5D360* Other)
{
    return (Other->Unknown04 - Unknown04) == 0;
}
