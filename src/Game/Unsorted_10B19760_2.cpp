// Game/Unsorted_10B19760_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10ABDAE0.h"
#include "Game/Class_10B197E0.h"
#include "Game/Class_10E79464.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10B1B8A0
{
public:
    void FUN_10b1a840();
    void FUN_10b1aba0();

    char Unknown00[4];
    Class_10ABDAE0 Unknown04[8];
};

struct Struct_10B1BC90
{
    char Unknown00[0x110];
    int Unknown110;
};

// FUNCTION: 0x10B197E0 ?FUN_10b197e0@Class_10B197E0@@QAEXXZ
void Class_10B197E0::FUN_10b197e0()
{
    FUN_10b19550(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x10B1ABA0 ?FUN_10b1aba0@Class_10B1B8A0@@QAEXXZ
void Class_10B1B8A0::FUN_10b1aba0()
{
    for (int i = 0; i < 8; i++)
        Unknown04[i].FUN_10abdae0(0);
    FUN_10b1a840();
}

// FUNCTION: 0x10B1BC90 ?FUN_10b1bc90@Class_10E79464@@UAEXPAUStruct_10B1BC90@@@Z
void Class_10E79464::FUN_10b1bc90(Struct_10B1BC90* p1)
{
    if (p1->Unknown110)
        FUN_10b1ba70();
}
