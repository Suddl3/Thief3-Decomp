// Game/Unsorted_1092D570_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1092D570_Unknown30
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
    virtual void Virtual11();
    virtual void Virtual12();
    virtual void Virtual13();
    virtual void __stdcall Virtual14(int A, void* B);
};

class Class_1092D570_Unknown08
{
public:
    char Unknown00[0x30];
    Class_1092D570_Unknown30* Unknown30;
};

void* FUN_1092cac0(const char* A1, int A2, int A3, int A4, int A5, int A6);

void FUN_1092bdb0(void* X);

class Class_1092D420
{
public:
    bool Release();
    bool FUN_1092d440();
    bool Open(const char* A1, int A2, int A3, int A4, int A5, int A6);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
    bool Unknown0C;
};

// FUNCTION: 0x1092D570 ?Open@Class_1092D420@@QAE_NPBDHHHHH@Z
bool Class_1092D420::Open(const char* A1, int A2, int A3, int A4, int A5, int A6)
{
    bool Result = false;
    if (Unknown08)
        Release();
    Unknown08 = FUN_1092cac0(A1, A2, A3, 0, A4, 0);
    if (Unknown08 && ((Class_1092D570_Unknown08*)Unknown08)->Unknown30)
    {
        Unknown00 = A5;
        char Local[0x20];
        Unknown04 = A6;
        ((Class_1092D570_Unknown08*)Unknown08)->Unknown30->Virtual14(0, Local);
        Result = FUN_1092d440();
        if (Result)
            return Result;
    }
    if (Unknown08)
        FUN_1092bdb0(Unknown08);
    Unknown08 = 0;
    Unknown00 = 0;
    Unknown04 = 0;
    return Result;
}
