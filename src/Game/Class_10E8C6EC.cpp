// Game/Class_10E8C6EC.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C6EC.h"
#include "Game/Class_10E8C8B4.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4DC0 ?FUN_10ba4dc0@Class_10E8C6EC@@UAEPAVClass_10E8C8B4@@XZ
Class_10E8C8B4* Class_10E8C6EC::FUN_10ba4dc0()
{
    Class_10E8C8B4* Object = (Class_10E8C8B4*)operator new(sizeof(Class_10E8C8B4), 0, 0, 0, 0, 0);
    if (Object)
        return Object->FUN_10ba4e00();
    return 0;
}
