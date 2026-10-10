// Game/Class_10E68738_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BFBD70.h"

class Class_10E68738
{
public:
    void FUN_10a58fe0(int Index, int Value);

    char Unknown00[0x154];
    Class_10BFBD70 Unknown154;
};

// FUNCTION: 0x10A58FE0 ?FUN_10a58fe0@Class_10E68738@@QAEXHH@Z
void Class_10E68738::FUN_10a58fe0(int Index, int Value)
{
    if (Unknown154.Count < Index + 1)
        Unknown154.FUN_10bfbd70(Index + 1);
    Unknown154.Data[Index] = Value;
}
