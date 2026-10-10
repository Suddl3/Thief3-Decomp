// Game/Unsorted_10BB7F90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
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

extern float DAT_10eafbdc;

class Class_10BB8070
{
public:
    bool FUN_10bb8070();

    char Unknown00[8];
    Class_10DBD510* Unknown08;
    char Unknown0C[0x24];
    Class_10BFD210 Unknown30;
    char Unknown31[0x267];
    float Unknown298;
};

// FUNCTION: 0x10BB8070 ?FUN_10bb8070@Class_10BB8070@@QAE_NXZ
bool Class_10BB8070::FUN_10bb8070()
{
    float L = Unknown30.FUN_10bfc3a0();
    float V = Unknown08->FUN_10dbd510(0x40100242)->FUN_10bbdb40();
    if (V < L)
        return false;
    if (Unknown298 < DAT_10eafbdc)
        return true;
    return false;
}
