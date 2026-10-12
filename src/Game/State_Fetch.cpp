// Game/State_Fetch.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e95e18;

class Class_10E90D70
{
public:
    Class_10E90D70(int A, int B);

    void** Unknown00;
    int Unknown04[15];
};

class State_Fetch : public Class_10E90D70
{
public:
    State_Fetch* FUN_10be2f50(int A, int B, int C, int D);

    int m_Reference;
    char Unknown44;
    int Unknown48;
};

// FUNCTION: 0x10BE2F50 ?FUN_10be2f50@State_Fetch@@QAEPAV1@HHHH@Z
State_Fetch* State_Fetch::FUN_10be2f50(int A, int B, int C, int D)
{
    this->Class_10E90D70::Class_10E90D70(A, B);
    Unknown00 = &DAT_10e95e18;
    m_Reference = C;
    Unknown44 = 0;
    Unknown48 = D;
    return this;
}
