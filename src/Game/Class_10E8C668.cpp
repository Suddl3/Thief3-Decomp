// Game/Class_10E8C668.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C668.h"
#include "Game/Class_10E8C728.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA41F0 ?Create@Class_10E8C668@@UAEPAVClass_10E8C728@@XZ
Class_10E8C728* Class_10E8C668::Create()
{
    Class_10E8C728* Object = (Class_10E8C728*)operator new(sizeof(Class_10E8C728), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Init();
    return 0;
}
