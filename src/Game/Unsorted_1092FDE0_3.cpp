// Game/Unsorted_1092FDE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern bool DAT_10f2c757;

class Class_10930110
{
public:
    void FUN_10930110(int Param1, int Param2);
    bool FUN_10925160(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_10925190(int A);

    char Unknown00[0x50];
    int Unknown50;
    char Unknown54[4];
    void** Unknown58;
};

// FUNCTION: 0x10930110 ?FUN_10930110@Class_10930110@@QAEXHH@Z
void Class_10930110::FUN_10930110(int Param1, int Param2)
{
    if (!DAT_10f2c757 && FUN_10925160(Param2))
    {
        for (int i = 0; i < Unknown50; i++)
            FUN_1092fae0(Param1, 4, Unknown58[i]);
        FUN_10925190(4);
    }
}
