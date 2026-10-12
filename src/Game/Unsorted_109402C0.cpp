// Game/Unsorted_109402C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10940830.h"

// FUNCTION: 0x10940830 ?SampleTable@Class_10940830@@QAEMM@Z
float Class_10940830::SampleTable(float Scale)
{
    unsigned int Count = m_Count;
    if (Count <= 0)
        return Scale;
    unsigned int Last = Count - 1;
    unsigned int Index = (unsigned int)((float)Last * Scale);
    if (Index >= Count)
        Index = Last;
    return m_Table[Index];
}
