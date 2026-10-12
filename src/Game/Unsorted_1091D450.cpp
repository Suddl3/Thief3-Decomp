// Game/Unsorted_1091D450.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10905A90_Member.h"
#include "Game/Class_109081E0.h"
#include "Game/Class_1091CD10.h"
#include "Game/Class_1091CC80.h"
#include "Game/Class_1091DDF0.h"

void FUN_1092bdb0(void* Memory);

class Class_1091DDF0_Unknown0C
{
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
