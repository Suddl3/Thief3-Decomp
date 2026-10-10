// Game/Unsorted_10BE4610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFD210
{
public:
    float FUN_10bfc3a0();
};

class Class_10BBDB40
{
public:
    float FUN_10bbdb40();
};

class Class_10DBD510
{
public:
    Class_10BBDB40* FUN_10dbd510(int Id);
};

extern float DAT_10e499a0;

struct Struct_10BE4800
{
    char Unknown00[8];
    Class_10DBD510* Unknown08;
    char Unknown0C[0x24];
    Class_10BFD210 Unknown30;
};

class Class_10E96510
{
public:
    float FUN_10be4800();

    char Unknown00[4];
    Struct_10BE4800* Unknown04;
};

// FUNCTION: 0x10BE4800 ?FUN_10be4800@Class_10E96510@@QAEMXZ
float Class_10E96510::FUN_10be4800()
{
    float L = Unknown04->Unknown30.FUN_10bfc3a0();
    float V = Unknown04->Unknown08->FUN_10dbd510(0x40100244)->FUN_10bbdb40();
    if (V < L)
        return DAT_10e499a0;
    float R = Unknown04->Unknown08->FUN_10dbd510(0x40100240)->FUN_10bbdb40();
    return R;
}
