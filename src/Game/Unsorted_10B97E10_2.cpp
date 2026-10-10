// Game/Unsorted_10B97E10_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E93020.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10B98E00;

// FUNCTION: 0x10B98050 ?FUN_10b98050@Class_10E4CCD0@@UAEPAVClass_10E93020@@PAUStruct_10B98E00@@_N1@Z
Class_10E93020* Class_10E4CCD0::FUN_10b98050(Struct_10B98E00* A, bool B, bool C)
{
    return new(0, 0, 0, 0, 0) Class_10E93020((int)A, (int)this, B, C);
}
