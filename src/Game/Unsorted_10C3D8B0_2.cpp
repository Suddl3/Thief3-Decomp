// Game/Unsorted_10C3D8B0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(int* Value);
    virtual void Virtual7(int* Value);

    char Unknown04[0x10];
    int Unknown14;
};

void FUN_10c11ff0(FArchive& Ar, int* Value);

class Class_10E9AFD0
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
    virtual void Virtual14();
    virtual void Virtual15();
    virtual void Virtual16();
    virtual void FUN_10c3db00(FArchive& Ar);

    int Unknown04;
    char Unknown08[4];
    int Unknown0C;
    int Unknown10;
    char Unknown14[4];
    unsigned char Unknown18;
};

// FUNCTION: 0x10C3DB00 ?FUN_10c3db00@Class_10E9AFD0@@UAEXAAVFArchive@@@Z
void Class_10E9AFD0::FUN_10c3db00(FArchive& Ar)
{
    Ar.Virtual6(&Unknown04);
    unsigned char Temp = Unknown0C;
    Ar.Serialize(&Temp, 1);
    if (Ar.Unknown14)
        Unknown0C = Temp;
    FUN_10c11ff0(Ar, &Unknown10);
    Ar.Serialize(&Unknown18, 1);
}
