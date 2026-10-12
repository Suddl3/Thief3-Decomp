// Game/Class_10E4CCD0_19.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E4CCD0.h"
#include "Game/Class_10E90D70.h"
#include "Game/Class_10E96EB0.h"
#include "Game/Struct_10B98E00.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int FUN_10be9210();

extern float DAT_10eafbdc;

class Class_10E95288;

class Class_10E95898;

class cYellowAlert;

class State_Gassed;

class Class_10E93878;

// FUNCTION: 0x10B99EF0 ?FUN_10b99ef0@Class_10E4CCD0@@UAEPAVClass_10E96EB0@@PAUStruct_10B98E00@@HH@Z
Class_10E96EB0* Class_10E4CCD0::FUN_10b99ef0(Struct_10B98E00* A, int B, int C)
{
    int Id = FUN_10be9210();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) Class_10E96EB0((int)A, (int)this, B, C);
    return 0;
}
