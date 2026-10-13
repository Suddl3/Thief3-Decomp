// Game/Unsorted_10C559A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
// Declarations first.
#include "Game/Class_10A036A0.h"
#include "Game/cString.h"
#include "Game/Class_10C03210.h"
#include "Game/Class_10C559A0.h"

class Class_10C559A0_Unknown00
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
};

// FUNCTION: 0x10C559A0 ?FUN_10c559a0@Class_10C559A0@@QAEAAV1@PBV1@@Z
Class_10C559A0& Class_10C559A0::FUN_10c559a0(const Class_10C559A0* Other)
{
    Class_10C559A0_Unknown00* Old = Unknown00;
    Unknown00 = Other->Unknown00;
    if (Unknown00)
        Unknown00->Virtual1();
    if (Old)
        Old->Virtual2();

    Unknown04.FUN_10a036a0(Other->Unknown04);
    Unknown14 = Other->Unknown14;
    Unknown18 = Other->Unknown18;
    Unknown1C = Other->Unknown1C;
    Unknown20 = Other->Unknown20;
    Unknown24 = Other->Unknown24;
    Unknown28.FUN_10c03210(Other->Unknown28);
    Unknown38 = Other->Unknown38;
    Unknown3C = Other->Unknown3C;
    Unknown40 = Other->Unknown40;
    Unknown44 = Other->Unknown44;
    Unknown48 = Other->Unknown48;
    return *this;
}
