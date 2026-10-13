// Game/Unsorted_10BC8BA0.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10BCE8F0.h"
#include "Game/Class_Field04.h"
#include "Game/cSampleStats.h"

void FUN_10bdf580();

void FUN_10bcb850();

void FUN_10bc5a60();

extern void* DAT_10e92730[];

class Class_10E95288
{
public:
    Class_10E95288(int A, int B);

    void** Unknown00;
};

class Class_10E92730 : public Class_10E95288
{
public:
    Class_10E92730* Construct(int A, int B);
};

void FUN_10bb83e0();

class State_PlayAction
{
public:
    void FUN_10bd0260();

    char Unknown00[0x4];
    Class_Field04* Unknown04;
};

void FUN_10bc4200();

void FUN_10bd1900();

void FUN_10bc6a80();

extern void* DAT_10e939e0[];

class State_Search
{
public:
    State_Search(int A, int B);

    void** Unknown00;
};

class Class_10E939E0 : public State_Search
{
public:
    Class_10E939E0* Initialize(int A, int B);
};

void FUN_10bd4310();

void FUN_10bd5bd0();

void FUN_10bd8300();

void FUN_10bd8300(void);

// FUNCTION: 0x10BCB810 ?FUN_10bcb810@@YAHXZ
int FUN_10bcb810()
{
    return 0x100476;
}

// FUNCTION: 0x10BCBA80 ?GetGassedEnableId@@YAHXZ
int GetGassedEnableId()
{
    return 0x100430;
}

// FUNCTION: 0x10BCBB20 ?FUN_10bcbb20@@YAHXZ
int FUN_10bcbb20()
{
    return 0x100446;
}

// FUNCTION: 0x10BCBD00 ?GetBlindedEnableId@@YAHXZ
int GetBlindedEnableId()
{
    return 0x1005ce;
}

// FUNCTION: 0x10BCBF50 ?FUN_10bcbf50@@YAHXZ
int FUN_10bcbf50()
{
    return 0x29;
}

// FUNCTION: 0x10BCBF60 ?FUN_10bcbf60@@YAXXZ
void FUN_10bcbf60()
{
    FUN_10bdf580();
}

// FUNCTION: 0x10BCC070 ?FUN_10bcc070@@YAHXZ
int FUN_10bcc070()
{
    return 0x2d;
}

// FUNCTION: 0x10BCC100 ?FUN_10bcc100@@YAXXZ
void FUN_10bcc100()
{
    FUN_10bcb850();
}

// FUNCTION: 0x10BCC110 ?FUN_10bcc110@@YAHXZ
int FUN_10bcc110()
{
    return 0x30;
}

// FUNCTION: 0x10BCC1D0 ?GetChokingEnableId@@YAHXZ
int GetChokingEnableId()
{
    return 0x10082f;
}

// FUNCTION: 0x10BCC280 ?FUN_10bcc280@@YAXXZ
void FUN_10bcc280()
{
    FUN_10bc5a60();
}

// FUNCTION: 0x10BCCB00 ?Construct@Class_10E92730@@QAEPAV1@HH@Z
Class_10E92730* Class_10E92730::Construct(int A, int B)
{
    this->Class_10E95288::Class_10E95288(A, B);
    Unknown00 = DAT_10e92730;
    return this;
}

// FUNCTION: 0x10BCE8F0 ?FUN_10bce8f0@Class_10BCE8F0@@QAEEH@Z
unsigned char Class_10BCE8F0::FUN_10bce8f0(int p1)
{
    return 1;
}

// FUNCTION: 0x10BCE960 ?FUN_10bce960@@YAHXZ
int FUN_10bce960()
{
    return 0x2c;
}

// FUNCTION: 0x10BD0260 ?FUN_10bd0260@State_PlayAction@@QAEXXZ
void State_PlayAction::FUN_10bd0260()
{
    Unknown04->FUN_10bb83e0();
}

// FUNCTION: 0x10BD1810 ?FUN_10bd1810@@YAHXZ
int FUN_10bd1810()
{
    return 0x100657;
}

// FUNCTION: 0x10BD1A50 ?FUN_10bd1a50@@YAXXZ
void FUN_10bd1a50()
{
    FUN_10bc4200();
}

// FUNCTION: 0x10BD1D30 ?FUN_10bd1d30@@YAXXZ
void FUN_10bd1d30()
{
    FUN_10bd1900();
}

// FUNCTION: 0x10BD3140 ?FUN_10bd3140@@YAXXZ
void FUN_10bd3140()
{
    FUN_10bc6a80();
}

// FUNCTION: 0x10BD51E0 ?Initialize@Class_10E939E0@@QAEPAV1@HH@Z
Class_10E939E0* Class_10E939E0::Initialize(int A, int B)
{
    this->State_Search::State_Search(A, B);
    Unknown00 = DAT_10e939e0;
    return this;
}

// FUNCTION: 0x10BD78B0 ?FUN_10bd78b0@@YAXXZ
void FUN_10bd78b0()
{
    FUN_10bd4310();
}

// FUNCTION: 0x10BD78C0 ?FUN_10bd78c0@@YAXXZ
void FUN_10bd78c0()
{
    FUN_10bd5bd0();
}

// FUNCTION: 0x10BD7EA0 ?FUN_10bd7ea0@cSampleStats@@QAEXXZ
void cSampleStats::FUN_10bd7ea0()
{
    M70();
}

// FUNCTION: 0x10BD8450 ?FUN_10bd8450@@YAXXZ
void FUN_10bd8450()
{
    FUN_10bd8300();
}

// FUNCTION: 0x10BD8460 ?FUN_10bd8460@cSampleStats@@QAEXXZ
void cSampleStats::FUN_10bd8460()
{
    Unknown78++;
    FUN_10bd8300();
}

// FUNCTION: 0x10BD85A0 ?FUN_10bd85a0@@YAHXZ
int FUN_10bd85a0(void)
{
    return 0x33;
}
