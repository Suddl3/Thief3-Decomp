// Game/Unsorted_10A16E90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10A16E90
{
    unsigned short Low;
    short High;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
};

class Class_10A16B60
{
public:
    int FUN_10a16b60(int A, Struct_10A16E90 B, short F, short G);
};

class Class_10E5D688
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
    virtual void FUN_10a16e90(int A, int B, int C, int D, short E);

    char Unknown04[0x2C];
    Class_10A16B60 Unknown30;
};

// FUNCTION: 0x10A16E90 ?FUN_10a16e90@Class_10E5D688@@UAEXHHHHF@Z
void Class_10E5D688::FUN_10a16e90(int A, int B, int C, int D, short E)
{
    if (A)
    {
        Struct_10A16E90 Key;
        Key.High = E;
        Key.Low = D;
        Key.Unknown04 = B;
        Key.Unknown08 = C;
        int Mid = 0;
        if (!(D & 1))
        {
            if (B > 0)
                Mid = B;
            if (Mid > C)
                Mid = C;
        }
        Key.Unknown0C = Mid;
        Unknown30.FUN_10a16b60(A, Key, 0, -1);
    }
}
