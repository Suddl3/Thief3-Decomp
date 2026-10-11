// Game/Unsorted_10C05660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

// FUNCTION: 0x10C059C0 ?FUN_10c059c0@@YAMPAM00@Z
float FUN_10c059c0(float* A, float* B, float* C)
{
    float Diff = C[0] - A[0];
    if (!(Diff >= DAT_10eafbdc))
        Diff = -Diff;
    float Start, Mid, End;
    if (Diff < 0.001f)
    {
        Start = A[1];
        Mid = B[1];
        End = C[1];
    }
    else
    {
        Start = A[0];
        Mid = B[0];
        End = C[0];
    }
    return (C[2] - A[2]) * ((Mid - Start) / (End - Start)) + A[2];
}
