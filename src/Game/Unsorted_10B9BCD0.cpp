// Game/Unsorted_10B9BCD0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9BCD0.h"

void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

void operator delete(void* Ptr, const int& Tag, int A, int B, int C, int D);

Class_10905A90_Member* FUN_10905aa0();

class Class_10BBD950
{
public:
    Class_10BBD950(int A, int B, int C, int D, int E);

    char Unknown00[0x24];
};

class Class_10B9BCD0_Unknown118
{
public:
    char Unknown00[0x0C];
    Class_10BBD950* Unknown0C;
    char Unknown10[0x4];
    bool Unknown14;
};

// FUNCTION: 0x10B9BCD0 ?FUN_10b9bcd0@Class_10B9BCD0@@QAEXHHHHHD@Z
void Class_10B9BCD0::FUN_10b9bcd0(int A, int B, int C, int D, int E, char F)
{
    Class_10B9BCD0_Unknown118* Obj = Unknown118;
    if (Obj->Unknown0C == 0)
    {
        FUN_10905aa0()->Virtual8(0, 0);
        Obj->Unknown0C = new(0, 0, 0, 0, 0) Class_10BBD950(A, B, C, D, E);
        FUN_10905aa0()->Virtual9();
        Obj->Unknown14 = F != 0;
    }
}
