// Game/Class_10E4CCD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E4CCD0.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

class State_SearchLook
{
public:
    State_SearchLook(int A, int B);

    char Unknown00[0x48];
};

// FUNCTION: 0x10B97F30 ?CreateSearchLookState@Class_10E4CCD0@@UAEPAVState_SearchLook@@H@Z
State_SearchLook* Class_10E4CCD0::CreateSearchLookState(int A)
{
    return new(0, 0, 0, 0, 0) State_SearchLook(A, (int)this);
}
