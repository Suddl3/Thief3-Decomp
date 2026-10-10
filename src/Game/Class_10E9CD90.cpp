// Game/Class_10E9CD90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C64AA0.h"
#include "Game/Class_10E4E098.h"

extern void* DAT_10e9cd90[];

class Class_10E9CD90 : public Class_10E4E098
{
public:
    Class_10E9CD90* FUN_10c63f70(int A, int B);

    int Unknown34;
    int Unknown38;
    int Unknown3C;
};

// FUNCTION: 0x10C63F70 ?FUN_10c63f70@Class_10E9CD90@@QAEPAV1@HH@Z
Class_10E9CD90* Class_10E9CD90::FUN_10c63f70(int A, int B)
{
    this->Class_10E4E098::Class_10E4E098();
    Unknown00 = DAT_10e9cd90;
    Unknown34 = A;
    Unknown38 = B;
    Unknown3C = 0;
    Unknown14 = Unknown1C = 1;
    return this;
}

// FUNCTION: 0x10C64AA0 ?FUN_10c64aa0@Class_10C64AA0@@QAEXIPAI0@Z
void Class_10C64AA0::FUN_10c64aa0(unsigned Value, unsigned* Hi, unsigned* Lo)
{
    *Hi = Value >> 29;
    *Lo = Value & 0x1fffffff;
}
