// Game/Unsorted_10BA44C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C688.h"
#include "Game/Class_10E8C788.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA44C0 ?FUN_10ba44c0@Class_10E8C688@@UAEPAVClass_10E8C788@@XZ
Class_10E8C788* Class_10E8C688::FUN_10ba44c0()
{
    Class_10E8C788* Object = (Class_10E8C788*)operator new(sizeof(Class_10E8C788), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4500();
    return 0;
}
