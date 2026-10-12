// Game/Unsorted_10914180_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10914180.h"
#include "Game/Class_10915210.h"

class Class_1090A780;

// FUNCTION: 0x10914180 ?SetAll@Class_10914180@@QAEXABVClass_1090A780@@H@Z
void Class_10914180::SetAll(const Class_1090A780& A, int B)
{
    for (int i = 0; i < m_ChildCount; i++)
        m_Children[i]->FUN_109152a0(A, B);
}
