// Game/Unsorted_10B2BD00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E67FD0.h"
#include "Game/Class_10E68F9C.h"

Class_10905A90_Member* FUN_10905aa0();

// Ion Storm's string (0x109081E0): a char pointer to a block allocated 4 bytes before it.
class Class_109081E0
{
public:
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

class Class_10E7B360
{
public:
    ~Class_10E7B360();

    Class_10E67FD0 Unknown00;
    Class_109081E0 Unknown150;
};

// FUNCTION: 0x10B2BD00 ??1Class_10E7B360@@QAE@XZ
Class_10E7B360::~Class_10E7B360()
{
}

// FUNCTION: 0x10B2BE50 ?FUN_10b2be50@Class_10E68F9C@@UAEMXZ
float Class_10E68F9C::FUN_10b2be50()
{
    float Result = Unknown44;
    if (!Unknown40)
        Result -= Unknown48;
    return Result;
}
