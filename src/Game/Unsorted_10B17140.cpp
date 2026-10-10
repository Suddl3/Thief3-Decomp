// Game/Unsorted_10B17140.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e79228[];

extern void* DAT_10e5b7c4[];

class Class_109E8FB0
{
public:
    Class_109E8FB0();
    ~Class_109E8FB0();

    void** Unknown00;
};

class Class_10B26D30
{
public:
    void FUN_10b26d30();
};

class Class_10B177C0 : public Class_109E8FB0
{
public:
    Class_10B177C0();
    ~Class_10B177C0();

    void** Unknown04;
    char Unknown08[0x218];
    Class_10B26D30 Unknown220;
    char Unknown221[0x3B];
    bool Unknown25C;
    char Unknown25D[3];
    int Unknown260;
    bool Unknown264;
    char Unknown265[3];
    double Unknown268;
};

// FUNCTION: 0x10B17720 ??0Class_10B177C0@@QAE@XZ
Class_10B177C0::Class_10B177C0()
{
    Unknown00 = DAT_10e79228;
    Unknown04 = DAT_10e5b7c4;
    Unknown220.FUN_10b26d30();
    Unknown268 = 0.0;
    Unknown25C = false;
    Unknown260 = 0;
    Unknown264 = false;
}
