// Game/Class_10E96810_9.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Game/Class_10BBDB40.h"
#include "Game/Class_10DBD510.h"
#include "Game/Class_10BA9F70.h"

extern void* DAT_10e96810[];

class Class_10BC4160
{
public:
    virtual void Virtual0();
};

class Class_10E95F40 : public Class_10BC4160
{
public:
    Class_10E95F40(int A, int B);
    ~Class_10E95F40();
};

class Class_10BBB410
{
public:
    char Unknown00[8];
    Class_10BA9F70* m_Owner;
};

class Class_10E96810 : public Class_10E95F40
{
public:
    Class_10E96810(int A, int B);

    Class_10BBB410* Unknown04;
    char Unknown08[0x60];
    float Unknown68;
    unsigned char Unknown6C;
};

// FUNCTION: 0x10BE6920 ??0Class_10E96810@@QAE@HH@Z
Class_10E96810::Class_10E96810(int A, int B)
    : Class_10E95F40(A, B)
{
    *(void**)this = DAT_10e96810;
    Unknown6C = 0;
    Unknown04->m_Owner->FUN_10ba9f70(1);
    Unknown68 = Unknown04->m_Owner->FUN_10dbd510()->GetFloat(0x40100717);
}
