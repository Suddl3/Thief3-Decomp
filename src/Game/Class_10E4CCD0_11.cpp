// Game/Class_10E4CCD0_11.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class State_MunchCorpse
{
public:
    State_MunchCorpse(int A, int B, int C);

    int Unknown00[21];
};

// FUNCTION: 0x10B98B30 ?CreateMunchCorpseState@Class_10E4CCD0@@UAEPAVState_MunchCorpse@@HH@Z
State_MunchCorpse* Class_10E4CCD0::CreateMunchCorpseState(int A, int B)
{
    return new(0, 0, 0, 0, 0) State_MunchCorpse(A, (int)this, B);
}
