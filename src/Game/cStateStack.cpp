// Game/cStateStack.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10B9E410_Item.h"
#include "Game/cStateStack.h"

class State_Patrol : public Class_10B9E410_Item
{
public:
    void FUN_10bef060();
};

// FUNCTION: 0x10B9CF20 ?FUN_10b9cf20@cStateStack@@QAEXXZ
void cStateStack::FUN_10b9cf20()
{
    if (Top() && Top()->Virtual3() == 0xB)
        static_cast<State_Patrol*>(Top())->FUN_10bef060();
}
