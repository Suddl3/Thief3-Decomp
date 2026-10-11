// Game/Unsorted_10B7C020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AF4B90.h"
#include "Game/Class_10D9B090.h"
#include "Game/Class_10E4B180.h"
#include "Game/Class_10E4B180_Unknown7C.h"
#include "Game/Struct_10B7C030_Param.h"
#include "Game/Class_10B7ECC0.h"

class Allocator_10FFA700
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(void* p1, int p2, int p3);
};

extern Allocator_10FFA700* DAT_10ffa700;

struct Struct_10B7C150
{
    char Unknown00[4];
    unsigned short Unknown04;
};

struct Struct_10B7C3D0
{
    char Unknown00[4];
    unsigned short Unknown04;
};

extern void* DAT_10e47850[];

struct Struct_10D9E5E0_Param;

Class_10905A90_Member* GetAllocator();

Class_10D9B090* FUN_10d9dcb0();

// FUNCTION: 0x10B7C030 ?FUN_10b7c030@Class_10E4B180@@UAEXPAUStruct_10B7C030_Param@@@Z
void Class_10E4B180::FUN_10b7c030(Struct_10B7C030_Param* A)
{
    GetAllocator()->Virtual8(0, 0);
    if (A && A->UnknownB0)
        FUN_10d9dcb0()->FUN_10d9e5e0(A->UnknownB0);
    GetAllocator()->Virtual9();
}

// FUNCTION: 0x10B7C150 ?FUN_10b7c150@@YAXPAUStruct_10B7C150@@@Z
void FUN_10b7c150(Struct_10B7C150* p)
{
    DAT_10ffa700->Virtual5(p, p->Unknown04, 0xf);
}

// FUNCTION: 0x10B7C3D0 ?FUN_10b7c3d0@@YAXPAUStruct_10B7C3D0@@@Z
void FUN_10b7c3d0(Struct_10B7C3D0* p)
{
    DAT_10ffa700->Virtual5(p, p->Unknown04, 0x23);
}

// FUNCTION: 0x10B7ECC0 ?FUN_10b7ecc0@Class_10B7ECC0@@QAEPAV1@XZ
Class_10B7ECC0* Class_10B7ECC0::FUN_10b7ecc0()
{
    Unknown0C.FUN_10af4b90(0x27, DAT_10e47850);
    return this;
}
