// Game/Unsorted_10C64E80_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E9CB00.h"
#include "Game/Struct_10C64E10.h"

class Class_10D4C990
{
public:
    void FUN_10d4c990(int NewCount);

    int Unknown00;
    int Unknown04;
    Struct_10C64E10* Unknown08;
};

class Class_10C662F0
{
public:
    bool FUN_10c662f0(int A, int B, int C);
    void FUN_10c64e10(Class_10E9CB00* A);
    void FUN_10c64ff0(Class_10E9CB00* A);

    char Unknown00[0x178];
    Class_10D4C990 Unknown178;
};

// FUNCTION: 0x10C64FF0 ?FUN_10c64ff0@Class_10C662F0@@QAEXPAVClass_10E9CB00@@@Z
void Class_10C662F0::FUN_10c64ff0(Class_10E9CB00* A)
{
    for (int i = 0; i < Unknown178.Unknown00; i++)
    {
        if (Unknown178.Unknown08[i].Unknown00 == A)
        {
            if (--Unknown178.Unknown08[i].Unknown04 == 0)
            {
                delete Unknown178.Unknown08[i].Unknown00;
                Class_10D4C990* Array = &Unknown178;
                int Last = Array->Unknown00 - 1;
                Struct_10C64E10 Removed = Array->Unknown08[i];
                Array->Unknown08[i] = Array->Unknown08[Last];
                Array->Unknown08[Last] = Removed;
                Array->FUN_10d4c990(Array->Unknown00 - 1);
            }
        }
    }
}
