// Game/Unsorted_10A9DE00.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10A9DBE0_Param2.h"
#include "Game/Class_10A9DBE0_Param3.h"
#include "Game/Class_10E6D248.h"

// A growable array of pointers: a count, the capacity in bytes and the items.
class cIntArray
{
public:
    ~cIntArray();

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

class Class_10A7F5A0
{
public:
    cIntArray FUN_10a7f5a0(int A, int B);
};

void* FUN_10a030c0();

int FUN_10977fa0(int A);

// FUNCTION: 0x10A9E170 ?FUN_10a9e170@Class_10E6D248@@UAEHHPAVClass_10A9DBE0_Param2@@PAVClass_10A9DBE0_Param3@@@Z
int Class_10E6D248::FUN_10a9e170(int A, Class_10A9DBE0_Param2* B, Class_10A9DBE0_Param3* C)
{
    if (B && B->Virtual8() && C && C->Virtual3() >= 6 && FUN_10a030c0())
    {
        cIntArray Found = C->Virtual4(0)->FUN_10a7f5a0(B->Virtual8(), 0);
        float V1 = C->Virtual8(1);
        float V2 = C->Virtual8(2);
        float V3 = C->Virtual8(3);
        float V4 = C->Virtual8(4);
        int X = C->Virtual7(5);
        for (int i = 0; i < Found.Unknown00; i++)
            this->FUN_10a9d890(FUN_10977fa0(Found.Unknown08[i]), V1, V2, V3, V4, X);
        return 1;
    }
    return 0;
}
