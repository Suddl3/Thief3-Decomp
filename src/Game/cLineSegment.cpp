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
        Unknown0C = *First;
        Unknown18 = *Second;
    }
    else if (!(First->X > First->X) && First->Y <= Second->Y)
    {
        Unknown0C = *First;
        Unknown18 = *Second;
    }
    else
    {
        Unknown0C = *Second;
        Unknown18 = *First;
    }
    float DY = Unknown18.Y - Unknown0C.Y;
    m_DeltaY = DY;
    float DX = Unknown18.X - Unknown0C.X;
    m_DeltaX = DX;
    if (!IsNearlyEqual(DX, 0.0f, 3.4028235e+38f))
        m_Slope = DY / DX;
    else
        m_Slope = 3.4028235e+38f;
}
