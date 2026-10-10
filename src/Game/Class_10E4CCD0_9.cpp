// Game/Unsorted_10B980E0_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10B98E00;

class Class_10E4CCD0;

class Class_10E95288
{
public:
    Class_10E95288(Struct_10B98E00* A, Class_10E4CCD0* B);

    int Unknown00[24];
};

// FUNCTION: 0x10B98980 ?FUN_10b98980@Class_10E4CCD0@@UAEPAVClass_10E95288@@PAUStruct_10B98E00@@@Z
Class_10E95288* Class_10E4CCD0::FUN_10b98980(Struct_10B98E00* A)
{
    return new(0, 0, 0, 0, 0) Class_10E95288(A, this);
}
