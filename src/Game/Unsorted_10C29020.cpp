// Game/Unsorted_10C29020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"
#include "Game/Class_10C29410.h"

// FUNCTION: 0x10C29410 ?FUN_10c29410@Class_10C29410@@QAEXH@Z
void Class_10C29410::FUN_10c29410(int Value)
{
    Class_10BFBD70* Member = &Unknown04;
    int Count = Member->Unknown00;
    Member->FUN_10bfbd70(Count + 1);
    ((int*)Member->Unknown08)[Count] = Value;
    for (int i = 0; i < Member->Unknown00; i++)
    {
        if (((int*)Member->Unknown08)[i] == Value)
        {
            if (i == 0)
                FUN_10c29380(Value);
            return;
        }
    }
}
