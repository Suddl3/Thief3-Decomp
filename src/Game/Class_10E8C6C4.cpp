// Game/Class_10E8C6C4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6C4.h"
#include "Game/Class_10E8C83C.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4A00 ?Create@Class_10E8C6C4@@UAEPAVClass_10E8C83C@@XZ
Class_10E8C83C* Class_10E8C6C4::Create()
{
    Class_10E8C83C* Object = (Class_10E8C83C*)operator new(sizeof(Class_10E8C83C), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
