// Game/Unsorted_10C05F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10C05F10 ?FUN_10c05f10@@YA_NPBVcLineSegment@@0PAM_N@Z
bool FUN_10c05f10(const cLineSegment* A, const cLineSegment* B, float* Out, bool Inclusive)
{
    float Cross = A->Unknown00 * B->Unknown04 - A->Unknown04 * B->Unknown00;
    if (!IsNearlyEqual(Cross, 0.0f, FLT_MAX))
    {
        float T = ((A->Unknown10 - B->Unknown10) * A->Unknown00 - (A->Unknown0C - B->Unknown0C) * A->Unknown04) / Cross;
        if (Out)
        {
            Out[0] = T * B->Unknown00 + B->Unknown0C;
            Out[1] = T * B->Unknown04 + B->Unknown10;
            Out[2] = (B->Unknown20 - B->Unknown14) * T + B->Unknown14;
        }
        int Flag = Inclusive ? 1 : 0;
        int Start = IsNearlyEqual(T, 0.0f, FLT_MAX) ? 0 : (T < DAT_10eafbdc ? -1 : 1);
        if (Start > -Flag)
        {
            int End = IsNearlyEqual(T, 1.0f, FLT_MAX) ? 0 : (T < DAT_10e49684 ? -1 : 1);
            if (End < Flag)
                return true;
        }
    }
    return false;
}
