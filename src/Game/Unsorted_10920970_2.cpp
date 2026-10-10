// Game/Unsorted_10920970_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10E4AA80
{
public:
    void FUN_1094ca70(int A);
};

class Class_10A0C5F0
{
public:
    void FUN_10a0c5f0(int Index);

    int FindIndex(Class_10E4AA80* Item)
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
    Class_10E4AA80** Unknown08;
};

struct Struct_109236B0
{
    char Unknown00[0xC];
    int Unknown0C;
    char Unknown10[4];
    int* Unknown14;
};

class Class_10920A90
{
public:
    void FUN_109236b0(Struct_109236B0* A, int B, int C);
    void FUN_10920fa0(Struct_109236B0* A, int B, int C);
    void FUN_00000000(int Child, int B, int C);
    void FUN_10920a90(Class_10E4AA80* Item);

    char Unknown00[0x3C];
    Class_10A0C5F0 Unknown3C;
};

// FUNCTION: 0x10920A90 ?FUN_10920a90@Class_10920A90@@QAEXPAVClass_10E4AA80@@@Z
void Class_10920A90::FUN_10920a90(Class_10E4AA80* Item)
{
    if (Item && Unknown3C.Unknown00)
    {
        Item->FUN_1094ca70(1);
        int Index = Unknown3C.FindIndex(Item);
        if (Index != -1)
            Unknown3C.FUN_10a0c5f0(Index);
    }
}
