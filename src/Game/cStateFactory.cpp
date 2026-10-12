// Game/cStateFactory.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cStateFactory.h"
#include "Game/Class_10E8C77C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4470 ?FUN_10ba4470@cStateFactory@@UAEPAVClass_10E8C77C@@XZ
Class_10E8C77C* cStateFactory::FUN_10ba4470()
{
    Class_10E8C77C* Object = (Class_10E8C77C*)operator new(sizeof(Class_10E8C77C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
