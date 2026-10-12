// Game/Class_10E6C170.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e6c170[];

class cConEvent
{
public:
    cConEvent();

    void** Unknown00;
};

class Class_10E6C170 : public cConEvent
{
public:
    Class_10E6C170* Construct();

    char Unknown04[4];
    int Unknown08;
};

// FUNCTION: 0x10A81190 ?Construct@Class_10E6C170@@QAEPAV1@XZ
Class_10E6C170* Class_10E6C170::Construct()
{
    this->cConEvent::cConEvent();
    Unknown00 = DAT_10e6c170;
    Unknown08 = 0;
    return this;
}
