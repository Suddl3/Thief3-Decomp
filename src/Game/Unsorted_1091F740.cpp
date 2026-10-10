// Game/Unsorted_1091F740.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern "C" long _time32(long* Timer);

extern int DAT_10f31960;

extern int DAT_10f31958;

extern int DAT_10f3195c;

extern bool DAT_10f31964;

extern int DAT_10f2c8c4;

class Class_109203B0
{
public:
    Class_109203B0* FUN_109203b0();

    long Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    char Unknown20[0xC];
    int Unknown2C;
    int Unknown30;
    int Unknown34;
    int Unknown38;
    int Unknown3C;
    int Unknown40;
    int Unknown44;
    int Unknown48;
    bool Unknown4C;
    bool Unknown4D;
};

class Class_10948260
{
public:
    void FUN_10948260();

    char Unknown00[0x1AC];
};

class Class_1091F9B0_Unknown0C
{
public:
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[0x44];
    Class_10948260* Unknown54;
};

class Class_1091F9B0
{
public:
    void FUN_1091f9b0();

    char Unknown00[0xC];
    Class_1091F9B0_Unknown0C* Unknown0C;
    char Unknown10[0x20];
    int Unknown30;
    char Unknown34[4];
    Class_10948260** Unknown38;
};

// FUNCTION: 0x1091F9B0 ?FUN_1091f9b0@Class_1091F9B0@@QAEXXZ
void Class_1091F9B0::FUN_1091f9b0()
{
    if (Unknown0C)
    {
        for (int i = 0; i < Unknown0C->Unknown0C; i++)
            Unknown0C->Unknown54[i].FUN_10948260();
    }
    for (int i = 0; i < Unknown30; i++)
        Unknown38[i]->FUN_10948260();
}

// FUNCTION: 0x109203B0 ?FUN_109203b0@Class_109203B0@@QAEPAV1@XZ
Class_109203B0* Class_109203B0::FUN_109203b0()
{
    Unknown00 = _time32(0);
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    Unknown40 = 0;
    Unknown44 = 0;
    Unknown0C = 0;
    Unknown2C = 0;
    Unknown48 = 1;
    DAT_10f31960 = 0;
    DAT_10f31958 = 0;
    DAT_10f3195c = 0;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    DAT_10f31964 = false;
    Unknown1C = -1;
    DAT_10f2c8c4 = 0;
    Unknown4C = true;
    Unknown4D = true;
    return this;
}
