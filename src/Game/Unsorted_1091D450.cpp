// Game/Unsorted_1091D450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1091CD10.h"

void FUN_1092bdb0(void* Memory);

// Copied from include/Game/Class_1091CC80.h with the destructor added: the
// game's body of it is inline in the caller.
class Class_1091CC80
{
public:
    ~Class_1091CC80()
    {
        FUN_1091c850(0x40);
        delete Unknown14;
        Unknown04 = 0;
        Unknown0C = 0;
        Unknown14 = 0;
        Unknown00 = 0;
    }

    void FUN_1091c850(int A);

    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    void* Unknown14;
};

class Class_1091DDF0_Unknown0C
{
};

class Class_1091DDF0
{
public:
    ~Class_1091DDF0();

    Class_109081E0 Unknown00;
    void* Unknown04;
    Class_109081E0 Unknown08;
    Class_1091DDF0_Unknown0C* Unknown0C;
    char Pad10[0x14];
    Class_1091CD10* Unknown24;
    Class_1091CD10* Unknown28;
    char Pad2C[0x4];
    Class_1091CC80 Unknown30;
};

// FUNCTION: 0x1091DDF0 ??1Class_1091DDF0@@QAE@XZ
Class_1091DDF0::~Class_1091DDF0()
{
    FUN_1092bdb0(Unknown04);
    Class_1091CD10* Object = Unknown24;
    if (Object)
    {
        Object->FUN_1091cd10();
        delete Object;
    }
    Class_1091CD10* Other = Unknown28;
    if (Other)
    {
        Other->FUN_1091cd10();
        delete Other;
    }
    if (Unknown0C)
        delete Unknown0C;
}
