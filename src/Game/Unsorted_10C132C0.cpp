// Game/Unsorted_10C132C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"

Class_10905A90_Member* FUN_10905aa0();

class Class_109081E0
{
public:
    Class_109081E0(const char* In);
    Class_109081E0(const Class_109081E0& Other);
    ~Class_109081E0()
    {
        if (Unknown00)
        {
            char* Block = Unknown00 - 4;
            FUN_10905aa0()->Virtual5(Block);
            Unknown00 = 0;
        }
    }

    Class_109081E0& operator=(const Class_109081E0& Other);

    char* Unknown00;
};

extern Class_109081E0 DAT_10ff7060;

Class_109081E0 FUN_10c132c0(const Class_109081E0& Other);

// FUNCTION: 0x10C135D0 ?FUN_10c135d0@@YAXXZ
void FUN_10c135d0()
{
    DAT_10ff7060 = FUN_10c132c0(DAT_10ff7060);
}
