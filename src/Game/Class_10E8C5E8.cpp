// Game/Class_10E8C5E8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C4A4.h"
#include "Game/Class_10E8C5E8.h"
#include "Game/Class_10E98530.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA3E70 ?Create@Class_10E8C5E8@@UAEPAVClass_10E8C4A4@@HH@Z
Class_10E8C4A4* Class_10E8C5E8::Create(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E8C4A4;
}

// FUNCTION: 0x10BA41C0 ??_GClass_10E8C4A4@@UAEPAXI@Z
// Compiler-generated: emitted with the class's vtable by 0x10BA3E70's definition in this unit.
