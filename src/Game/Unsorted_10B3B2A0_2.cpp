// Game/Unsorted_10B3B2A0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class AGarrett
{
public:
    char Unknown00[0x31C];
    int Unknown31C;
    char Unknown320[0x130];
    int Unknown450;
};

class Class_10E50610
{
public:
    Class_10E50610() : Unknown04(0) {}
    virtual ~Class_10E50610() {}

    int Unknown04;
};

class Class_10E6D208 : public Class_10E50610
{
public:
    Class_10E6D208() : Unknown08(0) {}

    int Unknown08;
};

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5(int A, int B, Class_10E6D208* C, int* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10E7EB20
{
public:
    void FUN_10b3b400(AGarrett* A);
};

// FUNCTION: 0x10B3B400 ?FUN_10b3b400@Class_10E7EB20@@QAEXPAVAGarrett@@@Z
void Class_10E7EB20::FUN_10b3b400(AGarrett* A)
{
    A->Unknown450 &= 0xfffffffb;
    if (A->Unknown31C != 0)
    {
        int Result = 0;
        Class_10E6D208 Local;
        DAT_10f46da0->Virtual5(0x34, A->Unknown31C, &Local, &Result);
        A->Unknown31C = 0;
    }
}
