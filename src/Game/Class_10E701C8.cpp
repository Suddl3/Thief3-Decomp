// Game/Class_10E701C8.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e701c8[];

class cActorManager
{
public:
    cActorManager();

    void** Unknown00;
};

class Class_10E701C8 : public cActorManager
{
public:
    Class_10E701C8* FUN_10ace480();
};

// FUNCTION: 0x10ACE480 ?FUN_10ace480@Class_10E701C8@@QAEPAV1@XZ
Class_10E701C8* Class_10E701C8::FUN_10ace480()
{
    this->cActorManager::cActorManager();
    Unknown00 = DAT_10e701c8;
    return this;
}
