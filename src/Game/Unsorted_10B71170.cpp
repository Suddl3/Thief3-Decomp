// Game/Unsorted_10B71170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B71170_Unknown1B4
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A, int B, bool C);
};

class Class_10B71170
{
public:
    bool FUN_10b71170(int A, int B, bool C);

    char Unknown00[0xC4];
    Class_10B71170_Unknown1B4* Unknown0C4;
    char Unknown0C8[0xEC];
    Class_10B71170_Unknown1B4* Unknown1B4;
    Class_10B71170_Unknown1B4* Unknown1B8;
    Class_10B71170_Unknown1B4* Unknown1BC;
    Class_10B71170_Unknown1B4* Unknown1C0;
};

// FUNCTION: 0x10B71170 ?FUN_10b71170@Class_10B71170@@QAE_NHH_N@Z
bool Class_10B71170::FUN_10b71170(int A, int B, bool C)
{
    bool Result = false;
    if (A == 0x1d && C)
    {
        if (Unknown1B4 && Unknown1B4 == Unknown0C4)
        {
            Result = Unknown1B4->Virtual1(0x1d, B, C);
        }
        if (Unknown1B8 && Unknown1B8 == Unknown0C4)
        {
            Result = Unknown1B8->Virtual1(0x1d, B, C);
        }
        if (Unknown1BC && Unknown1BC == Unknown0C4)
        {
            Result = Unknown1BC->Virtual1(0x1d, B, C);
        }
        if (Unknown1C0 && Unknown1C0 == Unknown0C4)
        {
            Result = Unknown1C0->Virtual1(0x1d, B, C);
        }
    }
    return Result;
}
