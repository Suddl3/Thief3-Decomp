// Game/Class_10E8C710.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C710.h"
#include "Game/Class_10E8C920.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA5110 ?FUN_10ba5110@Class_10E8C710@@UAEPAVClass_10E8C920@@XZ
Class_10E8C920* Class_10E8C710::FUN_10ba5110()
{
    Class_10E8C920* Object = (Class_10E8C920*)operator new(sizeof(Class_10E8C920), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba5150();
    return 0;
}
