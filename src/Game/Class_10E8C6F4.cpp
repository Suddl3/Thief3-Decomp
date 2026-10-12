// Game/Class_10E8C6F4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6F4.h"
#include "Game/Class_10E8C8CC.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4E80 ?Create@Class_10E8C6F4@@UAEPAVClass_10E8C8CC@@XZ
Class_10E8C8CC* Class_10E8C6F4::Create()
{
    Class_10E8C8CC* Object = (Class_10E8C8CC*)operator new(sizeof(Class_10E8C8CC), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
