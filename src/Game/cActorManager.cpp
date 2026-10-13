// Game/cActorManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/cUObjectLinkManager.h"
#include "Engine/EngineClasses.h"

class ULinkDataObject;

cUObjectLinkManager* GetUObjectLinkManager();

// FUNCTION: 0x10A4C050 ?Virtual3@cActorManager@@UAEXHH@Z
void cActorManager::Virtual3(int A, int B)
{
    Virtual4(0x2f186b8, A);
    GetUObjectLinkManager()->Virtual1(A, B, UUserLinkDataObject::StaticClass(), 0x2f186b8);
}
