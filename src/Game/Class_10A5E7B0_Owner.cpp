// Game/Class_10A5E7B0_Owner.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A5E7B0_Owner.h"
#include "Game/Class_10A5E7B0_OwnerPrimary.h"
#include "Game/Class_10E69B9C.h"

// FUNCTION: 0x10A5E7B0 ?FUN_10a5e7b0@Class_10A5E7B0_Owner@@UAEXHHHH@Z
void Class_10A5E7B0_Owner::FUN_10a5e7b0(int Event, int A, int B, int C)
{
    switch (Event)
    {
    case 42:
    case 43:
        Virtual116(A, B, C, Event == 43);
        break;
    case 44:
        Virtual117(A, B, C);
        break;
    case 47:
        Virtual114(A, B, C);
        break;
    case 48:
        Virtual115(A, B, C);
        break;
    case 28:
        return;
    }
}
