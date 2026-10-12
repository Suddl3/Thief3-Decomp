// Game/Class_10E8C700.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C700.h"
#include "Game/Class_10E8C8F0.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4FA0 ?Create@Class_10E8C700@@UAEPAVClass_10E8C8F0@@XZ
Class_10E8C8F0* Class_10E8C700::Create()
{
    Class_10E8C8F0* Object = (Class_10E8C8F0*)operator new(sizeof(Class_10E8C8F0), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
