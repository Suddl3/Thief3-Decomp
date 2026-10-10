// Game/Unsorted_10C16250.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C15EF0.h"
#include "Game/Class_10C16250.h"
#include "Game/Struct_10C16250.h"

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

extern Struct_10C16250* DAT_10ff7070;

extern int DAT_10ff7074;

// FUNCTION: 0x10C16250 ?FUN_10c16250@Class_10C16250@@QAEXXZ
void Class_10C16250::FUN_10c16250()
{
    Unknown04.FUN_10c16140();
    if (DAT_10ff7070 == 0)
        DAT_10ff7070 = new(0, 0, 0, 0, 0) Struct_10C16250;
    DAT_10ff7074 = 0;
    Unknown4018 = 0;
    Unknown401C = 0;
}
