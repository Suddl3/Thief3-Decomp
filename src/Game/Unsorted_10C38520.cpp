// Game/Unsorted_10C38520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_10C37D30
{
    Struct_10C37D30() { Unknown00 = 0; }
    Struct_10C37D30(const Struct_10C37D30& Other) { Unknown00 = Other.Unknown00; }

    int Unknown00;
};

bool FUN_10c37d30(void* A, int B, int C, float D, float E, int F, int G, Struct_10C37D30 H);

class Class_10C38520
{
public:
    void FUN_10c38520(bool A);

    char Unknown00[0x48];
    void* Unknown48;
};

// FUNCTION: 0x10C38520 ?FUN_10c38520@Class_10C38520@@QAEX_N@Z
void Class_10C38520::FUN_10c38520(bool A)
{
    if (A)
    {
        FUN_10c37d30(Unknown48, 0x25, 1, -1.0f, 1.0f, 0, 1, Struct_10C37D30());
        FUN_10c37d30(Unknown48, 0x1c, 0, 0.1f, 1.0f, 0, 1, Struct_10C37D30());
        FUN_10c37d30(Unknown48, 0x11, 0, 0.0f, 1.0f, 0, 1, Struct_10C37D30());
    }
    else
    {
        FUN_10c37d30(Unknown48, 0x25, 1, -1.0f, 1.0f, 0, 1, Struct_10C37D30());
    }
}
