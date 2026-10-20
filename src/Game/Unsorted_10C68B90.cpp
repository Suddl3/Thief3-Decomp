// Game/Unsorted_10C68B90.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <string.h>

class Class_109f0d40
{
public:
    char Unknown00[0x14];
    int Unknown14;
    int FUN_109f0d40(int A, int B, const char* C, int D);
};

// FUNCTION: 0x10C68B90 ?FUN_10c68b90@@YA_NPAVClass_109f0d40@@PBD@Z
bool FUN_10c68b90(Class_109f0d40* A, const char* B)
{
    return A->FUN_109f0d40(0, A->Unknown14, B, strlen(B)) != 0;
}
