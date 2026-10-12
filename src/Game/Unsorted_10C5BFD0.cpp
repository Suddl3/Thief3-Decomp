// Game/Unsorted_10C5BFD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10C5BFD0.h"

class Class_10C5B910
{
public:
    Class_10C5B910()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown1C = -1.0f;
        Unknown20 = -1.0f;
        Unknown24 = 0;
    }
    ~Class_10C5B910();

    int Unknown00;
    int Unknown04;
    char Unknown08;
    char Unknown09[0x13];
    float Unknown1C;
    float Unknown20;
    int Unknown24;
};

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
