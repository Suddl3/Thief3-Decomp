// Game/Class_10E94458.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

extern void* DAT_10e94458[];

class Class_10E94458 : public Class_10E90D70
{
public:
    Class_10E94458* Construct(int A, int B, int C, int D, int E);

    int Unknown40;
    int Unknown44[3];
    float Unknown50;
    int Unknown54;
    int Unknown58;
    int Unknown5C;
};

// FUNCTION: 0x10BDB500 ?Construct@Class_10E94458@@QAEPAV1@HHHHH@Z
Class_10E94458* Class_10E94458::Construct(int A, int B, int C, int D, int E)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown40 = C;
    for (int i = 0; i < 3; i++)
        Unknown44[i] = 0;
    Unknown50 = -1.0f;
    Unknown00 = DAT_10e94458;
    Unknown54 = D;
    Unknown58 = E;
    Unknown5C = 0;
    return this;
}
