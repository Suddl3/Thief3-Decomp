// Game/Unsorted_10B15660.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B274B0;

Class_10B274B0* __stdcall FUN_10b15660(int A);

class Class_10B274D0
{
public:
    void FUN_10b274d0(int A);
};

class Class_10A5D460
{
public:
    void FUN_10a5d460();
};

class Class_10B274B0
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

    void FUN_10b274b0(int A);
    void FUN_10b27e00(int A, int B);

    char Unknown04[0x1C4];
    int Unknown1C8;
};

class Class_10B15840
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4(Class_10B274B0* A);

    Class_10B274B0* FUN_10b15840(int A, int B, int C, int D, int E, int F);
};

// FUNCTION: 0x10B15840 ?FUN_10b15840@Class_10B15840@@QAEPAVClass_10B274B0@@HHHHHH@Z
Class_10B274B0* Class_10B15840::FUN_10b15840(int A, int B, int C, int D, int E, int F)
{
    Class_10B274B0* P = FUN_10b15660(A);
    if (P)
    {
        P->FUN_10b274b0(B);
        ((Class_10B274D0*)P)->FUN_10b274d0(C);
        P->FUN_10b27e00(D, E);
        ((Class_10A5D460*)P)->FUN_10a5d460();
        P->Virtual7();
        P->Unknown1C8 = F;
        Virtual4(P);
    }
    return P;
}
