// Game/Unsorted_10B70510_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BFBD70.h"
#include "Game/Class_10B6FC70.h"
#include "Game/Class_10B6FDA0.h"

extern void* DAT_10e871d0[];

extern void* DAT_10e7edb8[];

class Class_10E871C8
{
public:
    virtual void Virtual0();

    Class_10E871C8();
    ~Class_10E871C8();

    void FUN_10b70d40(int p1, int p2);
    void FUN_10b70db0(int A);

    Class_10B6FDA0 Unknown04[500];
    Class_10B6FC70 Unknown101D4[10];
    int Unknown102EC;
    int Unknown102F0;
    int Unknown102F4;
    float Unknown102F8;
    int Unknown102FC;
};

Class_10E871C8* FUN_10b70460();

extern Class_10E871C8* DAT_10ff65ac;

class Class_10E67BD8
{
public:
    ~Class_10E67BD8();

    void** Unknown00;
    char Unknown04[0x114];
    void** Unknown118;
    char Unknown11C[0x38];
};

class Class_10E871D0 : public Class_10E67BD8
{
public:
    ~Class_10E871D0();

    Class_10BFBD70 Unknown154;
};

// FUNCTION: 0x10B708D0 ??1Class_10E871D0@@QAE@XZ
Class_10E871D0::~Class_10E871D0()
{
    Unknown00 = DAT_10e871d0;
    Unknown118 = DAT_10e7edb8;
    if (DAT_10ff65ac)
    {
        Class_10E871C8* Manager = FUN_10b70460();
        if (--Manager->Unknown102FC == 0 && DAT_10ff65ac)
        {
            delete DAT_10ff65ac;
            DAT_10ff65ac = 0;
        }
    }
}
