// Game/Unsorted_10A48230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10970890.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E678F0.h"

class Class_10970890;

class Class_1098E330
{
public:
    Class_10970890* FUN_10991eb0();

    char Unknown00[0x24];
    int Unknown24;
};

class Class_10E678F0;

// FUNCTION: 0x10A482C0 ?FUN_10a482c0@@YA_NPAVClass_1098E330@@0@Z
bool FUN_10a482c0(Class_1098E330* A, Class_1098E330* B)
{
    if (A && B && A->Unknown24 == B->Unknown24)
    {
        Class_10970890* First = A->FUN_10991eb0();
        Class_10970890* Second = B->FUN_10991eb0();
        if (First && Second)
        {
            Second->FUN_109724c0(B, First->Unknown5C);
            return true;
        }
    }
    return false;
}
