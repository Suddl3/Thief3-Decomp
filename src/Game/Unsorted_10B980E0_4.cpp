// Game/Unsorted_10B980E0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E90D70.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class Class_10E93E48 : public Class_10E90D70
{
public:
    Class_10E93E48(int A, int B);
};

// FUNCTION: 0x10B98290 ?FUN_10b98290@Class_10E4CCD0@@UAEPAVClass_10E93E48@@H@Z
Class_10E93E48* Class_10E4CCD0::FUN_10b98290(int A)
{
    return new(0, 0, 0, 0, 0) Class_10E93E48(A, (int)this);
}
