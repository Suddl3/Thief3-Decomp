// Game/Unsorted_10B227E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10B39530.h"

class Class_10B227E0_Unknown04
{
public:
    char Unknown00[0x440];
    int Unknown440;
    char Unknown444[0x8];
    int Unknown44C;
};

class Class_10B227E0_Unknown08
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2(Class_10B227E0_Unknown04* A);
};

class Class_10B227E0
{
public:
    void FUN_10b227e0();

    char Unknown00[0x4];
    Class_10B227E0_Unknown04* Unknown04;
    Class_10B227E0_Unknown08* Unknown08[1];
    char Unknown0C[0x84];
    Class_10B227E0_Unknown08* Unknown90;
    char Unknown94[0x4];
    Class_10B39530* Unknown98;
    char Unknown9C[0xC];
    int UnknownA8;
};

// FUNCTION: 0x10B227E0 ?FUN_10b227e0@Class_10B227E0@@QAEXXZ
void Class_10B227E0::FUN_10b227e0()
{
    Unknown90 = Unknown08[UnknownA8];
    Unknown90->Virtual2(Unknown04);
    if (Unknown04->Unknown440)
    {
        switch (Unknown04->Unknown44C)
        {
        case 2:
            Unknown98->FUN_10b39530(0x60, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            break;
        case 3:
            Unknown98->FUN_10b39530(0x62, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            break;
        case 10:
            Unknown98->FUN_10b39530(0x61, -1.0f, 1.0f, 0x101, 0, 0, -1.0f);
            break;
        }
    }
}
