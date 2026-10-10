// Game/Class_10E8C6F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6F0.h"
#include "Game/Class_10E8C8C0.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4E20 ?FUN_10ba4e20@Class_10E8C6F0@@UAEPAVClass_10E8C8C0@@XZ
Class_10E8C8C0* Class_10E8C6F0::FUN_10ba4e20()
{
    Class_10E8C8C0* Object = (Class_10E8C8C0*)operator new(sizeof(Class_10E8C8C0), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4e60();
    return 0;
}
