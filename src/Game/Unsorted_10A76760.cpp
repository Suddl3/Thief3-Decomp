// Game/Unsorted_10A76760.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.
#include "Core/Core.h"
#include "Game/cActorManager.h"
#include "Game/Class_10E6BC80.h"
#include "Game/Class_10E6BD64.h"
#include "Game/Class_10E6BD18.h"
#include "Game/ULevel.h"

extern void* DAT_10e6bd64[];

extern void* DAT_10e6bd60[];

extern void* DAT_10e6bd68[];

class Class_10E6BD68
{
public:
    Class_10E6BD68* FUN_10a796a0();

    void** Unknown00;
    int Unknown04;
    int Unknown08;
    int Unknown0C;
    int Unknown10;
    int Unknown14;
    int Unknown18;
    int Unknown1C;
    int Unknown20;
    int Unknown24;
    int Unknown28;
    int Unknown2C;
    int Unknown30;
};

class Object_10A76760
{
public:
    int Unknown00;
};

class ULevelBase;

// FUNCTION: 0x10A76760 ?FindBySource@Class_10E6BC80@@UAEPAVObject_10A76760@@H@Z
Object_10A76760* Class_10E6BC80::FindBySource(int Value)
{
    for (int i = 0; i < Unknown04; i++)
    {
        if (m_Copies[i]->Unknown00 == Value)
            return m_Copies[i];
    }
    return 0;
}

// FUNCTION: 0x10A77300 ??$Cast@VULevel@@@@YAPAVULevel@@PAVUObject@@@Z
template ULevel* Cast<ULevel>(UObject* Src);

// FUNCTION: 0x10A790B0 ?FUN_10a790b0@Class_10E6BD18@@QAEXHHHH@Z
void Class_10E6BD18::FUN_10a790b0(int A, int B, int C, int D)
{
    if (A != 0x27)
    {
        cActorManager::FUN_10a4c470(A, B, C, D);
        return;
    }
    Virtual16(B, C, D);
}

// FUNCTION: 0x10A79670 ?FUN_10a79670@Class_10E6BD64@@QAEXXZ
void Class_10E6BD64::FUN_10a79670()
{
    VTable = DAT_10e6bd64;
    if (Unknown18)
        ::operator delete(Unknown18);
    Unknown18 = 0;
    VTable = DAT_10e6bd60;
}

// FUNCTION: 0x10A796A0 ?FUN_10a796a0@Class_10E6BD68@@QAEPAV1@XZ
Class_10E6BD68* Class_10E6BD68::FUN_10a796a0()
{
    Unknown00 = DAT_10e6bd68;
    Unknown04 = 0;
    Unknown08 = 0;
    Unknown0C = 0;
    Unknown10 = 0;
    Unknown14 = 0;
    Unknown18 = 0;
    Unknown1C = 0;
    Unknown20 = 0;
    Unknown24 = 0;
    Unknown28 = 0;
    Unknown2C = 0;
    Unknown30 = 0;
    return this;
}
