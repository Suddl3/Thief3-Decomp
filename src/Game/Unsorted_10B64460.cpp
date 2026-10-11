// Game/Unsorted_10B64460.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B64460_Unknown04
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, bool C);
};

class Class_10B64460
{
public:
    bool FUN_10b64460(int A, int B, bool C, Class_10B64460_Unknown04* D);

    char Unknown00[4];
    Class_10B64460_Unknown04* Unknown04;
    char Unknown08[0x14];
    int Unknown1C;
    int Unknown20;
    int Unknown24;
};

// FUNCTION: 0x10B64460 ?FUN_10b64460@Class_10B64460@@QAE_NHH_NPAVClass_10B64460_Unknown04@@@Z
bool Class_10B64460::FUN_10b64460(int A, int B, bool C, Class_10B64460_Unknown04* D)
{
    if (!C || D == 0 || D != Unknown04)
    {
        Unknown1C = 0x40;
        return false;
    }
    if (A == 0x1b || A == 0x1c || A == 0x25 || A == 0x24)
    {
        Unknown20 = 0;
        Unknown24 = 0;
        Unknown1C = A;
        return Unknown04->Virtual1(A, B, C);
    }
    return false;
}
