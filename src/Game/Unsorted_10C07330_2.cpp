// Game/Unsorted_10C07330_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"

extern "C" void* memset(void*, int, unsigned int);

class Class_10E97B68;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E97B68* Obj, int B, int C, int D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E97B68
{
public:
    Class_10E97B68();
    virtual ~Class_10E97B68();

    int Unknown04;
    Class_10BFBD70 Unknown08[5];
    char Unknown44[0xA];
    char Unknown4E[0x2];
    Class_10BFBD70 Unknown50;
    char Unknown5C[0xA];
    char Unknown66[0x2];
    Class_10BFBD70 Unknown68[5];
    int Unknown0A4;
};

// FUNCTION: 0x10C07590 ??0Class_10E97B68@@QAE@XZ
Class_10E97B68::Class_10E97B68() : Unknown04(0)
{
    Unknown0A4 = 0x400;
    memset(Unknown44, 0, 0xA);
    memset(Unknown5C, 0, 0xA);
    DAT_10f46da0->Virtual1(this, 0x25, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x26, -1, -1);
    DAT_10f46da0->Virtual1(this, 0x22, -1, -1);
}
