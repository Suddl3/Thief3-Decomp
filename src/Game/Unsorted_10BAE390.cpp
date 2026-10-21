// Game/Unsorted_10BAE390.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"
#include <stdio.h>

// The name of the recording the block data goes to.
extern const char DAT_10e8d7d4[];

// The five numbers the file name is built from.
cString __cdecl IntToString(int A);

// The block data the manager hands over.
void __cdecl FUN_10aeb0b0(int* A, int* B, int* C, int* D, int* E, int* F, int* G, int* H);

// FUNCTION: 0x10BAE390 ?FUN_10bae390@@YA?AVcString@@XZ
cString FUN_10bae390()
{
    int Unused = 0;
    int A8 = 0;
    int A7 = 0;
    int A6 = 0;
    int A5 = 0;
    int A4 = 0;
    int A3 = 0;
    int A2 = 0;
    int A1 = 0;
    char Buffer[200];

    FUN_10aeb0b0(&A1, &A2, &A3, &A4, &A5, &A6, &A7, &A8);

    sprintf(Buffer, DAT_10e8d7d4, IntToString(A1).Unknown00, IntToString(A2).Unknown00,
            IntToString(A4).Unknown00, IntToString(A5).Unknown00, IntToString(A6).Unknown00);

    return cString(Buffer);
}
