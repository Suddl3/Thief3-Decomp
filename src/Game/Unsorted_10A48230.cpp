// Game/Unsorted_10A48230.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10970890;

class Class_1098E330
{
public:
    Class_10970890* FUN_10991eb0();

    char Unknown00[0x24];
    int Unknown24;
};

class Class_10970890
{
public:
    void FUN_109724c0(Class_1098E330* A, int B);

    char Unknown00[0x5C];
    int Unknown5C;
};

class Class_10E5D360
{
public:
    Class_10E5D360(int Value) : Unknown04(Value) {}

    virtual ~Class_10E5D360() {}
    virtual void Virtual1();
    virtual int FUN_10b9caa0(Class_10E5D360* Other);

    int Unknown04;
};

class Class_10E678F0;

class Class_10F46DA0
{
public:
    virtual void Virtual0();
    virtual void Virtual1(Class_10E678F0* Obj, int B, int C, Class_10E5D360* D);
};

extern Class_10F46DA0* DAT_10f46da0;

class Class_10BFBD70
{
public:
    Class_10BFBD70() : Unknown00(0), Unknown04(0), Unknown08(0) {}
    ~Class_10BFBD70();

    int Unknown00;
    int Unknown04;
    int Unknown08;
};

class Class_10E678F0
{
public:
    Class_10E678F0();
    virtual ~Class_10E678F0();

    Class_10BFBD70 Unknown04;
    Class_10BFBD70 Unknown10;
};

// FUNCTION: 0x10A482C0 ?FUN_10a482c0@@YA_NPAVClass_1098E330@@0@Z
bool FUN_10a482c0(Class_1098E330* A, Class_1098E330* B)
{
    if (A && B && A->Unknown24 == B->Unknown24)
    {
        Class_10970890* First = A->FUN_10991eb0();
        Class_10970890* Second = B->FUN_10991eb0();
        if (First && Second)
        {
            Second->FUN_109724c0(B, First->Unknown5C);
            return true;
        }
    }
    return false;
}

// FUNCTION: 0x10A48450 ??0Class_10E678F0@@QAE@XZ
Class_10E678F0::Class_10E678F0()
{
    Class_10E5D360 Local(0x800051f);
    DAT_10f46da0->Virtual1(this, 1, -1, &Local);
}
