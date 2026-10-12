// Game/State_Sit.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e953a8[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class Class_10E95050 : public Class_10E90D70
{
public:
    Class_10E95050(int A, int B);

    int Unknown40;
    int Unknown44;
};

class State_Sit : public Class_10E95050
{
public:
    State_Sit* Init(int A, int B, int C, int D, int E, bool F);

    int Unknown48;
    bool Unknown4C;
    bool Unknown4D;
    bool Unknown4E;
    int Unknown50;
    int Unknown54;
    float Unknown58;
    int Unknown5C;
    int Unknown60;
    bool Unknown64;
};

// FUNCTION: 0x10BDF660 ?Init@State_Sit@@QAEPAV1@HHHHH_N@Z
State_Sit* State_Sit::Init(int A, int B, int C, int D, int E, bool F)
{
    this->Class_10E95050::Class_10E95050(A, B);
    Unknown00 = DAT_10e953a8;
    Unknown48 = C;
    Unknown4C = false;
    Unknown4D = false;
    Unknown4E = false;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 5.0f;
    Unknown5C = D;
    Unknown60 = E;
    Unknown64 = F;
    return this;
}
