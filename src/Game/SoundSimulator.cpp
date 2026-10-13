// Game/SoundSimulator.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/SoundSimulator.h"
#include "Game/Class_10AFCF40.h"
#include "Game/Class_10C55800.h"
#include "Game/TimeManager.h"
#include "Game/Class_10C55090.h"

class Class_10C41420
{
public:
    void FUN_10c41ab0(int p1);
};

Class_10C41420* GetSoundBufferPool();

class Class_10C549A0_Target
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6();
    virtual void Virtual7();
    virtual void Virtual8();
    virtual void Virtual9();
    virtual void Virtual10();
};

class Class_10C549A0_Value
{
public:
    char Unknown00[8];
    Class_10C549A0_Target* Unknown08;
};

struct Struct_10C549A0_Entry
{
    int Unknown00;
    Class_10C549A0_Value* Unknown04;
};

struct Struct_10C549A0
{
    char Unknown00[4];
    int Unknown04;
};

// FUNCTION: 0x10C547B0 ?FUN_10c547b0@SoundSimulator@@UAEXH@Z
void SoundSimulator::FUN_10c547b0(int p1)
{
    GetSoundBufferPool()->FUN_10c41ab0(p1);
}

// FUNCTION: 0x10C549A0 ?FUN_10c549a0@SoundSimulator@@UAEXPAUStruct_10C549A0@@@Z
void SoundSimulator::FUN_10c549a0(Struct_10C549A0* A)
{
    for (int i = 0; i < m_EntryCount; i++)
    {
        Struct_10C549A0_Entry& Entry = m_Entries[i];
        if (Entry.Unknown00 == A->Unknown04)
            Entry.Unknown04->Unknown08->Virtual10();
    }
}
