// Game/Class_10A359D0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

// FUNCTION: 0x10A359D0 ?Reset@Class_10A359D0@@QAEXXZ
void Class_10A359D0::Reset()
{
    Unknown1C = Unknown60 + Unknown78;
    Unknown20 = Unknown24 - Unknown64 + Unknown78;
    Unknown30 = Unknown68 + Unknown7C;
    Unknown40 = Unknown30;
    Unknown4C = 0;
    Unknown38 = Unknown3C = FUN_10a358b0();
    Unknown58 = -1;
    Unknown5C = -1;
    Unknown50 = -1;
    Unknown54 = -1;
}

// FUNCTION: 0x10A35A20 ?FUN_10a35a20@Class_10A359D0@@QAEXXZ
void Class_10A359D0::FUN_10a35a20()
{
    Unknown34 = 0;
    Unknown3C = FUN_10a358b0();
    Unknown0D = true;
    if (Unknown30 >= Unknown50 && Unknown30 <= Unknown54)
    {
        Unknown1C = Unknown78 + Unknown60;
    }
    else
    {
        Unknown1C = Unknown60 + Unknown78;
        Unknown20 = Unknown24 - Unknown64 + Unknown78;
    }
}
