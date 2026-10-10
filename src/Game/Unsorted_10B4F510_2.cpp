// Game/Unsorted_10B4F510_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B39530.h"
#include "Game/Class_10B395E0.h"

class AGarrett
{
public:
    char Unknown00[0x450];
    unsigned char bInBowDraw : 1;
    unsigned char isCrouching : 1;
};

class Class_10AA82D0
{
public:
    virtual void Virtual0();

    int FUN_10aa82d0();

    char Unknown04[4];
    int Unknown08;
    int Unknown0C;
};

class Class_10B4F610 : public Class_10AA82D0
{
public:
    void FUN_10b4f610(AGarrett* A);

    char Unknown10;
    char Unknown11;
    char Unknown12[0x1A];
    int Unknown2C;
};

// FUNCTION: 0x10B4F610 ?FUN_10b4f610@Class_10B4F610@@QAEXPAVAGarrett@@@Z
void Class_10B4F610::FUN_10b4f610(AGarrett* A)
{
    int Value;
    if (Unknown2C == 0)
        Value = (A->isCrouching ? 6 : 0) + 0x55;
    else
        Value = (A->isCrouching ? 6 : 0) + 0x58;
    if (Unknown11)
        ((Class_10B39530*)FUN_10aa82d0())->FUN_10b39530(Value, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
    else
        ((Class_10B395E0*)FUN_10aa82d0())->FUN_10b395e0(Value);
}
