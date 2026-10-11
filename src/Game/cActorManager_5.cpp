// Game/cActorManager_5.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4C550.h"
#include "Game/Class_10A4C550_Iterator.h"
#include "Game/cActorManager.h"
#include "Game/Struct_10A4C940_Node.h"
#include "Game/Struct_10A4C940_Owner.h"

extern int DAT_10f3a084;

class Class_10BFBD70;

class cActorManager;

extern Class_10A4C550 DAT_10f3a068;

// FUNCTION: 0x10A4C940 ?GetOwner@cActorManager@@UAEPAUStruct_10A4C940_Owner@@I@Z
Struct_10A4C940_Owner* cActorManager::GetOwner(unsigned int Key)
{
    Class_10A4C550_Iterator It = DAT_10f3a068.FUN_10a4c550(Key);
    for (Struct_10A4C940_Node* Node = It.Unknown00;
         Node != (Struct_10A4C940_Node*)DAT_10f3a084; Node = Node->Unknown00)
    {
        if (Node->Unknown08 != Key)
            break;
        Struct_10A4C940_Owner* Owner = Node->Unknown0C;
        if (Owner->Unknown08 == this)
            return Owner;
    }
    return 0;
}
