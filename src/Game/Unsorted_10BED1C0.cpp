// Game/Unsorted_10BED1C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BB8360
{
public:
    int FUN_10bb85d0();
    void FUN_10bb8360(int A, float B, int C);
    void FUN_10bb83a0(int A, float B, int C);
};

class Class_10BED1C0
{
public:
    void FUN_10bed1c0();

    char Unknown00[4];
    Class_10BB8360* Unknown04;
    char Unknown08[0x50];
    int Unknown58;
    char Unknown5C[4];
    int* Unknown60;
};

// FUNCTION: 0x10BED1C0 ?FUN_10bed1c0@Class_10BED1C0@@QAEXXZ
void Class_10BED1C0::FUN_10bed1c0()
{
    if (Unknown58 == 0)
    {
        int Value = Unknown04->FUN_10bb85d0();
        if (Value)
            Unknown04->FUN_10bb8360(Value, 0.5f, 0);
    }
    for (int i = 0; i < Unknown58; i++)
        Unknown04->FUN_10bb83a0(Unknown60[i] + 0x2c, 1.5f, 0);
}
