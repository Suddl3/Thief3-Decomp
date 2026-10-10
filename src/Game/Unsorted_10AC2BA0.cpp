// Game/Unsorted_10AC2BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual ~FArchive();
    virtual void Serialize(void* V, int Length);
    char Unknown04[0x10];
    int Unknown14;
};

class Class_10E6F5F0
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
    virtual void FUN_10ac2c60(FArchive& Ar);

    char Unknown04[8];
    int Unknown0C;
    int Unknown10;
    bool Unknown14;
    char Unknown15[7];
    int Unknown1C;
    char Unknown20[0x71];
    bool Unknown91;
};

// FUNCTION: 0x10AC2C60 ?FUN_10ac2c60@Class_10E6F5F0@@UAEXAAVFArchive@@@Z
void Class_10E6F5F0::FUN_10ac2c60(FArchive& Ar)
{
    Ar.Serialize(&Unknown0C, 4);
    Ar.Serialize(&Unknown10, 4);
    Ar.Serialize(&Unknown14, 1);
    int Key = Unknown1C;
    Ar.Serialize(&Key, 4);
    if (Ar.Unknown14)
    {
        Unknown1C = Key;
        Unknown91 = true;
    }
}
