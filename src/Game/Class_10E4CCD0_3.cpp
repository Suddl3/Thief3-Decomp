// Game/Class_10E4CCD0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E93B68.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B980E0 ?FUN_10b980e0@Class_10E4CCD0@@UAEPAVClass_10E93B68@@H@Z
Class_10E93B68* Class_10E4CCD0::FUN_10b980e0(int A)
{
    return new(0, 0, 0, 0, 0) Class_10E93B68(A, (int)this);
}
