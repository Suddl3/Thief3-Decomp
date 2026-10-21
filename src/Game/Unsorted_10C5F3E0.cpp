// Game/Unsorted_10C5F3E0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10C4B2A0 {
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(int A, int B);
};

class Class_10C4B2A0* __cdecl GetCadenceFactory(void);

void UseAddress(int* Pointer);

class Class_10C5F3E0 {
public:
    int FUN_10c5f3e0(int A);

    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10C5F3E0 ?FUN_10c5f3e0@Class_10C5F3E0@@QAEHH@Z
int Class_10C5F3E0::FUN_10c5f3e0(int A)
{
    int Local = 0;
    if (0)
        UseAddress(&Local);
    GetCadenceFactory()->Virtual7(A, Unknown04);
    return A;
}
