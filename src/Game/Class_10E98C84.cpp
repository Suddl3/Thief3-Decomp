// Game/Class_10E98C84.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E98C84.h"
#include "Game/Struct_10C16250.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern void* DAT_10e98c84[];

extern Struct_10C16250* DAT_10ff7070;

extern int DAT_10ff7074;

// FUNCTION: 0x10C15D60 ??0Class_10E98C84@@QAE@XZ
Class_10E98C84::Class_10E98C84()
{
    Field00 = DAT_10e98c84;
    Unknown04 = 0;
    Unknown08 = 0;
    if (DAT_10ff7070 == 0)
        DAT_10ff7070 = new(0, 0, 0, 0, 0) Struct_10C16250;
    DAT_10ff7074 = 0;
}
