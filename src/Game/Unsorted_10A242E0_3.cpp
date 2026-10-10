// Game/Unsorted_10A242E0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A24300.h"
#include "Game/Class_10A357C0.h"

struct Static_10A35EA0 : public Class_10A357C0
{
    char Unknown0C;
};

Static_10A35EA0* FUN_10a35ea0();

// FUNCTION: 0x10A24300 ?FUN_10a24300@Class_10A24300@@QAEXE@Z
void Class_10A24300::FUN_10a24300(unsigned char A)
{
    FUN_10a35ea0()->FUN_10a357c0(A);
    Unknown55 = A;
}
