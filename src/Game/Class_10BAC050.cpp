// Game/Class_10BAC050.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BAC050.h"
#include "Game/Struct_10BAD970.h"

// FUNCTION: 0x10BAC050 ?FUN_10bac050@Class_10BAC050@@QAEHH@Z
int Class_10BAC050::FUN_10bac050(int A)
{
    int State = FUN_10baac90(A);
    if (State == 0 || State == 1)
        return 1;
    return 0;
}

// FUNCTION: 0x10BAC070 ?FUN_10bac070@Class_10BAC050@@QAEHH@Z
int Class_10BAC050::FUN_10bac070(int A)
{
    int Kind = FUN_10baac90(A);
    return Kind == 3 || Kind == 4;
}
