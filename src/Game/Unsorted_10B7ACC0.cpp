// Game/Unsorted_10B7ACC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B7ACC0.h"
#include "Game/Class_10B7AD00.h"

class Class_109B5E00
{
public:
    void FUN_109b5e00(int A, int B, float C);
    void FUN_109b5f20(int A, int B, int C);
};

// FUNCTION: 0x10B7ACC0 ?FUN_10b7acc0@Class_10B7ACC0@@QAEXMH@Z
void Class_10B7ACC0::FUN_10b7acc0(float Value, int Index)
{
    if (Unknown34 > Index)
    {
        Unknown3C[Index] = Value;
        Unknown04->FUN_109b5e00(Unknown14, Index, Value);
        Unknown04->FUN_109b5f20(Unknown14, Index, 1);
    }
}

// FUNCTION: 0x10B7AD00 ?FUN_10b7ad00@Class_10B7AD00@@QAEHH@Z
int Class_10B7AD00::FUN_10b7ad00(int Index)
{
    if (Unknown28 > Index)
        return Unknown30[Index];
    return 0x101;
}
