// Game/Unsorted_10C5BFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5BFD0.h"
#include "Game/Class_10C5B910.h"

// FUNCTION: 0x10C5BFD0 ?Update@Class_10C5BFD0@@QAEXHH@Z
void Class_10C5BFD0::Update(int A, int B)
{
    Class_10C5B910 Local;
    if (FUN_10c5be90(&A, &Local))
    {
        Local.Unknown24 = B;
        FUN_10c5bcd0(&A, &Local);
    }
}
