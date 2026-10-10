// Game/Class_10E8C6C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6C8.h"
#include "Game/Class_10E8C848.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4A60 ?FUN_10ba4a60@Class_10E8C6C8@@UAEPAVClass_10E8C848@@XZ
Class_10E8C848* Class_10E8C6C8::FUN_10ba4a60()
{
    Class_10E8C848* Object = (Class_10E8C848*)operator new(sizeof(Class_10E8C848), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4aa0();
    return 0;
}
