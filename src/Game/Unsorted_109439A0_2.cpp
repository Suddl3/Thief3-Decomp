// Game/Unsorted_109439A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A32000.h"
#include "Game/Object_10944D50.h"

extern "C" void* memcpy(void*, const void*, unsigned int);

// FUNCTION: 0x10944CD0 ?AppendBuffer@@YGXPAVObject_10944D50@@PAVClass_10A32000@@PAH@Z
void __stdcall AppendBuffer(Object_10944D50* A, Class_10A32000* C, int* Offset)
{
    int Base = 0;
    A->Virtual6(0, 0, &Base);
    int Size = A->Virtual4() * A->Virtual3();
    char* Src = (char*)Base;
    C->SetCount(*Offset + Size);
    memcpy(C->m_Data + *Offset, Src, Size);
    *Offset += Size;
    A->Virtual7();
}
