// Game/Class_10E5D948.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E5D948.h"
#include "Game/Class_10E6D300.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10AA07A0 ?Create@Class_10E5D948@@UAEPAVClass_10E6D300@@XZ
Class_10E6D300* Class_10E5D948::Create()
{
    Class_10E6D300* Object = (Class_10E6D300*)operator new(sizeof(Class_10E6D300), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
