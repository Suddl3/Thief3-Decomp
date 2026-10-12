// Game/Class_10E8C4A4_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E8C4A4.h"

void ReadString(void* Reader, int* Out);

// FUNCTION: 0x10C129C0 ?FUN_10c129c0@Class_10E8C4A4@@UAE_NHPAX@Z
bool Class_10E8C4A4::FUN_10c129c0(int A, void* Reader)
{
    ReadString(Reader, &Unknown0C);
    Virtual4(&Unknown0C);
    return true;
}
