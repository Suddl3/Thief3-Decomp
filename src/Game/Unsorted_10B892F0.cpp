// Game/Unsorted_10B892F0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

typedef float FLOAT;

class FVector
{
public:
    FVector() {}
    FVector(FLOAT InX, FLOAT InY, FLOAT InZ) : X(InX), Y(InY), Z(InZ) {}

    FLOAT X, Y, Z;
};

class Class_10D9FF10
{
public:
    FVector FUN_10d9ff10();
};

class Class_10B892F0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7(int A);

    void FUN_10b892f0();

    int Unknown04;
    Class_10D9FF10* Unknown08;
    int Unknown0C;
    int Unknown10;
    FVector* Unknown14;
    FVector Unknown18;
    FVector Unknown24;
};

// FUNCTION: 0x10B892F0 ?FUN_10b892f0@Class_10B892F0@@QAEXXZ
void Class_10B892F0::FUN_10b892f0()
{
    if (Unknown0C > 0)
    {
        FVector Saved = Unknown24;
        Unknown24 = *Unknown14;
        Unknown18 = Unknown08->FUN_10d9ff10();
        *Unknown14 = Saved;
        Virtual7(0);
    }
}
