// Game/Unsorted_10C3F270.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAB5C0.h"
#include "Game/Class_10E9B5C0.h"

class Class_10C80360 : public Class_10AAB5C0 {
public:
    unsigned char FUN_10c80360();
};

Class_10C80360* FUN_10c5f280();

class Class_10C3F290
{
public:
    virtual ~Class_10C3F290();
};

extern Class_10C3F290* DAT_10ff70a8;

// FUNCTION: 0x10C3F270 ?FUN_10c3f270@Class_10E9B5C0@@UAE_NXZ
bool Class_10E9B5C0::FUN_10c3f270()
{
    return FUN_10c5f280()->FUN_10aab5c0() == 2;
}

// FUNCTION: 0x10C3F290 ?FUN_10c3f290@@YAXXZ
void FUN_10c3f290()
{
    if (DAT_10ff70a8)
    {
        delete DAT_10ff70a8;
        DAT_10ff70a8 = 0;
    }
}
