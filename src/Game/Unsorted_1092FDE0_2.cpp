// Game/Unsorted_1092FDE0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern bool DAT_10f2c759;

extern unsigned int DAT_10efef9c;

extern unsigned int DAT_10efefa0;

class Class_10930110
{
public:
    void FUN_1092ff00(int A, int B);
    bool FUN_10925130(int A);
    void FUN_1092fae0(int A, int B, void* C);
    void FUN_10925190(int A);

    char Unknown00[0x50];
    int Unknown50;
    char Unknown54[4];
    void** Unknown58;
};

// FUNCTION: 0x1092FF00 ?FUN_1092ff00@Class_10930110@@QAEXHH@Z
void Class_10930110::FUN_1092ff00(int A, int B)
{
    if (!DAT_10f2c759 && DAT_10efef9c < DAT_10efefa0 && FUN_10925130(6))
    {
        for (int i = 0; i < Unknown50; i++)
            FUN_1092fae0(A, 6, Unknown58[i]);
        FUN_10925190(6);
    }
}
