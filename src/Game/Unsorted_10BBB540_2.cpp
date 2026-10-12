// Game/Unsorted_10BBB540_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cIntArray.h"
#include "Game/Class_10BFF460.h"

class Class_10BBB410
{
public:
    void FUN_10bbb330();
    void FUN_10bbb540(int Item);
    bool FUN_10bbb730();

    char Unknown00[0x14];
    cIntArray Unknown14;
    char Unknown20[0x1F0];
    Class_10BFF460* Unknown210;
};

// FUNCTION: 0x10BBB540 ?FUN_10bbb540@Class_10BBB410@@QAEXH@Z
void Class_10BBB410::FUN_10bbb540(int Item)
{
    int Index = Unknown14.FindIndex(Item);
    if (Index != -1)
        Unknown14.RemoveAt(Index);
}
