// Game/Class_10E8C714.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C714.h"
#include "Game/Class_10E8C92C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA5170 ?Create@Class_10E8C714@@UAEPAVClass_10E8C92C@@XZ
Class_10E8C92C* Class_10E8C714::Create()
{
    Class_10E8C92C* Object = (Class_10E8C92C*)operator new(sizeof(Class_10E8C92C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
