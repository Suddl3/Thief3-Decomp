// Game/Unsorted_10A6FF60.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_1098E330.h"
#include "Game/Class_10A707F0.h"
#include "Game/Class_10B06220.h"

class Class_10A48230
{
public:
    char Unknown00[0xE8];
    Class_1098E330* Unknown0E8;
};

Class_10A48230* FUN_10a48230(int A, int B);

// FUNCTION: 0x10A707F0 ?FUN_10a707f0@Class_10A707F0@@QAE_NPAVClass_10B06220@@HH@Z
bool Class_10A707F0::FUN_10a707f0(Class_10B06220* A, int B, int C)
{
    Class_10A48230* Found = FUN_10a48230(B, C);
    if (Found)
    {
        int Key = 0;
        Found->Unknown0E8->FUN_1098e330(0x800523, &Key);
        if (Key != 0)
        {
            FUN_10a6fe10(A, B, C);
            A->FUN_10ada010(0x2000399);
            return true;
        }
    }
    return false;
}
