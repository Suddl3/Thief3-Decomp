// Game/Unsorted_10C59EE0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10DA12F0
{
    int Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10DA12F0
{
public:
    Struct_10DA12F0* FUN_10da12f0();

    char Unknown00[0x10];
};

class Class_10DA1FC0
{
public:
    void FUN_10da1fc0(Struct_10DA12F0 Value, int Flag);
    void FUN_10da2110();
};

class Class_10C59EE0_Unknown00;

Class_10DA1FC0* __stdcall FUN_10da4280(Class_10C59EE0_Unknown00* A);

class Class_10C59EE0
{
public:
    void FUN_10c59ee0(bool Flag);
    void FUN_10c58bb0(int A, int B);

    Class_10C59EE0_Unknown00* Unknown00;
};

class Class_10C5A160_Y
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

class Class_10C56E40
{
public:
    Class_10C56E40(Class_10C5A160_Y*& A);
    ~Class_10C56E40();

    Class_10C5A160_Y* Unknown00;
};

inline Class_10C56E40::Class_10C56E40(Class_10C5A160_Y*& A)
{
    Class_10C5A160_Y* P = A;
    Unknown00 = P;
    if (P)
        P->Virtual1();
}

class InnerClass_10c58e90
{
public:
    InnerClass_10c58e90(int B);
};

class Class_10C5A160
{
public:
    Class_10C5A160(Class_10C5A160_Y*& A, int B);

    Class_10C56E40 Unknown00;
    InnerClass_10c58e90 Unknown04;
};

// FUNCTION: 0x10C59EE0 ?FUN_10c59ee0@Class_10C59EE0@@QAEX_N@Z
void Class_10C59EE0::FUN_10c59ee0(bool Flag)
{
    if (Flag)
    {
        Class_10DA12F0 Local;
        Struct_10DA12F0* Value = Local.FUN_10da12f0();
        FUN_10da4280(Unknown00)->FUN_10da1fc0(*Value, 1);
    }
    else
    {
        FUN_10da4280(Unknown00)->FUN_10da2110();
        FUN_10c58bb0(0, 0);
    }
}

// FUNCTION: 0x10C5A160 ??0Class_10C5A160@@QAE@AAPAVClass_10C5A160_Y@@H@Z
Class_10C5A160::Class_10C5A160(Class_10C5A160_Y*& A, int B)
    : Unknown00(A), Unknown04(B)
{
}
