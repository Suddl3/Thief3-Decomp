// Game/Class_10E8C69C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C69C.h"
#include "Game/cStateFlee.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4650 ?CreateStateFlee@Class_10E8C69C@@UAEPAVcStateFlee@@XZ
cStateFlee* Class_10E8C69C::CreateStateFlee()
{
    cStateFlee* Object = (cStateFlee*)operator new(sizeof(cStateFlee), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
