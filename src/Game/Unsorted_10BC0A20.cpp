// Game/Unsorted_10BC0A20.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cIntArray.h"
#include "Game/Class_10BBF5D0.h"

class Class_10BC0A20_UnknownC0
{
public:
    char Unknown00[0x24];
    cIntArray Unknown24;
};

class Class_10BC0A20
{
public:
    char Unknown00[0xc0];
    Class_10BC0A20_UnknownC0* UnknownC0;
};

// FUNCTION: 0x10BC0A20 ?LinkBothWays@@YAXPAVClass_10BC0A20@@0@Z
void LinkBothWays(Class_10BC0A20* First, Class_10BC0A20* Second)
{
    Class_10BC0A20_UnknownC0* A = First->UnknownC0;
    Class_10BC0A20_UnknownC0* B = Second->UnknownC0;
    if (A->Unknown24.FindIndex((int)Second) == -1)
    {
        cIntArray& ListA = A->Unknown24;
        int Index = ListA.Count;
        ListA.SetCount(Index + 1);
        ListA.Data[Index] = (int)Second;
    }
    if (B->Unknown24.FindIndex((int)First) == -1)
    {
        cIntArray& ListB = B->Unknown24;
        int Index = ListB.Count;
        ListB.SetCount(Index + 1);
        ListB.Data[Index] = (int)First;
    }
}
