// Game/Unsorted_10B980E0_6.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E92730
{
public:
    Class_10E92730(int A, int B);

    char Unknown00[0x6C];
};

// FUNCTION: 0x10B98740 ?FUN_10b98740@Class_10E4CCD0@@UAEPAVClass_10E92730@@H@Z
Class_10E92730* Class_10E4CCD0::FUN_10b98740(int A)
{
    return new(0, 0, 0, 0, 0) Class_10E92730(A, (int)this);
}
