// Game/Unsorted_10AA8310.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_1090A780.h"
#include "Game/Class_10AA83E0.h"
#include "Game/Class_10AA8400.h"
#include "Game/Class_10AB3800.h"
#include "Game/Class_10E65574.h"
#include "Game/Class_10AB37C0.h"

void FUN_10d3d990(void* Stream, int* Value);

void FUN_10d3d2d0(void* Stream, int Value);

class Class_10AA8310
{
public:
    void FUN_10aa8310(void* Stream, int, int);

    char Unknown00[0x8];
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    Class_10AB3800 Unknown20;
};

// FUNCTION: 0x10AA8310 ?FUN_10aa8310@Class_10AA8310@@QAEXPAXHH@Z
void Class_10AA8310::FUN_10aa8310(void* Stream, int, int)
{
    FUN_10d3d990(Stream, (int*)&Unknown20.FUN_10ab3800());
    FUN_10d3d990(Stream, &Unknown08);
    FUN_10d3d2d0(Stream, Unknown0C);
    FUN_10d3d2d0(Stream, Unknown10);
    FUN_10d3d2d0(Stream, Unknown14);
    FUN_10d3d2d0(Stream, Unknown18);
    FUN_10d3d990(Stream, &Unknown1C);
    FUN_10d3d990(Stream, (int*)((Class_10AB37C0*)&Unknown20)->FUN_10ab37c0());
}

// FUNCTION: 0x10AA83E0 ?FUN_10aa83e0@Class_10AA83E0@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AA83E0::FUN_10aa83e0()
{
    return Unknown20.FUN_10ab3800();
}

// FUNCTION: 0x10AA8400 ?FUN_10aa8400@Class_10AA8400@@QAE?AVClass_1090A780@@XZ
Class_1090A780 Class_10AA8400::FUN_10aa8400()
{
    return Unknown20.Class_10E65574::FUN_10b34b10();
}
