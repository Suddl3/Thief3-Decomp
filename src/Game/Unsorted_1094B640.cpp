// Game/Unsorted_1094B640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_1094C3F0.h"
#include "Game/Struct_1094C6E0.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_10E499F4 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual Struct_1094C6E0 FUN_1094c6e0();

    char Unknown04[0x30];
    Struct_1094C6E0 Unknown34;
};

// FUNCTION: 0x1094C3F0 ?FUN_1094c3f0@Class_1094C3F0@@QAEXXZ
void Class_1094C3F0::FUN_1094c3f0()
{
    FUN_1094b640(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}

// FUNCTION: 0x1094C6E0 ?FUN_1094c6e0@Class_10E499F4@@UAE?AUStruct_1094C6E0@@XZ
Struct_1094C6E0 Class_10E499F4::FUN_1094c6e0()
{
    return Unknown34;
}
