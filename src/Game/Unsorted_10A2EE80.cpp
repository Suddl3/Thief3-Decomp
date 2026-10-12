// Game/Unsorted_10A2EE80.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10A2EF90.h"
#include "Game/Class_10A2F180.h"
#include "Game/Class_10E66300.h"
#include "Game/Class_10E66368.h"

extern void* DAT_10e6bb18[];

class Class_10E6BB18 {
public:
    Class_10E6BB18* Construct();

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

extern void* DAT_10e66310[];

class Class_10E66310 {
public:
    Class_10E66310* Construct();

    void* Unknown00;
    int Unknown04;
    int Unknown08;
};

extern void* DAT_10e6b93c[];

class Class_10E6B93C {
public:
    Class_10E6B93C* Construct(int p1);

    void* Unknown00;
    int Unknown04;
};

// FUNCTION: 0x10A2EF90 ?Construct@Class_10A2EF90@@QAEPAV1@XZ
Class_10A2EF90* Class_10A2EF90::Construct()
{
    Unknown00 = 0;
    Unknown04 = 0;
    return this;
}

// FUNCTION: 0x10A2F0F0 ?FUN_10a2f0f0@Class_10E66368@@UAE_NH@Z
bool Class_10E66368::FUN_10a2f0f0(int p1)
{
    return Unknown38 == p1;
}

// FUNCTION: 0x10A2F110 ?IsEqual@Class_10E66300@@UAEHPAV1@@Z
int Class_10E66300::IsEqual(Class_10E66300* Other)
{
    if (Other->Unknown04 == Unknown04 && Other->Unknown08 == Unknown08)
        return 1;
    return 0;
}

// FUNCTION: 0x10A2F180 ?Construct@Class_10A2F180@@QAEPAV1@XZ
Class_10A2F180* Class_10A2F180::Construct()
{
    Unknown00 = 0;
    Unknown04 = 0;
    Unknown10 = -1;
    Unknown14 = 0;
    return this;
}

// FUNCTION: 0x10A2F3C0 ?Construct@Class_10E6BB18@@QAEPAV1@XZ
Class_10E6BB18* Class_10E6BB18::Construct()
{
    Unknown04 = 0;
    Unknown00 = DAT_10e6bb18;
    Unknown08 = 0;
    return this;
}

// FUNCTION: 0x10A2F440 ?Construct@Class_10E66310@@QAEPAV1@XZ
Class_10E66310* Class_10E66310::Construct()
{
    Unknown04 = 0;
    Unknown00 = DAT_10e66310;
    Unknown08 = 1;
    return this;
}

// FUNCTION: 0x10A2FA50 ?Construct@Class_10E6B93C@@QAEPAV1@H@Z
Class_10E6B93C* Class_10E6B93C::Construct(int p1)
{
    Unknown00 = DAT_10e6b93c;
    Unknown04 = p1;
    return this;
}
