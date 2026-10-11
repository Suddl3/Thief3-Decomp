// Game/Unsorted_10B9CDE0_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410_Item.h"
#include "Game/Class_10B9E410.h"

class State_Patrol : public Class_10B9E410_Item
{
public:
    void FUN_10bef060();
};

// FUNCTION: 0x10B9CF20 ?FUN_10b9cf20@Class_10B9E410@@QAEXXZ
void Class_10B9E410::FUN_10b9cf20()
{
    if (Top() && Top()->Virtual3() == 0xB)
        static_cast<State_Patrol*>(Top())->FUN_10bef060();
}
