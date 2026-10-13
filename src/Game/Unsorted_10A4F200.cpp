// Game/Unsorted_10A4F200.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cString.h"
#include "Game/Class_10A4F2A0.h"
#include "Game/Class_10A4FB00_Result.h"
#include "Game/Struct_10F3A0B4.h"

int appStricmp(const char* A, const char* B);

extern const char DAT_10e47660[];

extern cString DAT_10f3a0b4;

Class_10A4FB00_Result* FUN_10a4df70(cString& A);

void FUN_10a4f840(cString& A);

// FUNCTION: 0x10A4FB00 ?FUN_10a4fb00@@YA_NAAVcString@@H@Z
bool FUN_10a4fb00(cString& A, int B)
{
    if (DAT_10f3a0b4.Unknown00 && ((Struct_10F3A0B4*)DAT_10f3a0b4.Unknown00)[-1].Unknown00)
    {
        const char* Name = A.Unknown00 ? A.Unknown00 : DAT_10e47660;
        if (appStricmp(DAT_10f3a0b4.Unknown00, Name) == 0)
            return false;
    }
    if (!FUN_10a4df70(A))
        FUN_10a4f840(A);
    FUN_10a4df70(A)->Unknown1C.FUN_10a4f2a0(B);
    return true;
}
