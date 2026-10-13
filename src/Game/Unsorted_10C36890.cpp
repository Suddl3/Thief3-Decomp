// Game/Unsorted_10C36890.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C368F0_Entry
{
    int Unknown00;
    int Unknown04;
    char Unknown08;
};

class Class_10E93F60
{
public:
    virtual void FUN_10c368f0(int A, char B, int C);

    Struct_10C368F0_Entry Unknown04[16];
    int UnknownC4;
};

// FUNCTION: 0x10C368F0 ?FUN_10c368f0@Class_10E93F60@@UAEXHDH@Z
void Class_10E93F60::FUN_10c368f0(int A, char B, int C)
{
    for (int i = 0; i < UnknownC4; i++)
    {
        if (Unknown04[i].Unknown00 == A && Unknown04[i].Unknown08 == B)
        {
            Unknown04[i].Unknown04 += C;
            return;
        }
    }
    Unknown04[UnknownC4].Unknown00 = A;
    Unknown04[UnknownC4].Unknown08 = B;
    Unknown04[UnknownC4].Unknown04 = C;
    UnknownC4++;
}
