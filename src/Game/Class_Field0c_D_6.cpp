// Game/Class_Field0c_D_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10C3E140.h"

class Class_Field0c_D
{
public:
    int FindIndex(int A);
    float FUN_10b471f0(int A);
    unsigned char FUN_10b470d0(int A);
    float FUN_10b47100(int A);
    float FUN_10b471c0(int A, int B);
    int FUN_10b46fd0();

    char Unknown00[8];
    Class_10C3E140* Unknown08[2];
};

// FUNCTION: 0x10B46FD0 ?FUN_10b46fd0@Class_Field0c_D@@QAEHXZ
int Class_Field0c_D::FUN_10b46fd0()
{
    for (int i = 1; i >= 0; i--)
    {
        int V = Unknown08[i]->GetUnknown08();
        if (Unknown08[i]->IsActive() && V != 0x101)
            return V;
    }
    return 0x101;
}
