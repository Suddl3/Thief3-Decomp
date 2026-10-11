// Game/Unsorted_10C002B0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern const char DAT_10e4af3c[];

void FUN_10af4210(int A, const char* B, int* C);

void FUN_10af37a0(int A, const char* B, ...);

int FUN_10af42f0(int* A, char* B);

void FUN_10af41d0(int A, int B, float* C);

// FUNCTION: 0x10C002B0 ?FUN_10c002b0@@YAXPAHPBD0@Z
void FUN_10c002b0(int* Index, const char* Name, int* Value)
{
    char Buffer[200];
    FUN_10af4210(*Index, Name, Value);
    FUN_10af37a0((int)Buffer, DAT_10e4af3c, Name, *Value);
    while (FUN_10af42f0(Index, Buffer) == 0)
        (*Index)++;
}

// FUNCTION: 0x10C00330 ?FUN_10c00330@@YAXPAHHPAM@Z
void FUN_10c00330(int* A, int B, float* C)
{
    char Buffer[200];
    FUN_10af41d0(*A, B, C);
    FUN_10af37a0((int)Buffer, "%s%0.4f", B, (double)*C);
    int Result = FUN_10af42f0(A, Buffer);
    while (Result == 0)
    {
        ++*A;
        Result = FUN_10af42f0(A, Buffer);
    }
}
