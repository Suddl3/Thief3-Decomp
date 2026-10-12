// Game/Class_10E7EDC0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

extern void* DAT_10e7edb8[];

extern void* DAT_10e7edc0[];

class Class_10E69080
{
public:
    Class_10E69080();

    void** Unknown00;
    char Unknown04[0x114];
    void** Unknown118;
    char Unknown11C[0xB4];
};

class Class_10E7EDC0 : public Class_10E69080
{
public:
    Class_10E7EDC0* Construct();

    char Unknown1D0;
    char Unknown1D1;
};

class Class_10B3ED20
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual int Virtual4();

    void Reset();
    void ResetIfPending();

    char Unknown04[0x48];
    bool m_ResetPending;
};

// FUNCTION: 0x10B3ED20 ?ResetIfPending@Class_10B3ED20@@QAEXXZ
void Class_10B3ED20::ResetIfPending()
{
    if (m_ResetPending)
        Reset();
}

// FUNCTION: 0x10B3FD90 ?Construct@Class_10E7EDC0@@QAEPAV1@XZ
Class_10E7EDC0* Class_10E7EDC0::Construct()
{
    this->Class_10E69080::Class_10E69080();
    Unknown1D0 = 1;
    Unknown1D1 = 1;
    Unknown00 = DAT_10e7edc0;
    Unknown118 = DAT_10e7edb8;
    return this;
}
