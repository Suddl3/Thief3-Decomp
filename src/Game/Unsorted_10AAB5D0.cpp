// Game/Unsorted_10AAB5D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6DA64.h"
#include "Game/Class_10E6DA90.h"

extern void* DAT_10e6da40[];

class Class_10E6C104
{
public:
    Class_10E6C104();

    void** Unknown00;
};

class Class_10E6DA40 : public Class_10E6C104
{
public:
    Class_10E6DA40* FUN_10aab5d0();

    char Unknown04[4];
    int Unknown08;
};

extern void* DAT_10e6da64[];

// FUNCTION: 0x10AAB5D0 ?FUN_10aab5d0@Class_10E6DA40@@QAEPAV1@XZ
Class_10E6DA40* Class_10E6DA40::FUN_10aab5d0()
{
    this->Class_10E6C104::Class_10E6C104();
    Unknown00 = DAT_10e6da40;
    Unknown08 = 3;
    return this;
}

// FUNCTION: 0x10AAB8B0 ?FUN_10aab8b0@Class_10E6DA64@@QAEPAV1@XZ
Class_10E6DA64* Class_10E6DA64::FUN_10aab8b0()
{
    Unknown00 = DAT_10e6da64;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    return this;
}

// FUNCTION: 0x10AAC110 ?FUN_10aac110@Class_10E6DA90@@UAEXH@Z
void Class_10E6DA90::FUN_10aac110(int param)
{
    Unknown08 = param;
    Unknown14 = true;
}
