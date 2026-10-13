// Game/Class_10E65590.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10AD26E0.h"
#include "Game/Class_10E65590.h"
#include "Game/cIntArray.h"
#include <vector>
#include "Game/Class_10A1F9C0.h"
#include "Game/Class_10A1F9D0.h"
#include "Game/Class_10A1FA70.h"
#include "Game/Class_10A1FB50.h"
#include "Game/cBuildFleshBSP.h"
#include "Game/Struct_10A1FA70.h"
#include "Game/Class_1098E330.h"

class Class_10AE7460;

struct Struct_10A1FA00
{
    int* Unknown00;
    int Unknown04;
};

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
            if (Unknown04.m_Count <= Index)
                Unknown04.FUN_10c00a60(Index + 1);
            Class_10AE7460* Old = (Class_10AE7460*)Unknown04.m_Data[Index];
            if (Old && Old != Obj)
                Old->FUN_10ae7460();
            Unknown04.m_Data[Index] = (int)Obj;
        }
    }
}

// FUNCTION: 0x10A1FA00 ?FUN_10a1fa00@Class_10E65590@@UAEXHPAVClass_10AD26E0@@HPAUStruct_10A1FA00@@@Z
void Class_10E65590::FUN_10a1fa00(int A, Class_10AD26E0* B, int C, Struct_10A1FA00* D)
{
    if (D->Unknown04 != 0)
    {
        if (B->FUN_10ad26e0())
            FUN_10a1f950(B->Unknown24);
    }
    else
    {
        if (B->FUN_10ad26e0())
        {
            int* Key = D->Unknown00;
            if (Key)
            {
                int Index = *Key;
                if (Unknown04.m_Count > Index && Index >= 0 && Unknown04.m_Data[Index] == (int)B->Unknown24)
                    Unknown04.m_Data[Index] = 0;
            }
        }
    }
}
