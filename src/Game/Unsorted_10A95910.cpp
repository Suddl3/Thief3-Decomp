// Game/Unsorted_10A95910.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10A67BC0
{
public:
    double FUN_10a67bc0();
};

struct Struct_10AA3520
{
    char Unknown00[0x70];
    Class_10A67BC0* Unknown70;
};

extern Struct_10AA3520* DAT_10f35dec;

class Class_10E6CE50
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual int FUN_10a95910(int A, int B);

    char Unknown04[4];
    int Unknown0C;
    double Unknown10;
};

// FUNCTION: 0x10A95910 ?FUN_10a95910@Class_10E6CE50@@UAEHHH@Z
int Class_10E6CE50::FUN_10a95910(int A, int B)
{
    if (DAT_10f35dec && DAT_10f35dec->Unknown70)
    {
        double Now = DAT_10f35dec->Unknown70->FUN_10a67bc0();
        double Elapsed = Now - Unknown10;
        if (Elapsed < 0.0)
            Elapsed = 0.0;
        Unknown0C = (int)(Unknown0C - Elapsed);
        Unknown10 = Now;
        if (Unknown0C < 0)
            return 1;
    }
    return 0;
}
