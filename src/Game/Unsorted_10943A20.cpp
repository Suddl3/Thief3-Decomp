// Game/Unsorted_10943A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_109434F0.h"
#include "Game/Class_10943520.h"
#include "Game/Class_109439A0.h"
#include "Game/Class_10B59770.h"
#include "Game/cEntryArray.h"
#include "Game/cIntArray.h"

// The abstract base of Class_10E4A9C8.
class Class_1091E2E0
{
public:
    virtual void Virtual0() = 0;
    void Reset();

    char Unknown04[0x40];
};

class Class_10E4A9C8 : public Class_1091E2E0
{
public:
    ~Class_10E4A9C8();
    Class_10E4A9C8* Init();
    void FUN_10948680();

    int Unknown44;
    bool Unknown48;
    int Unknown4C;
    char Unknown50[8];
    int Unknown58;
    int Unknown5C;
    int Unknown60;
    Class_10B59770 Unknown64;
    cIntArray Unknown70;
    cIntArray Unknown7C;
    float Unknown88;
    float Unknown8C;
    float Unknown90;
    int Unknown94;
    char Unknown98[0x18];
    int UnknownB0;
    char UnknownB4[0x28];
    int UnknownDC;
    bool UnknownE0;
};

struct Struct_109439A0
{
};

class Class_109439A0_Unknown128
{
public:
    Struct_109439A0* Unknown00;
    int Unknown04;
    Struct_109439A0* Unknown08;
};

// One element of the array Unknown130.
class Class_10942DC0
{
public:
    ~Class_10942DC0();

    char Unknown00[0x24];
};

class Class_10943A20_UnknownF4
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Class_10943A20_UnknownF8
{
public:
    virtual int __stdcall Virtual0();
    virtual int __stdcall Virtual1();
    virtual int __stdcall Virtual2();
};

// FUNCTION: 0x10943A20 ?FUN_10943a20@Class_109439A0@@QAEXXZ
void Class_109439A0::FUN_10943a20()
{
    // The base class Class_10E4A9C8 is flat in the header, so its own reset
    // is called through the base.
    ((Class_10E4A9C8*)this)->FUN_10948680();

    Unknown5C = -1;
    Unknown58 |= 7;
    Unknown60 |= 0x809;

    if (!Unknown15C)
    {
        if (UnknownF4)
        {
            UnknownF4->Virtual1();
            UnknownF4 = 0;
        }
        if (UnknownF8)
        {
            UnknownF8->Virtual2();
            UnknownF8 = 0;
        }
        if (Unknown164)
        {
            Unknown164->Virtual1();
            Unknown164 = 0;
        }
        if (Unknown168)
        {
            Unknown168->Virtual2();
            Unknown168 = 0;
        }
    }

    delete[] Unknown130;

    Unknown130 = 0;
    UnknownF4 = 0;
    UnknownF8 = 0;
    Unknown164 = 0;
    Unknown168 = 0;
    UnknownE4 = 0;
    UnknownE8 = 0;
    UnknownF0 = 0;
    UnknownFC = 0;
    Unknown104 = 0;
    Unknown178 = -1;
    UnknownEC = 0;
    Unknown120 = 0;
    Unknown160 = 0;
    Unknown15C = 0;
    Unknown11C = 0;

    FUN_109439a0();

    Unknown14C.FUN_10943240(0);

    Unknown124 = 1;

    Class_109439A0_Unknown128* Block = Unknown128;
    if (Block)
    {
        if (Block->Unknown00)
        {
            delete Block->Unknown00;
            Block->Unknown00 = 0;
        }
        if (Block->Unknown08)
        {
            delete Block->Unknown08;
            Block->Unknown08 = 0;
            Block->Unknown04 = 0;
        }
        delete Block;
    }
    if (Unknown12C)
        delete Unknown12C;
    Unknown12C = 0;
    Unknown128 = 0;
}
