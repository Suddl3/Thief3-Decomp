// Game/Class_10E8C6BC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6BC.h"
#include "Game/Class_10E8C824.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4940 ?Create@Class_10E8C6BC@@UAEPAVClass_10E8C824@@XZ
Class_10E8C824* Class_10E8C6BC::Create()
{
    Class_10E8C824* Object = (Class_10E8C824*)operator new(sizeof(Class_10E8C824), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
