// Game/Class_10E6C484.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E5D70C.h"

extern void* DAT_10e6c484[];

class Class_10E6C484 : public Class_10E5D70C
{
public:
    Class_10E6C484* FUN_10a88e30();

    int Unknown678;
};

// FUNCTION: 0x10A88E30 ?FUN_10a88e30@Class_10E6C484@@QAEPAV1@XZ
Class_10E6C484* Class_10E6C484::FUN_10a88e30()
{
    this->Class_10E5D70C::Class_10E5D70C();
    *(void**)this = (void*)DAT_10e6c484;
    Unknown678 = 0;
    return this;
}
