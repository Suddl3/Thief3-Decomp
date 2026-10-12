// Game/Class_10E6C194.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e6c194[];

class cConEvent
{
public:
    cConEvent();

    void** Unknown00;
};

class Class_10E6C194 : public cConEvent
{
public:
    Class_10E6C194* Construct();
};

// FUNCTION: 0x10A811B0 ?Construct@Class_10E6C194@@QAEPAV1@XZ
Class_10E6C194* Class_10E6C194::Construct()
{
    this->cConEvent::cConEvent();
    Unknown00 = DAT_10e6c194;
    return this;
}
