// Game/Unsorted_10C1B330.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

extern float DAT_10e49984;

class Class_10E98E28
{
public:
    virtual void Virtual0();
    virtual void Virtual1(char* A, float* B);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
    virtual void Virtual7();
    virtual float FUN_10c1b330(Class_10E98E28* Other);

    char Unknown04[0x24];
    float Unknown28;
    float Unknown2C;
    char Unknown30[0x4];
    float Unknown34;
    char Unknown38[0x4];
    float Unknown3C;
    char Unknown40[0x8];
    char Unknown48[0xC];
    float Unknown54;
};

// FUNCTION: 0x10C1B330 ?FUN_10c1b330@Class_10E98E28@@UAEMPAV1@@Z
float Class_10E98E28::FUN_10c1b330(Class_10E98E28* Other)
{
    if (Other->Unknown28 > Unknown28)
        Unknown28 = Other->Unknown28;
    float Mine = Unknown54;
    float Theirs = Other->Unknown54;
    Unknown54 = Theirs >= Mine ? Theirs : Mine;
    float OtherValue = Other->Virtual6(0);
    if (Virtual6(0) > DAT_10eafbdc || OtherValue > DAT_10eafbdc)
    {
        float Value = Virtual6(1) + Other->Virtual6(1);
        if (!(Value <= DAT_10e49984))
            Value = DAT_10e49984;
        Unknown2C = Value;
        Unknown3C = Value;
        Unknown34 = Value;
    }
    float Zero = 0.0f;
    Other->Virtual1(Unknown48, &Zero);
    return Other->Virtual6(0);
}
