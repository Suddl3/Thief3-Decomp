// Game/Class_10E84BB8_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B78780.h"
#include "Game/Class_10E84D80.h"

extern void* DAT_10e84d80[];

class cIntArray
{
public:
    cIntArray(int Count) : Unknown00(Count), m_CapacityBytes(0), Unknown08(0) { SetCount(Count); }
    ~cIntArray();

    void SetCount(int NewCount);

    int Unknown00;
    int m_CapacityBytes;
    int* Unknown08;
};

class Class_10E6AEA0
{
public:
    Class_10E6AEA0();

    virtual ~Class_10E6AEA0();

    char Unknown04[0xE4];
    int Unknown0E8;
    char Unknown0EC[0x64];
};

class Class_10E84BB8 : public Class_10E6AEA0
{
public:
    Class_10E84BB8();

    int Unknown150;
    int Unknown154;
    char Unknown158[0x2C];
    int Unknown184;
    int Unknown188;
    int Unknown18C;
    cIntArray Unknown190;
    unsigned int Unknown19C;
    int Unknown1A0;
    int Unknown1A4;
    int Unknown1A8;
    int Unknown1AC;
};

// FUNCTION: 0x10B66B40 ??0Class_10E84BB8@@QAE@XZ
Class_10E84BB8::Class_10E84BB8()
    : Unknown150(0), Unknown154(0), Unknown184(0), Unknown188(0), Unknown18C(0), Unknown190(4), Unknown19C(0x40),
      Unknown1A0(0), Unknown1A4(0), Unknown1A8(0), Unknown1AC(0)
{
    for (int i = 0; i < 4; i++)
        Unknown190.Unknown08[i] = 0;
    Unknown0E8 = 6;
}

// FUNCTION: 0x10B67180 ?FUN_10b67180@Class_10E84D80@@QAEPAV1@XZ
Class_10E84D80* Class_10E84D80::FUN_10b67180()
{
    FUN_10b78780();
    Unknown00 = DAT_10e84d80;
    return this;
}
