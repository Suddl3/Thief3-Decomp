// Game/Class_10E8984C_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B90750_Arg1;

class Class_10E8984C
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void FUN_10b925e0(Class_10B90750_Arg1* A, int B, int C);

    void FUN_10b92330(Class_10B90750_Arg1* A, int B, int C);
    void FUN_10b90ab0(Class_10B90750_Arg1* A, int B, int C);
    void FUN_10b923b0(Class_10B90750_Arg1* A, int B, int C);
    void FUN_10b924d0(Class_10B90750_Arg1* A, int B, int C);
    void FUN_10b90750(Class_10B90750_Arg1* A, int B, int C);
    void FUN_10b90580(Class_10B90750_Arg1* A, int B, int C);

    unsigned char Unknown04;
    char Pad05[0x3];
};

// FUNCTION: 0x10B925E0 ?FUN_10b925e0@Class_10E8984C@@UAEXPAVClass_10B90750_Arg1@@HH@Z
void Class_10E8984C::FUN_10b925e0(Class_10B90750_Arg1* A, int B, int C)
{
    if (A)
    {
        if (Unknown04 & 0x10)
            ((Class_10E8984C*)this)->FUN_10b92330(A, B, C);
        if (Unknown04 & 0x81)
            FUN_10b90ab0(A, B, C);
        if (Unknown04 & 0x1)
            FUN_10b923b0(A, B, C);
        if (Unknown04 & 0x2)
            FUN_10b924d0(A, B, C);
        if (Unknown04 & 0x8)
            FUN_10b90750(A, B, C);
        if (Unknown04 & 0x40)
            FUN_10b90580(A, B, C);
    }
}
