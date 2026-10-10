// Game/Class_10E8C694.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C694.h"
#include "Game/Class_10E8C7AC.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA45B0 ?FUN_10ba45b0@Class_10E8C694@@UAEPAVClass_10E8C7AC@@XZ
Class_10E8C7AC* Class_10E8C694::FUN_10ba45b0()
{
    Class_10E8C7AC* Object = (Class_10E8C7AC*)operator new(sizeof(Class_10E8C7AC), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba45f0();
    return 0;
}
