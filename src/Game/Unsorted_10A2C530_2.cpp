// Game/Unsorted_10A2C530_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern float DAT_10eafbdc;

struct Struct_10A2C500
{
    char Unknown00[0x7D];
    char Unknown7D;
    char Unknown7E[0x2E];
    float UnknownAC;
};

class Class_10A2C2F0
{
public:
    int FUN_10a2c2f0(void* A, void* B);
    bool FUN_10a2c530(void* A, int* B, float C);
};

// FUNCTION: 0x10A2C530 ?FUN_10a2c530@Class_10A2C2F0@@QAE_NPAXPAHM@Z
bool Class_10A2C2F0::FUN_10a2c530(void* A, int* B, float C)
{
    Struct_10A2C500* Entry = (Struct_10A2C500*)FUN_10a2c2f0(A, B);
    if (Entry && !Entry->Unknown7D)
    {
        float Value = Entry->UnknownAC * 180.0f * 0.3183098861837907;
        if (!(Value >= DAT_10eafbdc))
            Value = -Value;
        if (Value < C)
            return true;
    }
    return false;
}
