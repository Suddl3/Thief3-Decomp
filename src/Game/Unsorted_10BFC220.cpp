// Game/Unsorted_10BFC220.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

double GetTimeSeconds();

extern float DAT_10eafbdc;

class Class_10C3DD60
{
public:
    void SetField28(float Value);

    char Unknown00[0x24];
    float Field24;

    virtual float FUN_10c3dd60();
};

class Class_10BFC2B0_Unknown04
{
public:
    char Unknown00[0x4];
    float Unknown04;
};

class Class_10BFC2B0
{
public:
    void FUN_10bfc2b0();

    char Unknown00[0x4];
    Class_10BFC2B0_Unknown04* Unknown04;
    int Unknown08;
    char Unknown0C[0x4];
    Class_10C3DD60** Unknown10;
    char Unknown14[0x38];
    float Unknown4C;
};

// FUNCTION: 0x10BFC2B0 ?FUN_10bfc2b0@Class_10BFC2B0@@QAEXXZ
void Class_10BFC2B0::FUN_10bfc2b0()
{
    if (Unknown4C != DAT_10eafbdc)
    {
        float Elapsed = GetTimeSeconds() - Unknown4C;
        Unknown04->Unknown04 = Elapsed + Unknown04->Unknown04;
        for (int i = 0; i < Unknown08; i++)
        {
            Class_10C3DD60* Obj = Unknown10[i];
            Obj->SetField28(Obj->Class_10C3DD60::FUN_10c3dd60() + Elapsed);
        }
        Unknown4C = 0.0f;
    }
}
