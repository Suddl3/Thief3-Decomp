// Game/Unsorted_10B39610.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10B46F50
{
public:
    void FUN_10b46f50(float A);
};

class Class_10B3A460
{
public:
    Class_10B3A460* FUN_10b3a460(int A);

    char Unknown00[0x1C];
    int Unknown1C;
};

Class_10B3A460* FUN_10b3abf0();

class Class_10B39610
{
public:
    void FUN_10b39610(float A, int B);

    char Unknown00[0xC];
    Class_10B46F50* Unknown0C[8];
};

// FUNCTION: 0x10B39610 ?FUN_10b39610@Class_10B39610@@QAEXMH@Z
void Class_10B39610::FUN_10b39610(float A, int B)
{
    if (B == 0x101)
    {
        for (int i = 0; i < 8; i++)
            Unknown0C[i]->FUN_10b46f50(A);
        return;
    }
    int Index = FUN_10b3abf0()->FUN_10b3a460(B)->Unknown1C;
    Unknown0C[Index]->FUN_10b46f50(A);
}
