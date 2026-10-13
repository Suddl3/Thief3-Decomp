// Game/Class_10E701C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10E701C8.h"
#include "Game/Class_10ACEE50.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E70204.h"

extern void* DAT_10e701c8[];

// FUNCTION: 0x10ACE480 ?FUN_10ace480@Class_10E701C8@@QAEPAV1@XZ
Class_10E701C8* Class_10E701C8::FUN_10ace480()
{
    this->cActorManager::cActorManager();
    *(void***)this = DAT_10e701c8; // the vtable pointer at offset 0
    return this;
}

// FUNCTION: 0x10ACE5B0 ?HandleEvent@Class_10E701C8@@UAEXHHHH@Z
void Class_10E701C8::HandleEvent(int Code, int A, int B, int C)
{
    if (Code == 0x10)
        FUN_10ace4d0(A, B, C);
}
