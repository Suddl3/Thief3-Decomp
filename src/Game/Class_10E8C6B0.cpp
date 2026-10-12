// Game/Class_10E8C6B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6B0.h"
#include "Game/Class_10E8C800.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4820 ?Create@Class_10E8C6B0@@UAEPAVClass_10E8C800@@XZ
Class_10E8C800* Class_10E8C6B0::Create()
{
    Class_10E8C800* Object = (Class_10E8C800*)operator new(sizeof(Class_10E8C800), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
