// Game/cAIManager.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/cAIManager.h"
#include "Game/Class_10E97BEC.h"
#include "Game/Struct_10C09A10.h"
#include "Game/Class_10BAF8E0.h"
#include "Game/Class_10E896A8.h"
#include "Game/cIntArray.h"

class Class_10C0B6B0_Unknown0B0
{
public:
    virtual void Virtual0();
    virtual void Virtual1();
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual Class_10E896A8* Virtual6();
};

struct Struct_10C0B6B0_Unknown0C0
{
    char Unknown00[0xB0];
    Class_10C0B6B0_Unknown0B0* Unknown0B0;
};

struct Struct_10C0B6B0
{
    char Unknown00[0xC0];
    Struct_10C0B6B0_Unknown0C0* Unknown0C0;
};

class FArchive
{
public:
    virtual void Virtual0();
    virtual void Virtual1(void* A, int B);
    virtual void Virtual2();
    virtual void Virtual3();
    virtual void Virtual4();
    virtual void Virtual5();
    virtual void Virtual6(void* Value);

    char Unknown04[16];
    int Unknown14;
};

// FUNCTION: 0x10C0AF80 ?Reset@cAIManager@@UAEXXZ
void cAIManager::Reset()
{
    m_Active = 0;
    Unknown38 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown3C = 0;
    Unknown30 = 0;
    Unknown34 = 0;
    Unknown42 = 0;
}

// FUNCTION: 0x10C0B040 ?FUN_10c0b040@cAIManager@@UAE_NXZ
bool cAIManager::FUN_10c0b040()
{
    return Unknown08 < 8;
}

// FUNCTION: 0x10C0B3C0 ?FUN_10c0b3c0@cAIManager@@UAEXE@Z
void cAIManager::FUN_10c0b3c0(unsigned char param)
{
    Unknown41 = param;
}

// FUNCTION: 0x10C0B6B0 ?FUN_10c0b6b0@cAIManager@@UAE_NPAUStruct_10C0B6B0@@@Z
bool cAIManager::FUN_10c0b6b0(Struct_10C0B6B0* A)
{
    Struct_10C0B6B0_Unknown0C0* Owner = A->Unknown0C0;
    if (!Owner)
        return false;
    Class_10C0B6B0_Unknown0B0* Source = Owner->Unknown0B0;
    if (Source)
    {
        Class_10E896A8* Target = Source->Virtual6();
        if (Target && Target->FUN_10b87900())
            return false;
    }
    return true;
}

// FUNCTION: 0x10C0B960 ?Serialize@cAIManager@@QAEXAAVFArchive@@@Z
void cAIManager::Serialize(FArchive& Ar)
{
    int Count = m_Controllers.Count;
    Ar.Virtual1(&Count, 4);
    if (Ar.Unknown14)
        m_Controllers.SetCount(Count);
    for (int i = 0; i < Count; i++)
        Ar.Virtual6(&m_Controllers.Data[i]);
}
