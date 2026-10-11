// Game/Unsorted_10BED1C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BED1C0.h"

class Class_10BB8360
{
public:
    int FUN_10bb85d0();
    void FUN_10bb8360(int A, float B, int C);
    void FUN_10bb83a0(int A, float B, int C);
};

// FUNCTION: 0x10BED1C0 ?FUN_10bed1c0@Class_10BED1C0@@QAEXXZ
void Class_10BED1C0::FUN_10bed1c0()
{
    if (Unknown58 == 0)
    {
        int Value = Unknown04->FUN_10bb85d0();
        if (Value)
            Unknown04->FUN_10bb8360(Value, 0.5f, 0);
    }
    for (int i = 0; i < Unknown58; i++)
        Unknown04->FUN_10bb83a0(Unknown60[i] + 0x2c, 1.5f, 0);
}
