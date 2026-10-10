// Game/Unsorted_10B47720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B47660_Member.h"
#include "Game/Class_10B7AC30.h"
#include "Game/Class_10C3E140.h"
#include "Game/Class_10B7AB80.h"
#include "Game/Class_10EC0E20.h"

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int A);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

class Class_10B47AB0
{
public:
    void FUN_10b47ab0(int A);
    void FUN_10b47850(int A, float B, float C, int D, int E, float F);

    char Unknown00[8];
    Class_10B7AC30* Unknown08;
    Class_10EC0E20* Unknown0C;
    Class_10B47660_Member* Unknown10;
    char Unknown14[0x1C];
    bool Unknown30;
    char Unknown31[0x1B];
    Class_10BFBD70 Unknown4C;
};

// FUNCTION: 0x10B47AB0 ?FUN_10b47ab0@Class_10B47AB0@@QAEXH@Z
void Class_10B47AB0::FUN_10b47ab0(int A)
{
    Unknown4C.FUN_10bfbd70(0);
    if (Unknown0C->FUN_10c3e140())
        Unknown0C->FUN_10b7b8a0();
    FUN_10b47850(A, Unknown10->FUN_109b6560(0) - Unknown08->FUN_10b7ac30(), 1.0f, 0x101, 0, -1.0f);
    Unknown30 = true;
}
