// Game/Class_10E49F64.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10934B10_Unknown14;

class Class_10934B10_Unknown04
{
public:
    int FUN_10934bd0(int A, int B, Class_10934B10_Unknown14** C, unsigned int* D);
};

class Class_10934B10_Unknown14
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
    virtual int __stdcall Virtual11(unsigned int A, unsigned int B, void** C, unsigned int D);
};

class Class_10E49F64
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10934b10(int A, int B, void** Out);

    Class_10934B10_Unknown04* Unknown04;
    char Unknown08[0xc];
    Class_10934B10_Unknown14* Unknown14;
    unsigned int Unknown18;
    int Unknown1C;
    unsigned int Unknown20;
    unsigned int Unknown24;
};

// FUNCTION: 0x10934B10 ?FUN_10934b10@Class_10E49F64@@UAEHHHPAPAX@Z
int Class_10E49F64::FUN_10934b10(int A, int B, void** Out)
{
    if (Out == 0)
        return 0x80070057;
    else
    {
        *Out = 0;
        if (A != 0)
            return 0x80070057;
        if (B == 0)
            return 0x80070057;
        if (Unknown1C != 0)
            return 0x80040720;
        int Hr = Unknown04->FUN_10934bd0(Unknown20 * B, Unknown20, &Unknown14, &Unknown18);
        if (Hr >= 0)
        {
            Hr = Unknown14->Virtual11(Unknown18, Unknown20 * B, Out, Unknown18 != 0 ? 0x1000 : 0x2000);
            if (Hr >= 0)
            {
                Unknown1C = Unknown20 * B;
                Unknown24 = Unknown18 / Unknown20;
            }
        }
        return Hr;
    }
}
