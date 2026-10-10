// Game/Unsorted_10C0B960_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[16];
    int Unknown14;
};

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int Value);

    int Count;
    int Unknown04;
    void** Data;
};

class Class_10C0B960
{
public:
    void FUN_10c0b960(FArchive& Ar);

    char Unknown00[0x14];
    Class_10BFBD70 Unknown14;
};

// FUNCTION: 0x10C0B960 ?FUN_10c0b960@Class_10C0B960@@QAEXAAVFArchive@@@Z
void Class_10C0B960::FUN_10c0b960(FArchive& Ar)
{
    int Count = Unknown14.Count;
    Ar.Virtual1(&Count, 4);
    if (Ar.Unknown14)
        Unknown14.FUN_10bfbd70(Count);
    for (int i = 0; i < Count; i++)
        Ar.Virtual6(&Unknown14.Data[i]);
}
