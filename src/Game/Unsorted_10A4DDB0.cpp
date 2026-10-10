// Game/Unsorted_10A4DDB0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Struct_10A4E230.h"
#include "Game/Class_10A4E230.h"

class Class_10BFBD70
{
public:
    void FUN_10bfbd70(int NewCount);

    int Unknown00;
    int Unknown04;
    int* Unknown08;
};

struct Struct_10A4E230_Entry
{
    int Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A4E230 ?FUN_10a4e230@Class_10A4E230@@QAEXHPAVClass_10BFBD70@@@Z
void Class_10A4E230::FUN_10a4e230(int Value, Class_10BFBD70* B)
{
    for (int i = 0; i < 14; i++)
    {
        int Count = Unknown720[i].Unknown00;
        for (int j = 0; j < Count; j++)
        {
            if (Unknown720[i].Unknown08[j].Unknown00 == Value)
            {
                int Index = B->Unknown00;
                B->FUN_10bfbd70(Index + 1);
                B->Unknown08[Index] = i;
            }
        }
    }
}
