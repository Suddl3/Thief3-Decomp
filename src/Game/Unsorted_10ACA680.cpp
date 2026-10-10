// Game/Unsorted_10ACA680.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6FEE8.h"
#include "Game/Class_10E6FFA0.h"

struct Info_10ACB3B0
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

// FUNCTION: 0x10ACB0C0 ?FUN_10acb0c0@Class_10E6FEE8@@UAEXHHHH@Z
void Class_10E6FEE8::FUN_10acb0c0(int Code, int A, int B, int C)
{
    if (Code == 0xd)
        FUN_10acae80(A, B, C);
}

// FUNCTION: 0x10ACB3B0 ?FUN_10acb3b0@Class_10E6FFA0@@UAEXPAUInfo_10ACB3B0@@@Z
void Class_10E6FFA0::FUN_10acb3b0(Info_10ACB3B0* Out)
{
    Out->Unknown00 = 0.0f;
    Out->Unknown04 = 0.0f;
    Out->Unknown08 = -200.0f;
}
