// Game/Unsorted_10BB8430.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BB8480.h"
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10E90A1C.h"
#include "Game/SoundSchema.h"

double GetTimeSeconds();

class Class_10C28BD0
{
public:
    void FUN_10c28bd0();
};

int FUN_10c28bc0();

// FUNCTION: 0x10BB8430 ?FUN_10bb8430@Class_10E90A1C@@QAEXXZ
void Class_10E90A1C::FUN_10bb8430()
{
    Unknown08->FUN_10ba9f90(0);
    ((Class_10C28BD0*)FUN_10c28bc0())->FUN_10c28bd0();
    RollInterval();
    float Value = Unknown08->FUN_10dbd510(0x10070a)->GetFloat();
    Unknown2C4 = GetTimeSeconds() + Value;
}

// FUNCTION: 0x10BB8480 ?FUN_10bb8480@Class_10BB8480@@QAE_NXZ
bool Class_10BB8480::FUN_10bb8480()
{
    if (GetTimeSeconds() > Unknown2C4)
        return true;
    return false;
}
