// Game/Class_10E8C670.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C670.h"
#include "Game/Class_10E8C740.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA42B0 ?Create@Class_10E8C670@@UAEPAVClass_10E8C740@@XZ
Class_10E8C740* Class_10E8C670::Create()
{
    Class_10E8C740* Object = (Class_10E8C740*)operator new(sizeof(Class_10E8C740), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
