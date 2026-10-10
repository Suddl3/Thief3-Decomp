// Game/Unsorted_10C4D3C0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C4D810
{
    int Count;
    char Unknown04[4];
    int Unknown08;
};

class Class_10C4D250
{
public:
    float FUN_10c4d250(int A, int B, int C);
    float FUN_10c4d810(Struct_10C4D810* Arg);
};

// FUNCTION: 0x10C4D810 ?FUN_10c4d810@Class_10C4D250@@QAEMPAUStruct_10C4D810@@@Z
float Class_10C4D250::FUN_10c4d810(Struct_10C4D810* Arg)
{
    float Sum = 0.0f;
    for (int i = 1; i < Arg->Count - 1; i++)
    {
        int P = Arg->Unknown08 + i * 12;
        Sum += FUN_10c4d250(Arg->Unknown08, P, P + 12);
    }
    return Sum;
}
