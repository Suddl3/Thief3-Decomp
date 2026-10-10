// Game/Class_10E8C698.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C698.h"
#include "Game/Class_10E8C7B8.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4600 ?FUN_10ba4600@Class_10E8C698@@UAEPAVClass_10E8C7B8@@XZ
Class_10E8C7B8* Class_10E8C698::FUN_10ba4600()
{
    Class_10E8C7B8* Object = (Class_10E8C7B8*)operator new(sizeof(Class_10E8C7B8), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4640();
    return 0;
}
