// Game/Unsorted_10C38500.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C38500.h"
#include "Game/Class_10C385A0.h"
#include "Game/Struct_10C37D30.h"

bool FUN_10c37d30(void* A, int B, int C, float D, float E, int F, int G, Struct_10C37D30 H);

class Class_10C24C20
{
public:
    void FUN_10c24c20(int p1);
};

// FUNCTION: 0x10C38500 ?FUN_10c38500@Class_10C38500@@QAEXH@Z
void Class_10C38500::FUN_10c38500(int p1)
{
    if (UnknownB4)
        UnknownB4->FUN_10c24c20(p1);
}

// FUNCTION: 0x10C385A0 ?FUN_10c385a0@Class_10C385A0@@QAEXXZ
void Class_10C385A0::FUN_10c385a0()
{
    FUN_10c37d30(Unknown48, Unknown84, 1, -1.0f, 1.0f, 1, 1, Struct_10C37D30());
}
