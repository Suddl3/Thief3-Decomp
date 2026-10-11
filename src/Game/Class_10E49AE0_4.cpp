// Game/Class_10E49AE0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10E49AE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(int A, int B, int C, DWORD D);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void FUN_10929920(int A, int B, int C, FVector* D, FLOAT E);
};

// FUNCTION: 0x10929920 ?FUN_10929920@Class_10E49AE0@@UAEXHHHPAVFVector@@M@Z
void Class_10E49AE0::FUN_10929920(int A, int B, int C, FVector* D, FLOAT E)
{
    FVector Scaled = (*D + FVector(1.0f, 1.0f, 1.0f)) * 127.5f;
    FLOAT Alpha = E * 127.5f;
    Virtual1(A, B, C, (((BYTE)(int)Alpha << 8 | (BYTE)(int)Scaled.X) << 8 | (BYTE)(int)Scaled.Y) << 8 | (BYTE)(int)Scaled.Z);
}
