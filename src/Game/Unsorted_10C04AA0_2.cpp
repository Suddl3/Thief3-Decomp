// Game/Unsorted_10C04AA0_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);

    char Unknown04[0x08];
    int ArVer;
};

FArchive& FUN_10b052a0(FArchive& Ar, void* Value);

struct Struct_10C04AA0
{
    float Unknown00;
    float Unknown04;
    float Unknown08;
};

class Class_10C04AA0
{
public:
    void FUN_10c04aa0(FArchive& Ar);

    char Unknown00[0x04];
    int Unknown04;
    char Unknown08[0x04];
    char Unknown0C;
    char Unknown0D[0x03];
    Struct_10C04AA0* Unknown10;
    int Unknown14;
    char Unknown18[0x04];
    Struct_10C04AA0* Unknown1C;
};

// FUNCTION: 0x10C04AA0 ?FUN_10c04aa0@Class_10C04AA0@@QAEXAAVFArchive@@@Z
void Class_10C04AA0::FUN_10c04aa0(FArchive& Ar)
{
    int Count = Unknown14;
    Ar.Virtual1(&Count, 4);
    for (int i = 0; i < Count; i++)
    {
        Struct_10C04AA0 Item = Unknown1C[i];
        FUN_10b052a0(Ar, &Item);
    }
    Struct_10C04AA0 Value;
    Value.Unknown00 = 0;
    Value.Unknown04 = 0;
    Value.Unknown08 = 1.0f;
    if (Unknown10)
        Value = *Unknown10;
    FUN_10b052a0(Ar, &Value);
    if (Ar.ArVer >= 2)
        Ar.Virtual1(&Unknown04, 4);
    Ar.Virtual1(&Unknown0C, 1);
}
