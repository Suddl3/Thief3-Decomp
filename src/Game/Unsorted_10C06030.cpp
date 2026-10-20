// Game/Unsorted_10C06030.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <float.h>

class cLineSegment
{
public:
    float Unknown00;
    float Unknown04;
    char Pad08[0x4];
    float Unknown0C;
    float Unknown10;
    float Unknown14;
    char Pad18[0x8];
    float Unknown20;
};

bool IsNearlyEqual(float A, float B, float Tolerance);

int CompareWithTolerance(float A, float B, float Tolerance);

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10C06030 ?FUN_10c06030@@YA_NPBVcLineSegment@@0PAM_N@Z
bool FUN_10c06030(const cLineSegment* A, const cLineSegment* B, float* Out, bool Inclusive)
{
    float Cross = A->Unknown00 * B->Unknown04 - A->Unknown04 * B->Unknown00;
    if (IsNearlyEqual(Cross, 0.0f, FLT_MAX))
        return false;

    float T = ((A->Unknown10 - B->Unknown10) * B->Unknown00 - (A->Unknown0C - B->Unknown0C) * B->Unknown04) * (DAT_10e49684 / Cross);
    float U = ((A->Unknown10 - B->Unknown10) * A->Unknown00 - (A->Unknown0C - B->Unknown0C) * A->Unknown04) * (DAT_10e49684 / Cross);
    if (Out)
    {
        Out[0] = T * A->Unknown00 + A->Unknown0C;
        Out[1] = T * A->Unknown04 + A->Unknown10;
        Out[2] = (A->Unknown20 - A->Unknown14) * T + A->Unknown14;
    }
    int Flag = Inclusive ? 1 : 0;
    int Start = IsNearlyEqual(T, 0.0f, FLT_MAX) ? 0 : (T < DAT_10eafbdc ? -1 : 1);
    if (Start > -Flag)
    {
        int End = IsNearlyEqual(T, 1.0f, FLT_MAX) ? 0 : (T < DAT_10e49684 ? -1 : 1);
        if (End < Flag && CompareWithTolerance(U, 0.0f, FLT_MAX) > -Flag && CompareWithTolerance(U, 1.0f, FLT_MAX) < Flag)
            return true;
    }
    return false;
}
