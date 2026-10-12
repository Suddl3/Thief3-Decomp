// Game/cActorManager_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/cActorManager.h"

class cActorManager;

class cIntArray
{
public:
    void SetCount(int NewCount);

    int Count;
    int m_CapacityBytes;
    struct Struct_10A4C500_Entry** Data;
};

struct Struct_10A4C500_Owner
{
    char Unknown00[8];
    cActorManager* Unknown08;
};

struct Struct_10A4C500_Entry
{
    int Unknown00;
    Struct_10A4C500_Owner* Unknown04;
};

struct Struct_10A4C500_Node
{
    Struct_10A4C500_Node* Next;
    Struct_10A4C500_Node* Prev;
    Struct_10A4C500_Entry Value;
};

extern int DAT_10f3a084;

// FUNCTION: 0x10A4C500 ?FUN_10a4c500@cActorManager@@UAEXPAVcIntArray@@@Z
void cActorManager::FUN_10a4c500(cIntArray* Array)
{
    for (Struct_10A4C500_Node* It = ((Struct_10A4C500_Node*)DAT_10f3a084)->Next;
         It != (Struct_10A4C500_Node*)DAT_10f3a084; It = It->Next)
    {
        if (It->Value.Unknown04->Unknown08 == this)
        {
            int Index = Array->Count;
            Array->SetCount(Index + 1);
            Array->Data[Index] = &It->Value;
        }
    }
}
