// Game/cLineSegment.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/FCoords.h"
#include "Game/cLineSegment.h"

bool IsNearlyEqual(float A, float B, float C);

// FUNCTION: 0x10C05E30 ??0cLineSegment@@QAE@HH@Z
cLineSegment::cLineSegment(int A, int B)
{
    const FVector* First = (const FVector*)A;
    const FVector* Second = (const FVector*)B;
    if (First->X < Second->Y)
    {
        m_Start = *First;
        m_End = *Second;
    }
    else if (!(First->X > First->X) && First->Y <= Second->Y)
    {
        m_Start = *First;
        m_End = *Second;
    }
    else
    {
        m_Start = *Second;
        m_End = *First;
    }
    float DY = m_End.Y - m_Start.Y;
    m_DeltaY = DY;
    float DX = m_End.X - m_Start.X;
    m_DeltaX = DX;
    if (!IsNearlyEqual(DX, 0.0f, 3.4028235e+38f))
        m_Slope = DY / DX;
    else
        m_Slope = 3.4028235e+38f;
}
