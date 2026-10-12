// Game/Unsorted_10A6B3E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include <math.h>
#include "Game/Class_10A6B450.h"

float appFrand();

struct Struct_10A6B450_Param
{
    int Unknown00;
    FVector Unknown04;
};

// FUNCTION: 0x10A6B450 ?FUN_10a6b450@Class_10A6B450@@QAEXPAUStruct_10A6B450_Param@@PAVFVector@@@Z
void Class_10A6B450::FUN_10a6b450(Struct_10A6B450_Param* Out, FVector* In)
{
    FVector V = *In;
    V.Normalize();
    FVector Dir = V;
    float Len = sqrt(In->X * In->X + In->Y * In->Y + In->Z * In->Z);
    float Scale;
    if (Len < m_MinLength)
    {
        float Hi = m_MaxLength;
        float Lo = m_MinLength;
        Scale = (Hi - Lo) * appFrand() + Lo;
    }
    else
    {
        Scale = Len > m_MaxLength ? m_MaxLength : Len;
    }
    Out->Unknown04 = Dir * Scale;
}
