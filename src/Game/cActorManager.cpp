// Game/cActorManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/cUObjectLinkManager.h"
#include "Engine/EngineClasses.h"
#include "Game/Class_10E5BC00.h"
#include "Game/Class_1090A780.h"
#include "Game/Class_1098E330.h"
#include "Game/Class_10A50750.h"
#include "Game/Class_10A52110.h"
#include "Game/Class_10A52460.h"
#include "Game/Class_10A53BD0.h"
#include "Game/Class_10A54CC0.h"
#include "Game/Class_10A55080.h"
#include "Game/Class_10E6798C.h"
#include "Game/Class_10E679BC.h"
#include "Game/Class_10E67DF0.h"
#include "Game/Class_10E67FB8.h"
#include "Game/Class_10E7BB2C.h"
#include "Game/InnerClass_10A4EB40.h"
#include "Game/InnerClass_10A4EB50.h"
#include "Game/cString.h"
#include "Game/Class_10A4EB40.h"
#include "Game/Class_10A4EB50.h"
#include "Game/Class_10A4C550.h"
#include "Game/Class_10A4C550_Iterator.h"
#include "Game/Struct_10A4C940_Node.h"
#include "Game/Struct_10A4C940_Owner.h"

class ULinkDataObject;

cUObjectLinkManager* GetUObjectLinkManager();

extern int DAT_10f3a064;

extern bool DAT_10f3a060;

struct Struct_10A4C470_Inner
{
    char Unknown00[0xE8];
    int UnknownE8;
};

struct Struct_10A4C470_Object
{
    char Unknown00[0x24];
    Struct_10A4C470_Inner* Unknown24;
};

extern int DAT_10f3a084;

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

extern Class_10A4C550 DAT_10f3a068;

// FUNCTION: 0x10A4C050 ?Virtual3@cActorManager@@UAEXHH@Z
void cActorManager::Virtual3(int A, int B)
{
    Virtual4(0x2f186b8, A);
    GetUObjectLinkManager()->Virtual1(A, B, UUserLinkDataObject::StaticClass(), 0x2f186b8);
}

// FUNCTION: 0x10A4C1E0 ??0cActorManager@@QAE@XZ
cActorManager::cActorManager()
{
    DAT_10f3a064 = 0;
    DAT_10f3a060 = false;
    AddRef();
}

// FUNCTION: 0x10A4C470 ?FUN_10a4c470@cActorManager@@UAEXHHHH@Z
void cActorManager::FUN_10a4c470(int Type, int A, int B, int C)
{
    if (A != ((Struct_10A4C470_Object*)A)->Unknown24->UnknownE8)
    {
        switch (Type)
        {
        case 1:
            Virtual8(A, B, C);
            break;
        }
    }
}

// FUNCTION: 0x10A4C4D0 ?FUN_10a4c4d0@cActorManager@@UAE_NH@Z
bool cActorManager::FUN_10a4c4d0(int A)
{
    Virtual14(&A, A);
    return A != DAT_10f3a084;
}

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
