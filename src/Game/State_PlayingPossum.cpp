// Game/State_PlayingPossum.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e92a00[];

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class State_PlayingPossum : public Class_10E90D70
{
public:
    State_PlayingPossum* FUN_10bce920(int A, int B, int C);

    double Unknown40;
    double Unknown48;
    int Unknown50;
};

// FUNCTION: 0x10BCE920 ?FUN_10bce920@State_PlayingPossum@@QAEPAV1@HHH@Z
State_PlayingPossum* State_PlayingPossum::FUN_10bce920(int A, int B, int C)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = -1.0;
    Unknown00 = DAT_10e92a00;
    Unknown48 = -1.0;
    Unknown50 = C;
    return this;
}
