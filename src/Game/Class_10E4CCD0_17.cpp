// Game/Class_10E4CCD0_17.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E4CCD0.h"
#include "Game/State_Gassed.h"
#include "Game/Struct_10B98E00.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

int GetGassedEnableId();

extern float DAT_10eafbdc;

class Class_10E95288;

class Class_10E95898;

class cYellowAlert;

class Class_10E93878;

class Class_10E96FD0;

// FUNCTION: 0x10B999E0 ?CreateGassedState@Class_10E4CCD0@@UAEPAVState_Gassed@@PAUStruct_10B98E00@@H@Z
State_Gassed* Class_10E4CCD0::CreateGassedState(Struct_10B98E00* A, int B)
{
    int Id = GetGassedEnableId();
    if (Id && A->Unknown08->FUN_10dbd510(Id)->GetFloat() > DAT_10eafbdc)
        return new(0, 0, 0, 0, 0) State_Gassed((int)A, (int)this, B);
    return 0;
}
