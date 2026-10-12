// Game/Class_10E8C68C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C68C.h"
#include "Game/Class_10E8C794.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10BA4510 ?FUN_10ba4510@Class_10E8C68C@@UAEPAVClass_10E8C794@@XZ
Class_10E8C794* Class_10E8C68C::FUN_10ba4510()
{
    Class_10E8C794* Object = (Class_10E8C794*)operator new(sizeof(Class_10E8C794), 0, 0, 0, 0, 0);
    if (Object)
        return Object->Construct();
    return 0;
}
