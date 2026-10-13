// Game/Class_10E9925C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

float FUN_10c26120(float A, float B, float C, float D, int E);

class Class_10E9925C
{
public:
    virtual void Clear();
    virtual void Virtual1();
    virtual void FUN_10c26210(float A, float B, float C, int D);
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void AddToRegistry();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual float Virtual10();

    char Unknown04[0x8];
    int m_RegistryId;
    char Unknown10[0x4];
    float Unknown14;
    float Unknown18;
    char Unknown1C[0x8];
    float Unknown24;
    float Unknown28;
    float Unknown2C;
};

// FUNCTION: 0x10C26210 ?FUN_10c26210@Class_10E9925C@@UAEXMMMH@Z
void Class_10E9925C::FUN_10c26210(float A, float B, float C, int D)
{
    if (m_RegistryId >= 0)
    {
        Unknown24 = FUN_10c26120(Unknown24, A, Unknown14, Virtual10(), D);
        Unknown28 = FUN_10c26120(Unknown28, B, Unknown18, Virtual10(), D);
        Unknown2C = FUN_10c26120(Unknown2C, C, Unknown18, Virtual10(), D);
    }
}
