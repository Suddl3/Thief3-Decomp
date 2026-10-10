// Game/Class_10E49B28.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10E49B28.h"

// FUNCTION: 0x10929C10 ?FUN_10929c10@Class_10E49B28@@UAEXHHHPAVFVector@@M@Z
void Class_10E49B28::FUN_10929c10(int A, int B, int C, FVector* D, FLOAT E)
{
    FVector Scaled = *D * 127.5f;
    FLOAT Alpha = E * 127.5f;
    Virtual1(A, B, C, (((BYTE)(int)Alpha << 8 | (BYTE)(int)Scaled.Z) << 8 | (BYTE)(int)Scaled.Y) << 8 | (BYTE)(int)Scaled.X);
}
