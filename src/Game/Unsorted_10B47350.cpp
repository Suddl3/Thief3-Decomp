// Game/Unsorted_10B47350.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/Class_10993E20.h"
#include "Game/Class_10B473D0.h"
#include "Game/Class_10B47660.h"
#include "Game/Class_10B47660_Member.h"
#include "Game/Class_10B7AB80.h"
#include "Game/Class_10B7AC30.h"
#include "Game/cIntArray.h"
#include "Game/Class_10C3E140.h"
#include "Game/Class_10EC0E20.h"

class Class_10B473D0_Unknown10
{
public:
    char Unknown00[0x4A1];
    bool Unknown4A1;
};

// FUNCTION: 0x10B47350 ?FUN_10b47350@Class_10B47660@@QAEXHHMHHH@Z
void Class_10B47660::FUN_10b47350(int A, int B, float C, int D, int E, int F)
{
    Unknown0C->FUN_10b7ac80(0);
    Unknown0C->Reset();
    Unknown0C->FUN_10b7ab80(A, C);
    Unknown0C->FUN_10b7abb0(0);
    Unknown0C->FUN_10b7b460(D, E, 0, F);
    Unknown0C->FUN_10b7b610(B, F);
    if (Unknown1C)
    {
        Unknown1D = false;
        Unknown10->Unknown4A1 = true;
    }
}

// FUNCTION: 0x10B473D0 ?FUN_10b473d0@Class_10B473D0@@QAEXXZ
void Class_10B473D0::FUN_10b473d0()
{
    if (Unknown1C)
    {
        Unknown1D = true;
        Unknown10->Unknown4A1 = false;
        Unknown04->FUN_10993e20(0);
        Unknown20 = FUN_10b47220();
        Unknown2C = Unknown08->FUN_10b7ac30();
    }
}
