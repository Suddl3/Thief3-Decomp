// Game/Class_10E7C584.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109A62E0.h"
#include "Game/Class_10B48300.h"
#include "Game/Class_10E7C584.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_109A62E0;

class Class_10B48300;

class Class_10E7C584;

// FUNCTION: 0x10B398D0 ??0Class_10E7C584@@QAE@PAVClass_109A62E0@@@Z
Class_10E7C584::Class_10E7C584(Class_109A62E0* A)
{
    Unknown04 = 0;
    m_Registry = A;
    int Index = 0;
    for (int i = 0; i < 8; i++)
    {
        m_Children[i] = new(0, 0, 0, 0, 0) Class_10B48300(A, Index, Index + 1);
        Index += 2;
    }
    m_Children[0]->FUN_10b470c0();
    A->FUN_109a62c0(this);
}
