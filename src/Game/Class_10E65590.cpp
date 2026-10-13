// Game/Class_10E65590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10AD26E0.h"
#include "Game/Class_10E65590.h"
#include "Game/cIntArray.h"

class Class_10AE7460;

struct Struct_10A1FA00
{
    int* Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A1FA00 ?FUN_10a1fa00@Class_10E65590@@UAEXHPAVClass_10AD26E0@@HPAUStruct_10A1FA00@@@Z
void Class_10E65590::FUN_10a1fa00(int A, Class_10AD26E0* B, int C, Struct_10A1FA00* D)
{
    if (D->Unknown04 != 0)
    {
        if (B->FUN_10ad26e0())
            FUN_10a1f950(B->Unknown24);
    }
    else
    {
        if (B->FUN_10ad26e0())
        {
            int* Key = D->Unknown00;
            if (Key)
            {
                int Index = *Key;
                if (Unknown04.m_Count > Index && Index >= 0 && Unknown04.m_Data[Index] == (int)B->Unknown24)
                    Unknown04.m_Data[Index] = 0;
            }
        }
    }
}
