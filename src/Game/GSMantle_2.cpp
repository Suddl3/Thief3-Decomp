// Game/GSMantle_2.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10E7E4E0.h"
#include "Game/Struct_10B53A00.h"
#include "Game/Class_10B3B220_Item.h"
#include "Game/Class_10B3B220_Unknown0B0.h"
#include "Game/GSMantle.h"

class AGarrett;

class Class_10DD7640
{
public:
    virtual void Virtual0();
    virtual bool Virtual1(int A);
    virtual void Virtual2(int A);
    virtual bool Virtual3(int A);
};

Class_10DD7640* FUN_10dd7640();

unsigned char FUN_10cd3a40(Struct_10B53A00* P);

// FUNCTION: 0x10B3BC50 ?TryGrab@GSMantle@@QAE_NPAUStruct_10B53A00@@@Z
bool GSMantle::TryGrab(Struct_10B53A00* P)
{
    if (FUN_10dd7640()->Virtual1(1))
    {
        if (!(P->Unknown450 & 2))
        {
            FUN_10dd7640()->Virtual2(1);
            Class_10B3B220_Item* Item = P->Unknown0B0->Virtual6();
            Item->Virtual19(1);
            if (Item->Unknown104)
                P->Unknown450 |= 2;
            if (P->Unknown450 & 2)
                return true;
        }
        else if (FUN_10cd3a40(P))
        {
            FUN_10dd7640()->Virtual2(1);
            ReleaseItem(P);
            if (!(P->Unknown450 & 2))
                return true;
            P->Unknown450 &= ~2;
            FUN_10b3b220(P);
        }
    }
    return false;
}
