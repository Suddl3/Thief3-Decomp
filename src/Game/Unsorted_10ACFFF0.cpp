// Game/Unsorted_10ACFFF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10ACFDE0.h"

class Class_1098E330;

struct List_10ACFFF0
{
    int Unknown00;
    char Unknown04[4];
    Class_1098E330** Unknown08;
};

// FUNCTION: 0x10ACFFF0 ?FUN_10acfff0@Class_10ACFDE0@@QAE_NHPAUList_10ACFFF0@@@Z
bool Class_10ACFDE0::FUN_10acfff0(int A, List_10ACFFF0* B)
{
    for (int i = 0; i < B->Unknown00; i++)
    {
        if (FUN_10acfde0(A, B->Unknown08[i]))
            return true;
    }
    return false;
}
