// Game/Unsorted_10B9A120.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10B9B8D0.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10B9B8D0_Unknown00
{
public:
    Class_10B9B8D0_Unknown00()
    {
        Unknown00 = 0;
        Unknown04 = 0;
        Unknown08 = 0;
        Unknown10 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown18 = 0;
    }

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    char Unknown14;
    int Unknown18;
};

// FUNCTION: 0x10B9B8D0 ??0Class_10B9B8D0@@QAE@XZ
Class_10B9B8D0::Class_10B9B8D0()
{
    GetAllocator()->Virtual8(0, 0);
    Unknown00 = new(0, 0, 0, 0, 0) Class_10B9B8D0_Unknown00;
    GetAllocator()->Virtual9();
}
