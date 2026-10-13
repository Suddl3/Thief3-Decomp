// Game/Unsorted_10A4FB70.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cString.h"

int appStricmp(const char* A, const char* B);

extern cString DAT_10f3a0b4;

struct Struct_10F3A0B4
{
    int Unknown00;
};

class Class_10A4FB00_Result;

Class_10A4FB00_Result* FUN_10a4df70(cString& A);

void FUN_10a4f840(cString& A);

void FUN_10a4fb00(cString& A, int B);

class Class_10A4DFD0
{
public:
    void FUN_10a4e130();
};

Class_10A4DFD0* FUN_10a4f900();

// FUNCTION: 0x10A4FB70 ?FUN_10a4fb70@@YAXAAVcString@@@Z
void FUN_10a4fb70(cString& A)
{
    if (A.Unknown00 && ((Struct_10F3A0B4*)A.Unknown00)[-1].Unknown00)
    {
        if (FUN_10a4df70(A) == 0)
        {
            FUN_10a4f840(A);
            FUN_10a4fb00(A, 0);
        }
        if (DAT_10f3a0b4.Unknown00 && ((Struct_10F3A0B4*)DAT_10f3a0b4.Unknown00)[-1].Unknown00 > 0)
        {
            FUN_10a4f900()->FUN_10a4e130();
        }
        if (appStricmp(*DAT_10f3a0b4, *A) != 0)
            DAT_10f3a0b4 = A;
    }
}
