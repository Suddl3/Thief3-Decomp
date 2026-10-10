// Game/Unsorted_10920970_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_1094CA70
{
public:
    void FUN_1094ca70(int A);
};

class Class_10A0C5F0
{
public:
    void FUN_10a0c5f0(int Index);

    int FindIndex(Class_1094CA70* Item)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            if (Unknown08[i] == Item)
                return i;
        }
        return -1;
    }

    int Unknown00;
    int Unknown04;
    Class_1094CA70** Unknown08;
};

struct Struct_109236B0
{
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[4];
    Struct_109236B0** Unknown14;
};

class Class_10920A90
{
public:
    void FUN_109236b0(Struct_109236B0* A, int B, int C);
    void FUN_10920fa0(Struct_109236B0* A, int B, int C);
    void FUN_10920a90(Class_1094CA70* Item);

    char Unknown00[0x3C];
    Class_10A0C5F0 Unknown3C;
};

// FUNCTION: 0x109236B0 ?FUN_109236b0@Class_10920A90@@QAEXPAUStruct_109236B0@@HH@Z
void Class_10920A90::FUN_109236b0(Struct_109236B0* A, int B, int C)
{
    FUN_10920fa0(A, B, C);
    for (int i = 0; i < A->Unknown0C; i++)
        FUN_109236b0(A->Unknown14[i], B, C);
}
