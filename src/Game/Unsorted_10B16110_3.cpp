// Game/Unsorted_10B16110_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10B251A0.h"
#include "Game/Class_10B251B0.h"
#include "Game/Class_10B2E000.h"

class Class_10B255F0;

Class_10B255F0* FUN_10b25cd0();

class Class_10B2D600
{
public:
    void FUN_10b2d600();
};

class Class_10BFBD70;

class Class_10B16930
{
public:
    Class_10BFBD70 FUN_109e6d80(int A);
    void FUN_10b164e0(int A, int B, char C);
    void FUN_10b166a0();
    void FUN_10b16930();
    void FUN_10b16780();
    void FUN_10b16860(int A);
    void FUN_10b16ef0(int A);

    char Pad00[0x1];
};

// FUNCTION: 0x10B164E0 ?FUN_10b164e0@Class_10B16930@@QAEXHHD@Z
void Class_10B16930::FUN_10b164e0(int A, int B, char C)
{
    int Value = 0;
    Class_10BFBD70 Found = FUN_109e6d80(0x6a);
    if (Found.Count > 0)
        Value = Found.Data[0];
    if (C)
    {
        if (Value)
            ((Class_10B2D600*)Value)->FUN_10b2d600();
        Class_10B255F0* Obj = FUN_10b25cd0();
        if ((char)A != 0)
            ((Class_10B251B0*)Obj)->FUN_10b251b0();
        else
            ((Class_10B251A0*)Obj)->FUN_10b251a0();
    }
    if (Value)
        ((Class_10B2E000*)Value)->FUN_10b2e000(A, B);
}
