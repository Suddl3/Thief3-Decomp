// Game/Class_Field0c_D_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C3E140.h"

class Class_Field0c_D
{
public:
    int FindIndex(int A);
    unsigned char FUN_10b470d0(int A);

    char Unknown00[8];
    Class_10C3E140* Unknown08[2];
};

// FUNCTION: 0x10B470D0 ?FUN_10b470d0@Class_Field0c_D@@QAEEH@Z
unsigned char Class_Field0c_D::FUN_10b470d0(int A)
{
    int Index = FindIndex(A);
    if (Index >= 0)
        return Unknown08[Index]->IsActive();
    return 0;
}
