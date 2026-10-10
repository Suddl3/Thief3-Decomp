// Game/Unsorted_109276A0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_109275D0.h"
#include "Game/Class_109283D0.h"

// FUNCTION: 0x109283D0 ?FUN_109283d0@Class_109283D0@@QAEXH@Z
void Class_109283D0::FUN_109283d0(int A)
{
    int* Where = UnknownC8.Unknown04;
    if (A > 0)
        Where += A;
    UnknownC8.FUN_109275d0(&A, Where);
}
