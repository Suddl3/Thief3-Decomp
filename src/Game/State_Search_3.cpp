// Game/State_Search_3.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10943600.h"
#include "Game/cIntArray.h"

class Class_10C7D570
{
public:
    void* FUN_10c7d570();
};

class Class_10BB8300
{
public:
    void ClearEntry();

    char Unknown00[8];
    Class_10C7D570* m_Owner;
    char Unknown0C[0x278];
    int m_Entry;
};

// Game/Class_Field04.h copied whole, with the members the state uses.
class Class_Field04 : public Class_10BB8300
{
public:
    void FUN_10bb83e0();
};

class Class_10BB86B0
{
public:
    void FUN_10bb86b0(float A);

    int Unknown00;
    int Unknown04;
    void* Unknown08;
};

// The state's root: the table's slots 0 and 1 are its two virtuals.
class Class_10E8BE68
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
};

// Game/Class_10E90D70.h copied whole, with the member at +4 typed as the
// Class_Field04* the state holds (the header has it as an int array).
class Class_10E90D70 : public Class_10E8BE68
{
public:
    Class_10E90D70(int A, int B);
    ~Class_10E90D70();

    Class_Field04* Unknown04;
    char Pad08[0x38];
};

// Game/Class_10BD4120.h copied whole, with the destructor its objects use.
class Class_10BD4120
{
public:
    Class_10BD4120() : Unknown00(0), Unknown04(0), m_Buffer(0) {}
    ~Class_10BD4120()
    {
        Empty();
    }

    void FUN_10a20940(int Count);
    void Empty()
    {
        FUN_10a20940(0);
        if (Unknown04)
        {
            GetAllocator()->Virtual5(m_Buffer);
            m_Buffer = 0;
            Unknown04 = 0;
        }
    }

    int Unknown00;
    int Unknown04;
    void* m_Buffer;
};

class Class_10FF667C
{
public:
    char Pad00[0x2C];
    cIntArray* Unknown2C;
};

extern Class_10FF667C* DAT_10ff667c;

void ReleaseShared();

class State_Search : public Class_10E90D70
{
public:
    ~State_Search();

    char Unknown40[4];
    cIntArray Unknown44;
    char Unknown50[0x48];
    Class_10943600 Unknown98;
    char UnknownA4[0x10];
    Class_10943600 UnknownB4;
    char UnknownC0[8];
    Class_10BD4120 UnknownC8;
};

// FUNCTION: 0x10BD4310 ??1State_Search@@QAE@XZ
State_Search::~State_Search()
{
    Unknown04->FUN_10bb83e0();
    Unknown04->ClearEntry();
    ReleaseShared();
    void* Item = Unknown04->m_Owner->FUN_10c7d570();
    DAT_10ff667c->Unknown2C->Remove((int)Item);
    ((Class_10BB86B0*)Unknown04)->FUN_10bb86b0(0.5f);
}
