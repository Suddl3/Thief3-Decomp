// Game/Class_10E8C7B8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E8C7B8.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    char* Unknown00;
};

int FUN_10bb0b10(int A, int B, int C, const Class_109081E0& Name);

// FUNCTION: 0x10BB1910 ?FUN_10bb1910@Class_10E8C7B8@@UAEHHHH@Z
int Class_10E8C7B8::FUN_10bb1910(int A, int B, int C)
{
    Class_109081E0 Name("STATE_GUARD");
    FUN_10bb0b10(A, B, C, Name);
    return 1;
}
