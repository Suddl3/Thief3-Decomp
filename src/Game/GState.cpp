// Game/GState.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e81548[];

class Class_10E7E4E0
{
public:
    Class_10E7E4E0* FUN_10b3acb0();

    void* vtable;
};

class GState : public Class_10E7E4E0
{
public:
    char Unknown04[0x10];
    int Unknown14;

    GState* FUN_10b4bb40();
};

// FUNCTION: 0x10B4BB40 ?FUN_10b4bb40@GState@@QAEPAV1@XZ
GState* GState::FUN_10b4bb40()
{
    FUN_10b3acb0();
    vtable = DAT_10e81548;
    Unknown14 = 0;
    return this;
}
