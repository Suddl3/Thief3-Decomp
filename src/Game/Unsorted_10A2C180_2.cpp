// Game/Unsorted_10A2C180_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A2C2F0.h"

struct Struct_10A2C2F0_Unknown10
{
    void* Unknown00;
    char Unknown04[0x18];
    int Unknown1C;
    char Unknown20[0x5E];
    bool Unknown7E;
    char Unknown7F[0x31];
};

// FUNCTION: 0x10A2C200 ?FUN_10a2c200@Class_10A2C2F0@@QAEXPAXPAH@Z
void Class_10A2C2F0::FUN_10a2c200(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (Unknown10[i].Unknown00 == A && Unknown10[i].Unknown1C == *B)
        {
            Unknown10[i].Unknown7E = true;
            return;
        }
    }
}

// FUNCTION: 0x10A2C250 ?FUN_10a2c250@Class_10A2C2F0@@QAEXPAXPAH@Z
void Class_10A2C2F0::FUN_10a2c250(void* A, int* B)
{
    for (int i = 0; i < Unknown08; i++)
    {
        if (Unknown10[i].Unknown00 == A && Unknown10[i].Unknown1C == *B)
        {
            Unknown10[i].Unknown7E = false;
            return;
        }
    }
}
