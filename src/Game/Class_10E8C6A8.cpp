// Game/Unsorted_10BA4760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6A8.h"
#include "Game/Class_10E8C7E8.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4760 ?FUN_10ba4760@Class_10E8C6A8@@UAEPAVClass_10E8C7E8@@XZ
Class_10E8C7E8* Class_10E8C6A8::FUN_10ba4760()
{
    Class_10E8C7E8* Object = (Class_10E8C7E8*)operator new(sizeof(Class_10E8C7E8), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba47a0();
    return 0;
}
