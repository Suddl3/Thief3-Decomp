// Game/Class_10E98DE0_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10e49984;

class Class_10E98DE0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual float Virtual6(int A);
    virtual void Virtual7();
    virtual float FUN_10c1b290(Class_10E98DE0* Other);

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

// FUNCTION: 0x10C1B290 ?FUN_10c1b290@Class_10E98DE0@@UAEMPAV1@@Z
float Class_10E98DE0::FUN_10c1b290(Class_10E98DE0* Other)
{
    if (Other->Unknown28 > Unknown28)
        Unknown28 = Other->Unknown28;
    Unknown54 = Other->Unknown54;
    float OtherValue = Other->Virtual6(0);
    float Value = Virtual6(0) + OtherValue;
    if (!(Value <= DAT_10e49984))
        Value = DAT_10e49984;
    Unknown2C = Value;
    Unknown3C = Value;
    Unknown34 = Value;
    return Other->Virtual6(0);
}
