// Game/Unsorted_10925520.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"

class Class_10924E80
{
public:
    void FUN_10925cf0(void* Item);

    char Unknown00[0xBC];
    Class_10BFBD70 UnknownBC;
};

// FUNCTION: 0x10925CF0 ?FUN_10925cf0@Class_10924E80@@QAEXPAX@Z
void Class_10924E80::FUN_10925cf0(void* Item)
{
    int Count = UnknownBC.Unknown00;
    Class_10BFBD70* Set = &UnknownBC;
    int Index = -1;
    for (int i = 0; i < Count; i++)
    {
        if (Set->Unknown08[i] == (int)Item)
        {
            Index = i;
            break;
        }
    }
    if (Index == -1)
        return;
    int Last = Set->Unknown00 - 1;
    int Moved = Set->Unknown08[Last];
    int Old = Set->Unknown08[Index];
    Set->Unknown08[Index] = Moved;
    Set->Unknown08[Last] = Old;
    Set->FUN_10bfbd70(Set->Unknown00 - 1);
}
