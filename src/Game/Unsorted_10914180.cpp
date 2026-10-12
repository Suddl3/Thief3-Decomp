// Game/Unsorted_10914180.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109141C0.h"
#include "Game/Class_10915210.h"

class Class_1090A780;

// FUNCTION: 0x109141C0 ?FUN_109141c0@Class_109141C0@@QAEXABVClass_1090A780@@@Z
void Class_109141C0::FUN_109141c0(const Class_1090A780& A)
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->FUN_109152c0(A);
}
