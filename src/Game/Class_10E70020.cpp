// Game/Class_10E70020.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e70020[];

class cActorManager
{
public:
    cActorManager();

    void** Unknown00;
};

class Class_10E70020 : public cActorManager
{
public:
    Class_10E70020* FUN_10acc050();
};

// FUNCTION: 0x10ACC050 ?FUN_10acc050@Class_10E70020@@QAEPAV1@XZ
Class_10E70020* Class_10E70020::FUN_10acc050()
{
    this->cActorManager::cActorManager();
    Unknown00 = DAT_10e70020;
    return this;
}
