// Game/Class_10E8C724.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C724.h"
#include "Game/Class_10E8C95C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA52F0 ?Create@Class_10E8C724@@UAEPAVClass_10E8C95C@@XZ
Class_10E8C95C* Class_10E8C724::Create()
{
    Class_10E8C95C* Object = (Class_10E8C95C*)operator new(sizeof(Class_10E8C95C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
