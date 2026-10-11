// Game/Unsorted_10BD3170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10BD3830.h"
#include "Game/Class_10BD4120.h"
#include "Game/Class_10C7D570.h"
#include "Game/Class_10E90D70.h"
#include "Game/State_Search.h"
#include "Game/Class_10E93878.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10BD3830_Owner
{
    char Unknown00[8];
    Class_10C7D570* Unknown08;
};

struct Struct_10BD3830_Target
{
    char Unknown00[0x2C];
    FVector Unknown2C;
};

class Object_10BD3830
{
public:
    virtual void Virtual0();
    virtual unsigned char Virtual1(FVector* A, int* B);
};

// FUNCTION: 0x10BD3830 ?FUN_10bd3830@Class_10BD3830@@QAEHHPAVObject_10BD3830@@HH@Z
int Class_10BD3830::FUN_10bd3830(int A, Object_10BD3830* Obj, int C, int D)
{
    FVector Vec(0.0f, 0.0f, 0.0f);
    int Count = 0;
    if (Obj && Obj->Virtual1(&Vec, &Count) == 1)
    {
        Struct_10BD3830_Target* Target = (Struct_10BD3830_Target*)Unknown04->Unknown08->FUN_10c7d570();
        return FUN_10bd2340(A, Vec, Vec - Target->Unknown2C, C, D);
    }
    return 0;
}

// FUNCTION: 0x10BD4120 ?FUN_10bd4120@Class_10BD4120@@QAEXXZ
void Class_10BD4120::FUN_10bd4120()
{
    FUN_10a20940(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10BD51C0 ??0Class_10E93878@@QAE@HH@Z
Class_10E93878::Class_10E93878(int A, int B) : State_Search(A, B)
{
}
