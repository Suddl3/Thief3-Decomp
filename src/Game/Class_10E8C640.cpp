// Game/Class_10E8C640.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C248.h"
#include "Game/Class_10E8C640.h"

// Ion Storm's placement new and its delete (0x10905C10; the delete folded into ::operator delete).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e8c248[];

extern void* DAT_10e70820[];

Class_10E8C248::Class_10E8C248() : Class_10E6DC88(0x1E)
{
    // The primary table at +0x0 and the second base's (folded with Class_10E8C22C's) at +0xC.
    *(void**)this = DAT_10e8c248;
    *(void**)((char*)this + 0x0C) = DAT_10e70820;
}

// FUNCTION: 0x10BA3550 ?Create@Class_10E8C640@@UAEPAVClass_10E8C248@@XZ
Class_10E8C248* Class_10E8C640::Create()
{
    const int& Tag = 0;
    return new(Tag, 0, 0, 0, 0) Class_10E8C248;
}
