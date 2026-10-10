// Game/Unsorted_10B81D80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B822C0.h"
#include "Game/Struct_10B859B0_0C.h"
#include "Game/Struct_10B859B0_Vector.h"
#include "Game/Class_10B859B0.h"
#include "Game/Struct_10B859B0_Rotation.h"
#include "Game/Struct_10B859B0_Transform.h"

typedef unsigned char BYTE;

class Class_10B822C0_Member
{
public:
    char Unknown00[0x28];
    unsigned int Unknown28;
};

class Allocator_10FFA700
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* A, int B, int C);
};

extern Allocator_10FFA700* DAT_10ffa700;

class Class_10B83820
{
public:
    void FUN_10b83820();

    void* Unknown00;
    int Unknown04;
    unsigned Unknown08 : 31;
    unsigned Unknown08Flag : 1;
};

// FUNCTION: 0x10B822C0 ?FUN_10b822c0@Class_10B822C0@@QAEHXZ
int Class_10B822C0::FUN_10b822c0()
{
    if (Unknown8C)
        return Unknown8C->Unknown28 & 0x1F;
    return 0;
}

// FUNCTION: 0x10B83820 ?FUN_10b83820@Class_10B83820@@QAEXXZ
void Class_10B83820::FUN_10b83820()
{
    if (!Unknown08Flag)
    {
        Allocator_10FFA700* Allocator = DAT_10ffa700;
        Allocator->Virtual5(Unknown00, Unknown08 * 16, 0x11);
    }
}

// FUNCTION: 0x10B859B0 ?FUN_10b859b0@Class_10B859B0@@QAEPAV1@XZ
Class_10B859B0* Class_10B859B0::FUN_10b859b0()
{
    Unknown0C.Struct_10B859B0_0C::Struct_10B859B0_0C();
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown20.SetIdentity();
    return this;
}
