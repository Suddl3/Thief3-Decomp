// Game/Unsorted_10C05F10.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <float.h>

#include "Game/cLineSegment.h"

bool IsNearlyEqual(float A, float B, float Tolerance);

extern float DAT_10eafbdc;

extern float DAT_10e49684;

// FUNCTION: 0x10C05F10 ?FUN_10c05f10@@YA_NPBVcLineSegment@@0PAM_N@Z
bool FUN_10c05f10(const cLineSegment* A, const cLineSegment* B, float* Out, bool Inclusive)
{
    float Cross = A->m_DeltaX * B->m_DeltaY - A->m_DeltaY * B->m_DeltaX;
    if (!IsNearlyEqual(Cross, 0.0f, FLT_MAX))
    {
        float T = ((A->m_Start.Y - B->m_Start.Y) * A->m_DeltaX - (A->m_Start.X - B->m_Start.X) * A->m_DeltaY) / Cross;
        if (Out)
        {
            Out[0] = T * B->m_DeltaX + B->m_Start.X;
            Out[1] = T * B->m_DeltaY + B->m_Start.Y;
            Out[2] = (B->m_End.Z - B->m_Start.Z) * T + B->m_Start.Z;
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
