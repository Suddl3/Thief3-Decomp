// Game/Unsorted_10B89360.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B89360.h"

class FVector
{
public:
    float X, Y, Z;
};

// FUNCTION: 0x10B89360 ?FUN_10b89360@Class_10B89360@@QAEHPAVFVector@@@Z
int Class_10B89360::FUN_10b89360(FVector* A)
{
    for (int i = 0; i < Unknown00; i++)
    {
        FVector* Current = &Unknown08[i];
        if (Current->X == A->X && Current->Y == A->Y && Current->Z == A->Z)
            return i;
    }
    return -1;
}
