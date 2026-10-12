// Game/Unsorted_10A1F950.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include <vector>
#include "Game/Class_10A1F9C0.h"
#include "Game/Class_10A1F9D0.h"
#include "Game/Class_10A1FA70.h"
#include "Game/Class_10A1FB50.h"
#include "Game/cBuildFleshBSP.h"
#include "Game/Struct_10A1FA70.h"
#include "Game/Class_1098E330.h"
#include "Game/cIntArray.h"
#include "Game/Class_10E65590.h"

extern void* DAT_10e6561c[];

class Class_10AE7460
{
public:
    bool FUN_10ae7460();

    char Unknown00[0xE8];
    Class_1098E330* UnknownE8;
};

// FUNCTION: 0x10A1F950 ?FUN_10a1f950@Class_10E65590@@QAEXPAVClass_10AE7460@@@Z
void Class_10E65590::FUN_10a1f950(Class_10AE7460* Obj)
{
    int Index;
    if (Obj->UnknownE8->FUN_1098e330(0x200467, &Index))
    {
        if (!Obj->FUN_10ae7460())
        {
            if (Unknown04.Unknown00 <= Index)
                Unknown04.FUN_10c00a60(Index + 1);
            Class_10AE7460* Old = (Class_10AE7460*)Unknown04.Unknown08[Index];
            if (Old && Old != Obj)
                Old->FUN_10ae7460();
            Unknown04.Unknown08[Index] = (int)Obj;
        }
    }
}

// FUNCTION: 0x10A1F9C0 ?GetFirst@Class_10A1F9C0@@QAEHXZ
int Class_10A1F9C0::GetFirst()
{
    if (m_Count <= 0)
        return 0;
    return *m_Values;
}

// FUNCTION: 0x10A1F9D0 ?Lookup@Class_10A1F9D0@@QAEHH@Z
int Class_10A1F9D0::Lookup(int A)
{
    int Index = FUN_10a1f8a0(A);
    if (Index >= 0 && Index < m_Count)
        return m_Values[Index];
    return 0;
}

// FUNCTION: 0x10A1FA70 ?GetEntry@Class_10A1FA70@@QAEXHPAH0@Z
void Class_10A1FA70::GetEntry(int Index, int* A, int* B)
{
    if (Index < m_Entries.size())
    {
        *A = m_Entries[Index].Unknown00;
        *B = m_Entries[Index].Unknown04;
    }
    else
    {
        *A = -1;
        *B = -1;
    }
}

// FUNCTION: 0x10A1FB50 ?Lookup@Class_10A1FB50@@QAEHH@Z
int Class_10A1FB50::Lookup(int A)
{
    int Index = FUN_10a1fad0(A);
    if (Index >= 0 && Index < m_Count)
        return m_Values[Index];
    return 0;
}

// FUNCTION: 0x10A22E20 ?Init@cBuildFleshBSP@@QAEPAV1@XZ
cBuildFleshBSP* cBuildFleshBSP::Init()
{
    Unknown00 = DAT_10e6561c;
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
    Unknown34 = 0;
    Unknown38 = 0;
    Unknown3C = 0;
    Unknown40 = 0;
    Unknown44 = 0;
    Unknown48 = 0;
    Unknown4C = 0;
    Unknown50 = 0;
    Unknown54 = 0;
    Unknown58 = 0;
    Unknown5C = 0;
    Unknown60 = 0;
    Unknown6C = 0;
    Unknown70 = 0;
    Unknown74 = 0;
    Unknown78 = 0;
    Unknown7C = 0;
    Unknown80 = 0;
    return this;
}
