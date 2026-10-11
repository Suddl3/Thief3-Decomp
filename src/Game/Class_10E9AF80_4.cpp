// Game/Class_10E9AF80_4.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

double GetTimeSeconds();

class Class_10E9AF80
{
public:
    virtual void Virtual0();
    virtual int FUN_10c3cf40();

    char Unknown04[0x10];
    float Unknown14;
    float Unknown18;
};

// FUNCTION: 0x10C3CF40 ?FUN_10c3cf40@Class_10E9AF80@@UAEHXZ
int Class_10E9AF80::FUN_10c3cf40()
{
    if (GetTimeSeconds() > Unknown18 + Unknown14)
        return 1;
    return 0;
}
