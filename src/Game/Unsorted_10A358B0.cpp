// Game/Unsorted_10A358B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10919C40.h"
#include "Game/Class_10919CA0.h"
#include "Game/Class_10A359D0.h"

// FUNCTION: 0x10A358B0 ?FUN_10a358b0@Class_10A359D0@@QAEHXZ
int Class_10A359D0::FUN_10a358b0()
{
    if (Unknown0D)
    {
        float A = Unknown88->GetField14(Unknown10);
        return (int)(((Class_10919C40*)Unknown88)->FUN_10919c40(Unknown10) * A);
    }
    float A = Unknown84->GetField14(Unknown10);
    return (int)(((Class_10919C40*)Unknown84)->FUN_10919c40(Unknown10) * A);
}
