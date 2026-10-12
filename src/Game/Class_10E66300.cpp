// Game/Class_10E66300.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E66300.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

// FUNCTION: 0x10A2FA00 ?Clone@Class_10E66300@@UAEPAV1@XZ
Class_10E66300* Class_10E66300::Clone()
{
    return new(0, 0, 0, 0, 0) Class_10E66300(Unknown04, Unknown08);
}
