// Game/cRigidAttachmentManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cRigidAttachmentManager.h"
#include "Game/Class_10E6BD68_Unknown0C.h"
#include "Game/Class_10E6BD68_Unknown18.h"
#include "Game/cUObjectLinkManager.h"
#include "Core/Core.h"
#include "Game/Class_10AF7F80.h"
#include "Engine/EngineClasses.h"

cUObjectLinkManager* GetUObjectLinkManager();

int FUN_10977fa0(int Unknown);

// FUNCTION: 0x10A7A370 ?FUN_10a7a370@cRigidAttachmentManager@@UAE_NH@Z
bool cRigidAttachmentManager::FUN_10a7a370(int p1)
{
    return Virtual7(p1) != 0;
}

// FUNCTION: 0x10A7A390 ?Attach@cRigidAttachmentManager@@UAEXHH@Z
void cRigidAttachmentManager::Attach(int A, int B)
{
    GetUObjectLinkManager()->Virtual5(A, 0, 0x281b9d0, B, 3);
}

// FUNCTION: 0x10A7A920 ?FUN_10a7a920@cRigidAttachmentManager@@UAEXPAVUObject@@HH@Z
void cRigidAttachmentManager::FUN_10a7a920(UObject* Obj, int Unknown04, int Unknown08)
{
    if (Obj && Obj->Class->ClassDefaultObject != Obj && Obj->IsA(AActor::StaticClass()))
    {
        int Result = FUN_10977fa0((int)Obj);
        Virtual17(Result, 0);
    }
}
