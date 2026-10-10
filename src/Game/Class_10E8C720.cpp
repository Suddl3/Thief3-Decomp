// Game/Class_10E8C720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C720.h"
#include "Game/Class_10E8C950.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA5290 ?FUN_10ba5290@Class_10E8C720@@UAEPAVClass_10E8C950@@XZ
Class_10E8C950* Class_10E8C720::FUN_10ba5290()
{
    Class_10E8C950* Object = (Class_10E8C950*)operator new(sizeof(Class_10E8C950), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba52d0();
    return 0;
}
