// Game/Class_10E6D260.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E6D260.h"
#include "Game/Class_10A7F5A0.h"
#include "Game/Class_10A9DBE0_Param2.h"
#include "Game/Class_10A9DBE0_Param3.h"
#include "Game/cIntArray.h"

void* FUN_10a030c0();

int FUN_10977fa0(int A);

// FUNCTION: 0x10A9DBE0 ?FUN_10a9dbe0@Class_10E6D260@@UAEHHPAVClass_10A9DBE0_Param2@@PAVClass_10A9DBE0_Param3@@@Z
int Class_10E6D260::FUN_10a9dbe0(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C)
{
    if (B && B->Virtual8() && C && C->Virtual3() >= 2 && FUN_10a030c0())
    {
        cIntArray Found = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
        float Value = C->Virtual8(1);
        for (int i = 0; i < Found.Unknown00; i++)
            FUN_10a9d5b0(FUN_10977fa0(Found.Unknown08[i]), Value);
        return 1;
    }
    return 0;
}
