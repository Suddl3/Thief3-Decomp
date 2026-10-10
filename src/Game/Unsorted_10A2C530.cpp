// Game/Unsorted_10A2C530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10A2C2F0.h"
#include "Game/Class_10A2C610.h"

Class_10905A90_Member* FUN_10905aa0();

struct Struct_10A2C580
{
    char Unknown00[8];
    void* Unknown08;
    char Unknown0C[0x71];
    char Unknown7D;
};

// FUNCTION: 0x10A2C580 ?FUN_10a2c580@Class_10A2C2F0@@QAE_NPAX00@Z
bool Class_10A2C2F0::FUN_10a2c580(void* A, void* B, void* C)
{
    Struct_10A2C580* Entry = (Struct_10A2C580*)FUN_10a2c2f0(A, C);
    if (Entry && !Entry->Unknown7D && Entry->Unknown08 == B)
        return true;
    return false;
}

// FUNCTION: 0x10A2C610 ?FUN_10a2c610@Class_10A2C610@@QAEXXZ
void Class_10A2C610::FUN_10a2c610()
{
    FUN_10a2c3b0(0);
    if (Unknown04)
    {
        FUN_10905aa0()->Virtual5(Unknown08);
        Unknown08 = 0;
        Unknown04 = 0;
    }
}
