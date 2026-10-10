// Game/Unsorted_10B6FA00_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"

class Class_10D3C2A0
{
public:
    Class_10D3C2A0();
    ~Class_10D3C2A0();
    void FUN_10d3c300(int A);

    char Unknown00[0xC];
};

class Class_10B6FC70
{
public:
    Class_10B6FC70();

    int Unknown00;
    int Unknown04;
    int Unknown08;
    Class_10D3C2A0 Unknown0C;
    char Unknown18;
};

// FUNCTION: 0x10B6FC70 ??0Class_10B6FC70@@QAE@XZ
Class_10B6FC70::Class_10B6FC70()
{
    Unknown0C.FUN_10d3c300(0);
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown18 = 0;
}
