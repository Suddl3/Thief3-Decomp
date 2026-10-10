// Game/Unsorted_10BB9600.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10c7d570
{
public:
    void* FUN_10c7d570();
};

class Class_10A2C2F0
{
public:
    bool FUN_10a2c500(void* A, void* B);
    void FUN_10a2daa0(void* A, int B, int* C, int D);
};

Class_10A2C2F0* FUN_10a2c6b0();

class Class_10BB9FC0
{
public:
    void FUN_10bb9e90();

    char Unknown00[8];
    Class_10c7d570* Unknown08;
    char Unknown0C[0x278];
    int Unknown284;
};

class Class_10BBB410 : public Class_10BB9FC0
{
public:
    void FUN_10bb9f60(int A, int B);
};

// FUNCTION: 0x10BB9F60 ?FUN_10bb9f60@Class_10BBB410@@QAEXHH@Z
void Class_10BBB410::FUN_10bb9f60(int A, int B)
{
    FUN_10bb9e90();
    if (Unknown284)
    {
        if (!FUN_10a2c6b0()->FUN_10a2c500(Unknown08->FUN_10c7d570(), &Unknown284))
        {
            Class_10c7d570* Item = Unknown08;
            FUN_10a2c6b0()->FUN_10a2daa0(Item->FUN_10c7d570(), A, &Unknown284, B);
        }
    }
}
