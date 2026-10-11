// Game/Unsorted_10A33EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A34730.h"
#include "Game/Class_10A34B90.h"
#include "Game/Class_10A34CD0.h"
#include "Game/Class_10A34D50.h"
#include "Game/Class_10AB5B20.h"
#include "Game/Class_10E6649C.h"
#include "Game/Entry_10A34D50.h"
#include "Game/Object_10AB5B20.h"

struct Info_10A34730
{
    char Unknown00[0x10];
    Class_10AB5B20 Unknown10;
};

Class_10905A90_Member* GetAllocator();

struct Struct_10A33EE0_Vec
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
};

struct Struct_10A33EE0
{
    char Unknown00[0x2C];
    Struct_10A33EE0_Vec Unknown2C;
};

// FUNCTION: 0x10A33EE0 ?FUN_10a33ee0@@YGXPAUStruct_10A33EE0@@0PBUStruct_10A33EE0_Vec@@1@Z
void __stdcall FUN_10a33ee0(Struct_10A33EE0* A, Struct_10A33EE0* B, const Struct_10A33EE0_Vec* C, const Struct_10A33EE0_Vec* D)
{
    if (A)
        A->Unknown2C = *C;
    if (B)
        B->Unknown2C = *D;
}

// FUNCTION: 0x10A346F0 ?FUN_10a346f0@Class_10A34D50@@QAEXXZ
void Class_10A34D50::FUN_10a346f0()
{
    FUN_10a33fd0(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10A34730 ?FUN_10a34730@Class_10A34730@@QAE?AVClass_10AB5B20@@XZ
Class_10AB5B20 Class_10A34730::FUN_10a34730()
{
    return Unknown00->Unknown10;
}

// FUNCTION: 0x10A34760 ?FUN_10a34760@Class_10E6649C@@UAEXHPAH0@Z
void Class_10E6649C::FUN_10a34760(int p1, int* p2, int* p3)
{
    *p2 = p1;
    *p3 = 0x10;
}

// FUNCTION: 0x10A35140 ?FUN_10a35140@Class_10A34B90@@QAEXXZ
void Class_10A34B90::FUN_10a35140()
{
    FUN_10a34b90(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}

// FUNCTION: 0x10A35170 ?FUN_10a35170@Class_10A34CD0@@QAEXXZ
void Class_10A34CD0::FUN_10a35170()
{
    FUN_10a34cd0(0x40);
    ::operator delete(Unknown14);
    Unknown04 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown00 = 0;
}
