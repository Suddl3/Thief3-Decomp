// Game/Unsorted_10C60A90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C60C60.h"
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10C609D0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10C60BB0 ??0Class_10C60C60@@QAE@ABVFVector@@0@Z
Class_10C60C60::Class_10C60C60(const FVector& A, const FVector& B)
{
    GetAllocator()->Virtual8(0, 0);
    Unknown00 = new(0, 0, 0, 0, 0) Class_10C609D0(A, B);
    GetAllocator()->Virtual9();
}
