// Game/Unsorted_10C62B70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <math.h>

extern float DAT_10e9cbe0;

extern double DAT_10e9cbd8;

extern double DAT_10e9cbd0;

extern float DAT_10f06a70;

extern float DAT_10f06a74;

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
