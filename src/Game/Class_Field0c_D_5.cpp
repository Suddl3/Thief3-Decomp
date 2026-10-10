// Game/Class_Field0c_D_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10C3E140.h"

class Class_Field0c_D
{
public:
    int FUN_10b47020(int A);

    char Unknown00[8];
    Class_10C3E140* Unknown08[2];
};

// FUNCTION: 0x10B47020 ?FUN_10b47020@Class_Field0c_D@@QAEHH@Z
int Class_Field0c_D::FUN_10b47020(int A)
{
    for (int i = 0; i < 2; i++)
    {
        if (Unknown08[i]->FUN_10c3e140() && Unknown08[i]->FUN_10aab5c0() == A)
            return i;
    }
    return -1;
}
