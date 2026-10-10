// Game/Class_10EC0E20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10EC0E20
{
public:
    void FUN_10b7ad70();
    void FUN_10b7b820();
    void FUN_10b7abb0(int A);
    void FUN_10b7b8a0();

    char Unknown00[8];
    int Unknown08;
    int Unknown0C;
    char Unknown10[8];
    bool Unknown18;
};

// FUNCTION: 0x10B7B8A0 ?FUN_10b7b8a0@Class_10EC0E20@@QAEXXZ
void Class_10EC0E20::FUN_10b7b8a0()
{
    FUN_10b7b820();
    if (Unknown18)
    {
        Unknown18 = false;
        FUN_10b7ad70();
        FUN_10b7abb0(0);
        Unknown0C = Unknown08;
    }
}
