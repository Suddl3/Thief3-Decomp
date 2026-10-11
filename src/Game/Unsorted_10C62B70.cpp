// Game/Unsorted_10C62B70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

extern float DAT_10e9cbe0;

extern double DAT_10e9cbd8;

extern double DAT_10e9cbd0;

extern float DAT_10f06a70;

extern float DAT_10f06a74;

extern unsigned char DAT_10ff7115;

// FUNCTION: 0x10C62B70 ?FUN_10c62b70@@YAMM@Z
float FUN_10c62b70(float X)
{
    if (DAT_10ff7115 == 0)
        return X;
    float Y = X;
    if (X < 0.0f)
        Y = 0.0f;
    else if (X > 1.0f)
        Y = 1.0f;
    Y = log((1.0f - DAT_10f06a74) * Y + DAT_10f06a74) / DAT_10f06a70 * 0.1f + 1.0f;
    if (Y < 0.0f)
        return 0.0f;
    if (Y > 1.0f)
        return 1.0f;
    return Y;
}

// FUNCTION: 0x10C62C10 ?FUN_10c62c10@@YAXM@Z
void FUN_10c62c10(float X)
{
    if (X <= 0.01f)
        X = 0.1f;
    else if (X >= DAT_10e9cbe0 && X <= DAT_10e9cbd8)
        X = 1.05f;
    DAT_10f06a70 = log(X);
    DAT_10f06a74 = pow((double)X, DAT_10e9cbd0);
}
