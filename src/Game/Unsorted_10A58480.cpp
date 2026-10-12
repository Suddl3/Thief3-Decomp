// Game/Unsorted_10A58480.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10A58490.h"

// FUNCTION: 0x10A58490 ?SetEnd@Class_10A58490@@QAEXABVFVector@@@Z
void Class_10A58490::SetEnd(const FVector& A)
{
    m_End = A;
    m_Delta = m_End - m_Start;
}
