// Game/Class_10E4CCD0_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E90D70.h"
#include "Game/Class_10E928E8.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10B98570 ?FUN_10b98570@Class_10E4CCD0@@UAEPAVClass_10E928E8@@HH@Z
Class_10E928E8* Class_10E4CCD0::FUN_10b98570(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E928E8(A, (int)this);
}
