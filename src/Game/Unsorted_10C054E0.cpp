// Game/Unsorted_10C054E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

bool IsNearlyEqual(float A, float B, float C);

extern float DAT_10eafbdc;

extern float DAT_10e4a718;

// FUNCTION: 0x10C054E0 ?IsNearlyEqual@@YA_NMMM@Z
bool IsNearlyEqual(float A, float B, float C)
{
    float Tol = C;
    float AbsB = B >= DAT_10eafbdc ? B : -B;
    float AbsA = A >= DAT_10eafbdc ? A : -A;
    float Max = AbsA >= AbsB ? AbsA : AbsB;
    if (C == DAT_10e4a718)
        Tol = Max * 1e-6f;
    if (B - Tol <= A && A <= B + Tol)
        return true;
    return false;
}

// FUNCTION: 0x10C05590 ?CompareWithTolerance@@YAHMMM@Z
int CompareWithTolerance(float A, float B, float C)
{
    if (IsNearlyEqual(A, B, C))
        return 0;
    return A < B ? -1 : 1;
}
