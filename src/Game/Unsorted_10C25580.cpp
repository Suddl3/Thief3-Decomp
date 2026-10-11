// Game/Unsorted_10C25580.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* GetAllocator();

// Ion Storm's placement new (0x10905C10).
void* operator new(unsigned int Size, const int& Tag, int A, int B, int C, int D);

class Class_10C25580
{
public:
    Class_10C25580(int X)
    {
        Unknown00 = 0;
        Unknown04 = X;
    }

    int Unknown00;
    int Unknown04;
};

extern Class_10C25580* DAT_10ff7098;

// FUNCTION: 0x10C25580 ?FUN_10c25580@@YAXH@Z
void FUN_10c25580(int X)
{
    if (!DAT_10ff7098)
    {
        GetAllocator()->Virtual8(0, 0);
        int Tag = 0;
        Class_10C25580* Obj = new(Tag, 0, 0, 0, 0) Class_10C25580(X);
        DAT_10ff7098 = Obj;
        GetAllocator()->Virtual9();
    }
    DAT_10ff7098->Unknown00++;
}
