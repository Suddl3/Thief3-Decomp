// Game/Unsorted_10A4C720.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A4C550_Iterator.h"
#include "Game/Struct_10A4C940_Node.h"
#include "Game/Struct_10A4C940_Owner.h"
#include "Game/Class_10A4C550.h"

extern int DAT_10f3a084;

extern int DAT_10f3a064;

extern bool DAT_10f3a060;

class cIntArray;

class cActorManager;

extern Class_10A4C550 DAT_10f3a068;

// FUNCTION: 0x10A4C740 ?NotifyActorDestroyed@@YAXI@Z
void NotifyActorDestroyed(unsigned int Key)
{
    Class_10A4C550_Iterator It = DAT_10f3a068.FUN_10a4c550(Key);
    Struct_10A4C940_Node* Node = It.Unknown00;
    if (Node != (Struct_10A4C940_Node*)DAT_10f3a084)
    {
        unsigned int Id = Key;
        do
        {
            if (Node->Unknown08 != Id)
                return;
            Struct_10A4C940_Owner* Owner = Node->Unknown0C;
            if ((Struct_10A4C940_Owner*)DAT_10f3a064 == Owner)
            {
                DAT_10f3a060 = true;
                Node = Node->Unknown00;
            }
            else
            {
                if (Owner)
                    Owner->Virtual0(1);
                Node = (Struct_10A4C940_Node*)*DAT_10f3a068.FUN_10dd5120((int*)&It, (int)Node);
            }
        } while (Node != (Struct_10A4C940_Node*)DAT_10f3a084);
    }
}
