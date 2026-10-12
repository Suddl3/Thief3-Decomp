// Game/Unsorted_10AB7530.cpp: functions matched byte for byte, assembled by tools/agent/integrate.py.
// Declarations above the functions belong in include/ once they settle.

#include "Game/Class_10905A90_Member.h"
#include "Game/Class_10AB90F0.h"

Class_10905A90_Member* GetAllocator();

struct Struct_10AB86C0
{
    int Unknown00;
    char Unknown04[0x2C];
};

class Class_10AB86C0
{
public:
    int Contains(int Value);

    int FindIndex(int Value)
    {
        for (int i = 0; i < m_Count; i++)
        {
            if (Value == m_Entries[i].Unknown00)
                return i;
        }
        return -1;
    }

    char Unknown00[4];
    int m_Count;
    char Unknown08[4];
    Struct_10AB86C0* m_Entries;
};

int __stdcall FUN_10bb9030(int Code, void* Dest);

struct Struct_10AB7610
{
    int Unknown00[11];
};

class Class_10AB7610_Param
{
public:
    char Unknown00[0xC4];
    Struct_10AB7610 Unknown0C4;
    Struct_10AB7610 Unknown0F0;
    Struct_10AB7610 Unknown11C;
    Struct_10AB7610 Unknown148;
    char Unknown174[4];
    Struct_10AB7610 Unknown178;
};

// FUNCTION: 0x10AB7610 ?GetDifficultyParam@@YAXPAVClass_10AB7610_Param@@HPAUStruct_10AB7610@@@Z
void GetDifficultyParam(Class_10AB7610_Param* Param, int Index, Struct_10AB7610* Out)
{
    if (Index == 4)
    {
        *Out = Param->Unknown178;
        return;
    }
    int Code = 0x80822;
    Struct_10AB7610* Source = &Param->Unknown0C4;
    switch (Index)
    {
    case 0:
        Code = 0x80822;
        break;
    case 1:
        Code = 0x80823;
        Source = &Param->Unknown0F0;
        break;
    case 2:
        Code = 0x80824;
        Source = &Param->Unknown11C;
        break;
    case 3:
        Code = 0x80825;
        Source = &Param->Unknown148;
        break;
    }
    if (!FUN_10bb9030(Code, Out))
        *Out = *Source;
}

// FUNCTION: 0x10AB86C0 ?Contains@Class_10AB86C0@@QAEHH@Z
int Class_10AB86C0::Contains(int Value)
{
    return FindIndex(Value) >= 0;
}

// FUNCTION: 0x10AB90F0 ?Free@Class_10AB90F0@@QAEXXZ
void Class_10AB90F0::Free()
{
    FUN_10ab8e90(0);
    if (Unknown04)
    {
        GetAllocator()->Virtual5(m_Data);
        m_Data = 0;
        Unknown04 = 0;
    }
}
