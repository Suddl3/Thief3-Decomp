// Game/Class_10E4CCD0_13.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E90D70.h"
#include "Game/Class_10E95898.h"
#include "Game/Struct_10B98E00.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

void* FUN_10be1c60();

extern float DAT_10eafbdc;

class Class_10E95288;

// FUNCTION: 0x10B98F60 ?FUN_10b98f60@Class_10E4CCD0@@UAEPAVClass_10E95898@@PAUStruct_10B98E00@@H_N@Z
Class_10E95898* Class_10E4CCD0::FUN_10b98f60(Struct_10B98E00* A, int B, bool C)
{
    void* Id = FUN_10be1c60();
    if (Id && A->Unknown08->FUN_10dbd510((int)Id)->FUN_10bbdb40() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E95898((int)A, (int)this, B, C);
    return 0;
}
