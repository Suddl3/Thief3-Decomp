// Game/Unsorted_10924A00_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_109242E0;

extern void** DAT_10f3199c;

extern Class_109242E0* DAT_10f319a0;

class Class_10924B70_Base
{
public:
    Class_10924B70_Base()
    {
        DAT_10f3199c = (void**)this;
    }

    ~Class_10924B70_Base()
    {
        DAT_10f3199c = 0;
    }

    bool Unknown00;
    char Unknown01[3];
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    char Unknown18[0x18];
};

class Class_1094D700
{
public:
    Class_1094D700();
    ~Class_1094D700();

    char Unknown00[0x18];
};

class Class_1094D9A0
{
public:
    Class_1094D9A0();
    ~Class_1094D9A0();

    char Unknown00[0x20];
};

class Class_10924B70 : public Class_10924B70_Base
{
public:
    Class_10924B70();

    Class_1094D700 Unknown30;
    Class_1094D9A0 Unknown48[3];
    int UnknownA8;
};

// FUNCTION: 0x10924A00 ??0Class_10924B70@@QAE@XZ
Class_10924B70::Class_10924B70()
{
    DAT_10f319a0 = (Class_109242E0*)this;
    Unknown00 = false;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown14 = 0;
    Unknown10 = 0;
    UnknownA8 = -1;
}
