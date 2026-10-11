// Game/Unsorted_10B8CFF0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B8CFF0.h"
#include "Game/Class_10D3E450.h"
#include "Game/Class_10B8D4C0.h"
#include "Game/Class_10BFBD70.h"

class Class_10D9FEE0
{
public:
    void FUN_10d9fee0(int A, int B);

    char Unknown00[8];
    int Unknown08;
};

// FUNCTION: 0x10B8CFF0 ?FUN_10b8cff0@Class_10B8CFF0@@QAEXXZ
void Class_10B8CFF0::FUN_10b8cff0()
{
    if (Unknown19)
    {
        for (int i = 0; i < Unknown00; i++)
        {
            Class_10D9FEE0* Item = Unknown08[i];
            if (Item && Item->Unknown08 == 3)
                Item->FUN_10d9fee0(0, 1);
        }
    }
}

// FUNCTION: 0x10B8D4C0 ??0Class_10B8D4C0@@QAE@XZ
Class_10B8D4C0::Class_10B8D4C0() : Unknown19(false), Unknown20(0), Unknown24(false)
{
}
