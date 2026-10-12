// Game/Class_10E4CCD0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"
#include "Game/State_PlayAction.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

struct Struct_10B98E00;

// FUNCTION: 0x10B98050 ?CreatePlayActionState@Class_10E4CCD0@@UAEPAVState_PlayAction@@PAUStruct_10B98E00@@_N1@Z
State_PlayAction* Class_10E4CCD0::CreatePlayActionState(Struct_10B98E00* A, bool B, bool C)
{
    return new(0, 0, 0, 0, 0) State_PlayAction((int)A, (int)this, B, C);
}
