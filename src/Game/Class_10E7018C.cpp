// Game/Class_10E7018C.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e7018c[];

class cActorManager
{
public:
    cActorManager();

    void** Unknown00;
};

class Class_10E7018C : public cActorManager
{
public:
    Class_10E7018C* Construct();
};

// FUNCTION: 0x10ACE3B0 ?Construct@Class_10E7018C@@QAEPAV1@XZ
Class_10E7018C* Class_10E7018C::Construct()
{
    this->cActorManager::cActorManager();
    Unknown00 = DAT_10e7018c;
    return this;
}
