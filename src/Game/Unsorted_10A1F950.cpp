// Game/Unsorted_10A1F950.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>
#include "Game/Class_10A1F9C0.h"
#include "Game/Class_10A1F9D0.h"
#include "Game/Class_10A1FA70.h"
#include "Game/Class_10A1FB50.h"
#include "Game/cBuildFleshBSP.h"
#include "Game/Struct_10A1FA70.h"
#include "Game/Class_1098E330.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E65590.h"

// FUNCTION: 0x10A1F9C0 ?GetFirst@Class_10A1F9C0@@QAEHXZ
int Class_10A1F9C0::GetFirst()
{
    if (m_Count <= 0)
        return 0;
    return *m_Values;
}

// FUNCTION: 0x10A1F9D0 ?Lookup@Class_10A1F9D0@@QAEHH@Z
int Class_10A1F9D0::Lookup(int A)
{
    int Index = FUN_10a1f8a0(A);
    if (Index >= 0 && Index < m_Count)
        return m_Values[Index];
    return 0;
}

// FUNCTION: 0x10A1FA70 ?GetEntry@Class_10A1FA70@@QAEXHPAH0@Z
void Class_10A1FA70::GetEntry(int Index, int* A, int* B)
{
    if (Index < m_Entries.size())
    {
        *A = m_Entries[Index].Unknown00;
        *B = m_Entries[Index].Unknown04;
    }
    else
    {
        *A = -1;
        *B = -1;
    }
}

// FUNCTION: 0x10A1FB50 ?Lookup@Class_10A1FB50@@QAEHH@Z
int Class_10A1FB50::Lookup(int A)
{
    int Index = FUN_10a1fad0(A);
    if (Index >= 0 && Index < m_Count)
        return m_Values[Index];
    return 0;
}
