// Game/Unsorted_1095CB40.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

struct Struct_1095CC00
{
    int* Data;
    int Count;
};

// FUNCTION: 0x1095CC00 ?FUN_1095cc00@@YGHPAUStruct_1095CC00@@PAH@Z
int __stdcall FUN_1095cc00(Struct_1095CC00* A, int* B)
{
    int Result = 0;
    for (int i = 0; i < A->Count; i++)
    {
        if (A->Data[i] == B[0])
        {
            Result = 1;
            break;
        }
    }
    for (int i = 0; i < A->Count; i++)
    {
        if (A->Data[i] == B[1])
        {
            Result++;
            break;
        }
    }
    for (int i = 0; i < A->Count; i++)
    {
        if (A->Data[i] == B[2])
        {
            Result++;
            break;
        }
    }
    return Result;
}
