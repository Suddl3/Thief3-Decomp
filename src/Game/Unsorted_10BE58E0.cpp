// Game/Unsorted_10BE58E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10DBD510.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10BE4DD0.h"

class Class_10BBDB40;

struct Struct_10BE5EF0
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
};

extern void* DAT_10e96510[];

class Class_10BE5EF0 : public Class_10BE4DD0
{
public:
    Class_10BE5EF0(int A, int B);

    void** Unknown00;
    Struct_10BE5EF0* Unknown04;
    char Unknown08[0x60];
    float Unknown68;
};

// FUNCTION: 0x10BE5EF0 ??0Class_10BE5EF0@@QAE@HH@Z
Class_10BE5EF0::Class_10BE5EF0(int A, int B) : Class_10BE4DD0(A, B)
{
    Unknown00 = DAT_10e96510;
    Unknown68 = Unknown04->Unknown08->FUN_10dbd510()->GetFloat(0x40100717);
}
