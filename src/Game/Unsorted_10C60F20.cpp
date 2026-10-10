// Game/Unsorted_10C60F20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C60F20
{
    char Unknown00[8];
    unsigned int Unknown08;
};

extern float DAT_10eafbdc;

class Class_10C60F20
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
    float FUN_10c60f20();

    char Unknown04[0x18];
    Struct_10C60F20* Unknown1C;
    char Unknown20[0xE4];
    int Unknown104;
    char Unknown108[0x14];
    bool Unknown11C;
};

// FUNCTION: 0x10C60F20 ?FUN_10c60f20@Class_10C60F20@@QAEMXZ
float Class_10C60F20::FUN_10c60f20()
{
    Virtual9();
    if (Unknown11C)
    {
        if (Unknown1C)
        {
            unsigned int Count = Unknown1C->Unknown08;
            if (Count)
                return (float)Unknown104 / (float)Count;
        }
    }
    return DAT_10eafbdc;
}
