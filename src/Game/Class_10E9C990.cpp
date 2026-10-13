// Game/Class_10E9C990.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10E9C990.h"
#include "Game/Class_1090FD40.h"
#include "Game/Class_10C5E4E0.h"
#include "Game/Class_10E9C9A8.h"

class Class_10E9C990;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E9C990* A, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

struct Struct_10AA3520
{
    char Unknown00[0x08];
    int Unknown08;
};

extern Struct_10AA3520* DAT_10f35dec;

// FUNCTION: 0x10C5E7D0 ?FUN_10c5e7d0@Class_10E9C990@@QAEXXZ
void Class_10E9C990::FUN_10c5e7d0()
{
    if (DAT_10f46da0)
    {
        DAT_10f46da0->Virtual1(this, 0x70, DAT_10f35dec->Unknown08, -1);
        DAT_10f46da0->Virtual1(this, 0x5a, -1, -1);
    }
    FUN_10c5e750();
}

// FUNCTION: 0x10C5F030 ?HandleMessage@Class_10E9C990@@UAEXHHHH@Z
void Class_10E9C990::HandleMessage(int Code, int A, int B, int C)
{
    switch (Code)
    {
    case 0x5a:
        FUN_10c5e750();
        break;
    case 0x70:
        FUN_10c5e270(A, B, C, 0);
        break;
    }
}
