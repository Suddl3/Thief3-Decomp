// Game/Unsorted_10A48720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10A48A50_Member
{
public:
    int Unknown00;
    int Unknown04;
};

struct Struct_10A48A50
{
    int Unknown00;
    char Unknown04[4];
    Class_10A48A50_Member** Unknown08;
};

class Class_10A48AB0_Member
{
public:
    char Unknown00[0x54];
    int Unknown54;
};

struct Struct_10A48AB0
{
    int Unknown00;
    char Unknown04[4];
    Class_10A48AB0_Member** Unknown08;
};

// FUNCTION: 0x10A48A50 ?FUN_10a48a50@@YAXPAUStruct_10A48A50@@PAVClass_10BFBD70@@@Z
void FUN_10a48a50(Struct_10A48A50* A, Class_10BFBD70* B)
{
    B->Unknown00 = 0;
    for (int i = 0; i < A->Unknown00; i++)
    {
        int Value = A->Unknown08[i]->Unknown04;
        if (Value)
        {
            int Index = B->Unknown00;
            B->FUN_10bfbd70(Index + 1);
            B->Unknown08[Index] = Value;
        }
    }
}

// FUNCTION: 0x10A48AB0 ?FUN_10a48ab0@@YAXPAUStruct_10A48AB0@@PAVClass_10BFBD70@@@Z
void FUN_10a48ab0(Struct_10A48AB0* A, Class_10BFBD70* B)
{
    B->Unknown00 = 0;
    for (int i = 0; i < A->Unknown00; i++)
    {
        int Value = A->Unknown08[i]->Unknown54;
        if (Value)
        {
            int Index = B->Unknown00;
            B->FUN_10bfbd70(Index + 1);
            B->Unknown08[Index] = Value;
        }
    }
}
