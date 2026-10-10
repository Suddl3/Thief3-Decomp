// Game/Class_10E4CCD0_8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E95AC8
{
public:
    Class_10E95AC8(int A, int B, int C);

    char Unknown00[0x40];
};

// FUNCTION: 0x10B987D0 ?FUN_10b987d0@Class_10E4CCD0@@UAEPAVClass_10E95AC8@@HH@Z
Class_10E95AC8* Class_10E4CCD0::FUN_10b987d0(int A, int B)
{
    return new(0, 0, 0, 0, 0) Class_10E95AC8(A, (int)this, B);
}
