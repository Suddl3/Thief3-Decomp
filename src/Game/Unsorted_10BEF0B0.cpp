// Game/Unsorted_10BEF0B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AAF570.h"
#include "Game/Class_10AAF570_Field10.h"
#include "Game/Class_10BB8290.h"

class Class_10BF7F90 : public Class_10AAF570
{
};

class Class_10BC4160
{
public:
    virtual void Virtual0();

    Class_10BF7F90* FUN_10bc4160();
};

class Class_10BEF0B0 : public Class_10BC4160
{
public:
    unsigned char FUN_10bef0b0();

    Class_10BB8290* Unknown04;
    char Unknown08[0x254];
    int Unknown25C;
};

// FUNCTION: 0x10BEF0B0 ?FUN_10bef0b0@Class_10BEF0B0@@QAEEXZ
unsigned char Class_10BEF0B0::FUN_10bef0b0()
{
    Unknown25C = 1;
    Class_10BF7F90* P = FUN_10bc4160();
    if (P)
        ((Class_10AAF570_Field10*)P->FUN_10aaf570())->Virtual63();
    return !Unknown04->FUN_10bb8290();
}
